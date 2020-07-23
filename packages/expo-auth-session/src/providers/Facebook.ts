import { useEffect, useState } from 'react';

import { useAuthRequestResult, useLoadedAuthRequest } from '../AuthRequestHooks';
import {
  AuthRequest,
  AuthRequestPromptOptions,
  AuthSessionResult,
  DiscoveryDocument,
  ResponseType,
} from '../AuthSession';
import { requestAsync } from '../Fetch';
import { AccessTokenRequest, TokenResponse } from '../TokenRequest';
import { ProviderAuthRequestConfig, ProviderUser } from './Provider.types';

const settings = {
  windowFeatures: { width: 700, height: 600 },
  // These are required for Firebase to work properly which is a reasonable default.
  minimumScopes: ['public_profile', 'email'],
};

export const discovery: DiscoveryDocument = {
  authorizationEndpoint: 'https://www.facebook.com/v6.0/dialog/oauth',
  tokenEndpoint: 'https://graph.facebook.com/v6.0/oauth/access_token',
};

export interface FacebookAuthRequestConfig extends ProviderAuthRequestConfig {}

function applyRequiredScopes(scopes: string[] = []): string[] {
  // Add the required scopes for returning profile data.
  const requiredScopes = [...scopes, ...settings.minimumScopes];
  // Remove duplicates
  return [...new Set(requiredScopes)];
}

class FacebookAuthRequest extends AuthRequest {
  constructor({
    language,
    selectAccount,
    extraParams = {},
    clientSecret,
    ...config
  }: FacebookAuthRequestConfig) {
    const inputParams: Record<string, string> = {
      display: 'popup',
      ...extraParams,
    };
    if (language) inputParams.locale = language;
    if (selectAccount && !inputParams.auth_type) inputParams.auth_type = 'reauthenticate';

    // Apply the default scopes
    const scopes = applyRequiredScopes(config.scopes);
    let inputClientSecret: string | undefined;
    //  Facebook will throw if you attempt to use the client secret
    if (config.responseType && config.responseType !== ResponseType.Code) {
      // TODO: maybe warn that you shouldn't store the client secret on the client
      inputClientSecret = clientSecret;
    }
    super({
      ...config,
      clientSecret: inputClientSecret,
      scopes,
      extraParams: inputParams,
    });
  }
}

/**
 * Load an authorization request.
 * Returns a loaded request, a response, and a prompt method.
 * When the prompt method completes then the response will be fulfilled.
 *
 *  - TODO: Put Getting started guide URL here
 *
 * @param config
 * @param discovery
 */
export function useAuthRequest(
  config: FacebookAuthRequestConfig
): [
  FacebookAuthRequest | null,
  AuthSessionResult | null,
  (options?: AuthRequestPromptOptions) => Promise<AuthSessionResult>
] {
  const request = useLoadedAuthRequest(config, discovery, FacebookAuthRequest);
  const [result, promptAsync] = useAuthRequestResult(request, discovery, {
    windowFeatures: settings.windowFeatures,
  });
  const [fullResult, setFullResult] = useState<AuthSessionResult | null>(null);
  // TODO add user info
  useEffect(() => {
    let isMounted = true;
    if (
      !fullResult &&
      config.clientSecret &&
      request?.responseType === ResponseType.Code &&
      result?.type === 'success'
    ) {
      // TODO: This doesn't work
      const exchangeRequest = new AccessTokenRequest({
        clientId: config.clientId,
        clientSecret: config.clientSecret,
        redirectUri: config.redirectUri,
        scopes: config.scopes,
        code: result.params.code,
        extraParams: {
          // @ts-ignore: allow for instances where PKCE is disabled
          code_verifier: request.codeVerifier,
        },
      });
      exchangeRequest.performAsync(discovery).then(authentication => {
        if (isMounted) {
          setFullResult({
            ...result,
            authentication,
          });
        }
      });
    } else {
      setFullResult(result);
    }
    return () => {
      isMounted = false;
    };
  }, [
    config.clientId,
    config.clientSecret,
    config.redirectUri,
    config.scopes?.join(','),
    request?.codeVerifier,
    request?.responseType,
    config.responseType,
    result,
    fullResult,
  ]);

  return [request, fullResult, promptAsync];
}

/**
 * Fetch generic user info from the provider's OpenID Connect `userInfoEndpoint` (if supported).
 *
 * [UserInfo](https://openid.net/specs/openid-connect-core-1_0.html#UserInfo)
 *
 * @param config The `accessToken` for a user, returned from a code exchange or auth request.
 * @param discovery The `userInfoEndpoint` for a provider.
 */
export async function fetchUserInfoAsync(
  response: Pick<TokenResponse, 'accessToken'>
): Promise<ProviderUser> {
  const providerData = await requestAsync<Record<string, any>>(
    `https://graph.facebook.com/me?fields=name,email,picture?access_token=${response.accessToken}`,
    {
      headers: {
        'Content-Type': 'application/x-www-form-urlencoded',
      },
      dataType: 'json',
      method: 'GET',
    }
  );

  const user = {
    name: providerData.name,
    email: providerData.email,
    id: providerData.id,
    picture: providerData.picture.data.url,
    providerData,
  };
  return user;
}
