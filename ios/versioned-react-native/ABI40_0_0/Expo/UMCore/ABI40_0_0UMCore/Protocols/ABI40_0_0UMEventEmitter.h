// Copyright © 2018 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>
#import <ABI40_0_0UMCore/ABI40_0_0UMDefines.h>
#import <ABI40_0_0UMCore/ABI40_0_0UMExportedModule.h>

// Implement this protocol in your exported module to be able
// to send events through platform event emitter.

@protocol ABI40_0_0UMEventEmitter

- (void)startObserving;
- (void)stopObserving;

- (NSArray<NSString *> *)supportedEvents;

@end
