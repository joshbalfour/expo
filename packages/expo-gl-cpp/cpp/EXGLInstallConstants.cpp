#include "EXGLContext.h"

#define _INSTALL_CONSTANT(name)                                                     \
  jsGl.setProperty(                                                                 \
          runtime,                                                                  \
          jsi::PropNameID::forUtf8(runtime, #name),                                 \
          static_cast<double>(GL_ ## name))


void EXGLContext::installConstants(jsi::Runtime& runtime, jsi::Object& jsGl) {
  _INSTALL_CONSTANT(ACTIVE_ATTRIBUTES); //35721
  // _INSTALL_CONSTANT(ACTIVE_ATTRIBUTE_MAX_LENGTH); //35722
  _INSTALL_CONSTANT(ACTIVE_TEXTURE); //34016
  _INSTALL_CONSTANT(ACTIVE_UNIFORMS); //35718
  _INSTALL_CONSTANT(ACTIVE_UNIFORM_BLOCKS); //35382
  // _INSTALL_CONSTANT(ACTIVE_UNIFORM_MAX_LENGTH); //35719
  _INSTALL_CONSTANT(ALIASED_LINE_WIDTH_RANGE); //33902
  _INSTALL_CONSTANT(ALIASED_POINT_SIZE_RANGE); //33901
  _INSTALL_CONSTANT(ALPHA); //6406
  _INSTALL_CONSTANT(ALPHA_BITS); //3413
  _INSTALL_CONSTANT(ALREADY_SIGNALED); //37146
  _INSTALL_CONSTANT(ALWAYS); //519
  _INSTALL_CONSTANT(ANY_SAMPLES_PASSED); //35887
  _INSTALL_CONSTANT(ANY_SAMPLES_PASSED_CONSERVATIVE); //36202
  _INSTALL_CONSTANT(ARRAY_BUFFER); //34962
  _INSTALL_CONSTANT(ARRAY_BUFFER_BINDING); //34964
  _INSTALL_CONSTANT(ATTACHED_SHADERS); //35717
  _INSTALL_CONSTANT(BACK); //1029
  _INSTALL_CONSTANT(BLEND); //3042
  _INSTALL_CONSTANT(BLEND_COLOR); //32773
  _INSTALL_CONSTANT(BLEND_DST_ALPHA); //32970
  _INSTALL_CONSTANT(BLEND_DST_RGB); //32968
  _INSTALL_CONSTANT(BLEND_EQUATION); //32777
  _INSTALL_CONSTANT(BLEND_EQUATION_ALPHA); //34877
  _INSTALL_CONSTANT(BLEND_EQUATION_RGB); //32777
  _INSTALL_CONSTANT(BLEND_SRC_ALPHA); //32971
  _INSTALL_CONSTANT(BLEND_SRC_RGB); //32969
  _INSTALL_CONSTANT(BLUE_BITS); //3412
  _INSTALL_CONSTANT(BOOL); //35670
  _INSTALL_CONSTANT(BOOL_VEC2); //35671
  _INSTALL_CONSTANT(BOOL_VEC3); //35672
  _INSTALL_CONSTANT(BOOL_VEC4); //35673
  _INSTALL_CONSTANT(BROWSER_DEFAULT_WEBGL); //37444
  _INSTALL_CONSTANT(BUFFER_SIZE); //34660
  _INSTALL_CONSTANT(BUFFER_USAGE); //34661
  _INSTALL_CONSTANT(BYTE); //5120
  _INSTALL_CONSTANT(CCW); //2305
  _INSTALL_CONSTANT(CLAMP_TO_EDGE); //33071
  _INSTALL_CONSTANT(COLOR); //6144
  _INSTALL_CONSTANT(COLOR_ATTACHMENT0); //36064
  _INSTALL_CONSTANT(COLOR_ATTACHMENT1); //36065
  _INSTALL_CONSTANT(COLOR_ATTACHMENT2); //36066
  _INSTALL_CONSTANT(COLOR_ATTACHMENT3); //36067
  _INSTALL_CONSTANT(COLOR_ATTACHMENT4); //36068
  _INSTALL_CONSTANT(COLOR_ATTACHMENT5); //36069
  _INSTALL_CONSTANT(COLOR_ATTACHMENT6); //36070
  _INSTALL_CONSTANT(COLOR_ATTACHMENT7); //36071
  _INSTALL_CONSTANT(COLOR_ATTACHMENT8); //36072
  _INSTALL_CONSTANT(COLOR_ATTACHMENT9); //36073
  _INSTALL_CONSTANT(COLOR_ATTACHMENT10); //36074
  _INSTALL_CONSTANT(COLOR_ATTACHMENT11); //36075
  _INSTALL_CONSTANT(COLOR_ATTACHMENT12); //36076
  _INSTALL_CONSTANT(COLOR_ATTACHMENT13); //36077
  _INSTALL_CONSTANT(COLOR_ATTACHMENT14); //36078
  _INSTALL_CONSTANT(COLOR_ATTACHMENT15); //36079
  _INSTALL_CONSTANT(COLOR_BUFFER_BIT); //16384
  _INSTALL_CONSTANT(COLOR_CLEAR_VALUE); //3106
  _INSTALL_CONSTANT(COLOR_WRITEMASK); //3107
  _INSTALL_CONSTANT(COMPARE_REF_TO_TEXTURE); //34894
  _INSTALL_CONSTANT(COMPILE_STATUS); //35713
  _INSTALL_CONSTANT(COMPRESSED_TEXTURE_FORMATS); //34467
  _INSTALL_CONSTANT(CONDITION_SATISFIED); //37148
  _INSTALL_CONSTANT(CONSTANT_ALPHA); //32771
  _INSTALL_CONSTANT(CONSTANT_COLOR); //32769
  _INSTALL_CONSTANT(CONTEXT_LOST_WEBGL); //37442
  _INSTALL_CONSTANT(COPY_READ_BUFFER); //36662
  _INSTALL_CONSTANT(COPY_READ_BUFFER_BINDING); //36662
  _INSTALL_CONSTANT(COPY_WRITE_BUFFER); //36663
  _INSTALL_CONSTANT(COPY_WRITE_BUFFER_BINDING); //36663
  _INSTALL_CONSTANT(CULL_FACE); //2884
  _INSTALL_CONSTANT(CULL_FACE_MODE); //2885
  _INSTALL_CONSTANT(CURRENT_PROGRAM); //35725
  _INSTALL_CONSTANT(CURRENT_QUERY); //34917
  _INSTALL_CONSTANT(CURRENT_VERTEX_ATTRIB); //34342
  _INSTALL_CONSTANT(CW); //2304
  _INSTALL_CONSTANT(DECR); //7683
  _INSTALL_CONSTANT(DECR_WRAP); //34056
  _INSTALL_CONSTANT(DELETE_STATUS); //35712
  _INSTALL_CONSTANT(DEPTH); //6145
  _INSTALL_CONSTANT(DEPTH24_STENCIL8); //35056
  _INSTALL_CONSTANT(DEPTH32F_STENCIL8); //36013
  _INSTALL_CONSTANT(DEPTH_ATTACHMENT); //36096
  _INSTALL_CONSTANT(DEPTH_BITS); //3414
  _INSTALL_CONSTANT(DEPTH_BUFFER_BIT); //256
  _INSTALL_CONSTANT(DEPTH_COMPONENT24); //33190
  _INSTALL_CONSTANT(DEPTH_COMPONENT32F); //36012
  _INSTALL_CONSTANT(DEPTH_CLEAR_VALUE); //2931
  _INSTALL_CONSTANT(DEPTH_COMPONENT); //6402
  _INSTALL_CONSTANT(DEPTH_COMPONENT16); //33189
  _INSTALL_CONSTANT(DEPTH_FUNC); //2932
  _INSTALL_CONSTANT(DEPTH_RANGE); //2928
  _INSTALL_CONSTANT(DEPTH_STENCIL); //34041
  _INSTALL_CONSTANT(DEPTH_STENCIL_ATTACHMENT); //33306
  _INSTALL_CONSTANT(DEPTH_TEST); //2929
  _INSTALL_CONSTANT(DEPTH_WRITEMASK); //2930
  _INSTALL_CONSTANT(DITHER); //3024
  _INSTALL_CONSTANT(DONT_CARE); //4352
  _INSTALL_CONSTANT(DRAW_BUFFER0); // 34853
  _INSTALL_CONSTANT(DRAW_BUFFER1); // 34854
  _INSTALL_CONSTANT(DRAW_BUFFER2); // 34855
  _INSTALL_CONSTANT(DRAW_BUFFER3); // 34856
  _INSTALL_CONSTANT(DRAW_BUFFER4); // 34857
  _INSTALL_CONSTANT(DRAW_BUFFER5); // 34858
  _INSTALL_CONSTANT(DRAW_BUFFER6); // 34859
  _INSTALL_CONSTANT(DRAW_BUFFER7); // 34860
  _INSTALL_CONSTANT(DRAW_BUFFER8); // 34861
  _INSTALL_CONSTANT(DRAW_BUFFER9); // 34862
  _INSTALL_CONSTANT(DRAW_BUFFER10); // 34863
  _INSTALL_CONSTANT(DRAW_BUFFER11); // 34864
  _INSTALL_CONSTANT(DRAW_BUFFER12); // 34865
  _INSTALL_CONSTANT(DRAW_BUFFER13); // 34866
  _INSTALL_CONSTANT(DRAW_BUFFER14); // 34867
  _INSTALL_CONSTANT(DRAW_BUFFER15); // 34868
  _INSTALL_CONSTANT(DRAW_FRAMEBUFFER); // 36009
  _INSTALL_CONSTANT(DRAW_FRAMEBUFFER_BINDING); //36006
  _INSTALL_CONSTANT(DST_ALPHA); //772
  _INSTALL_CONSTANT(DST_COLOR); //774
  _INSTALL_CONSTANT(DYNAMIC_COPY); //35050
  _INSTALL_CONSTANT(DYNAMIC_DRAW); //35048
  _INSTALL_CONSTANT(DYNAMIC_READ); //35049
  _INSTALL_CONSTANT(ELEMENT_ARRAY_BUFFER); //34963
  _INSTALL_CONSTANT(ELEMENT_ARRAY_BUFFER_BINDING); //34965
  _INSTALL_CONSTANT(EQUAL); //514
  // _INSTALL_CONSTANT(FALSE); //0
  _INSTALL_CONSTANT(FASTEST); //4353
  _INSTALL_CONSTANT(FLOAT); //5126
  _INSTALL_CONSTANT(FLOAT_32_UNSIGNED_INT_24_8_REV); //36269
  _INSTALL_CONSTANT(FLOAT_MAT2); //35674
  _INSTALL_CONSTANT(FLOAT_MAT2x3); //35685
  _INSTALL_CONSTANT(FLOAT_MAT2x4); //35686
  _INSTALL_CONSTANT(FLOAT_MAT3); //35675
  _INSTALL_CONSTANT(FLOAT_MAT3x2); //35687
  _INSTALL_CONSTANT(FLOAT_MAT3x4); //35688
  _INSTALL_CONSTANT(FLOAT_MAT4); //35676
  _INSTALL_CONSTANT(FLOAT_MAT4x2); //35689
  _INSTALL_CONSTANT(FLOAT_MAT4x3); //35690
  _INSTALL_CONSTANT(FLOAT_VEC2); //35664
  _INSTALL_CONSTANT(FLOAT_VEC3); //35665
  _INSTALL_CONSTANT(FLOAT_VEC4); //35666
  _INSTALL_CONSTANT(FRAGMENT_SHADER); //35632
  _INSTALL_CONSTANT(FRAGMENT_SHADER_DERIVATIVE_HINT); //35723
  _INSTALL_CONSTANT(FRAMEBUFFER); //36160
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE); //33301
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_BLUE_SIZE); //33300
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING); //33296
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE); //33297
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE); //33302
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_GREEN_SIZE); //33299
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_OBJECT_NAME); //36049
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE); //36048
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_RED_SIZE); //33298
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE); //33303
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE); //36051
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER); //36052
  _INSTALL_CONSTANT(FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL); //36050
  _INSTALL_CONSTANT(FRAMEBUFFER_BINDING); //36006
  _INSTALL_CONSTANT(FRAMEBUFFER_COMPLETE); //36053
  _INSTALL_CONSTANT(FRAMEBUFFER_DEFAULT); //33304
  _INSTALL_CONSTANT(FRAMEBUFFER_INCOMPLETE_ATTACHMENT); //36054
  _INSTALL_CONSTANT(FRAMEBUFFER_INCOMPLETE_DIMENSIONS); //36057
  _INSTALL_CONSTANT(FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT); //36055
  _INSTALL_CONSTANT(FRAMEBUFFER_INCOMPLETE_MULTISAMPLE); //36182
  _INSTALL_CONSTANT(FRAMEBUFFER_UNSUPPORTED); //36061
  _INSTALL_CONSTANT(FRONT); //1028
  _INSTALL_CONSTANT(FRONT_AND_BACK); //1032
  _INSTALL_CONSTANT(FRONT_FACE); //2886
  _INSTALL_CONSTANT(FUNC_ADD); //32774
  _INSTALL_CONSTANT(FUNC_REVERSE_SUBTRACT); //32779
  _INSTALL_CONSTANT(FUNC_SUBTRACT); //32778
  _INSTALL_CONSTANT(GENERATE_MIPMAP_HINT); //33170
  _INSTALL_CONSTANT(GEQUAL); //518
  _INSTALL_CONSTANT(GREATER); //516
  _INSTALL_CONSTANT(GREEN_BITS); //3411
  _INSTALL_CONSTANT(HALF_FLOAT); //5131
  _INSTALL_CONSTANT(HIGH_FLOAT); //36338
  _INSTALL_CONSTANT(HIGH_INT); //36341
  _INSTALL_CONSTANT(IMPLEMENTATION_COLOR_READ_TYPE); //35738
  _INSTALL_CONSTANT(IMPLEMENTATION_COLOR_READ_FORMAT); //35739
  _INSTALL_CONSTANT(INCR); //7682
  _INSTALL_CONSTANT(INCR_WRAP); //34055
  // _INSTALL_CONSTANT(INFO_LOG_LENGTH); //35716
  _INSTALL_CONSTANT(INT); //5124
  _INSTALL_CONSTANT(INTERLEAVED_ATTRIBS); //35980
  _INSTALL_CONSTANT(INT_2_10_10_10_REV); //36255
  _INSTALL_CONSTANT(INT_SAMPLER_2D); //36298
  _INSTALL_CONSTANT(INT_SAMPLER_3D); //36299
  _INSTALL_CONSTANT(INT_SAMPLER_CUBE); //36300
  _INSTALL_CONSTANT(INT_SAMPLER_2D_ARRAY); //36303
  _INSTALL_CONSTANT(INT_VEC2); //35667
  _INSTALL_CONSTANT(INT_VEC3); //35668
  _INSTALL_CONSTANT(INT_VEC4); //35669
  _INSTALL_CONSTANT(INVALID_ENUM); //1280
  _INSTALL_CONSTANT(INVALID_FRAMEBUFFER_OPERATION); //1286
  _INSTALL_CONSTANT(INVALID_INDEX); //4294967295
  _INSTALL_CONSTANT(INVALID_OPERATION); //1282
  _INSTALL_CONSTANT(INVALID_VALUE); //1281
  _INSTALL_CONSTANT(INVERT); //5386
  _INSTALL_CONSTANT(KEEP); //7680
  _INSTALL_CONSTANT(LEQUAL); //515
  _INSTALL_CONSTANT(LESS); //513
  _INSTALL_CONSTANT(LINEAR); //9729
  _INSTALL_CONSTANT(LINEAR_MIPMAP_LINEAR); //9987
  _INSTALL_CONSTANT(LINEAR_MIPMAP_NEAREST); //9985
  _INSTALL_CONSTANT(LINES); //1
  _INSTALL_CONSTANT(LINE_LOOP); //2
  _INSTALL_CONSTANT(LINE_STRIP); //3
  _INSTALL_CONSTANT(LINE_WIDTH); //2849
  _INSTALL_CONSTANT(LINK_STATUS); //35714
  _INSTALL_CONSTANT(LOW_FLOAT); //36336
  _INSTALL_CONSTANT(LOW_INT); //36339
  _INSTALL_CONSTANT(LUMINANCE); //6409
  _INSTALL_CONSTANT(LUMINANCE_ALPHA); //6410
  _INSTALL_CONSTANT(MAX); //32776
  _INSTALL_CONSTANT(MAX_3D_TEXTURE_SIZE); //32883
  _INSTALL_CONSTANT(MAX_ARRAY_TEXTURE_LAYERS); //35071
  _INSTALL_CONSTANT(MAX_CLIENT_WAIT_TIMEOUT_WEBGL); //37447
  _INSTALL_CONSTANT(MAX_COLOR_ATTACHMENTS); //36063
  _INSTALL_CONSTANT(MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS); //35379
  _INSTALL_CONSTANT(MAX_COMBINED_TEXTURE_IMAGE_UNITS); //35661
  _INSTALL_CONSTANT(MAX_COMBINED_UNIFORM_BLOCKS); //35374
  _INSTALL_CONSTANT(MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS); //35377
  _INSTALL_CONSTANT(MAX_CUBE_MAP_TEXTURE_SIZE); //34076
  _INSTALL_CONSTANT(MAX_DRAW_BUFFERS); // 34852
  _INSTALL_CONSTANT(MAX_ELEMENTS_INDICES); //33001
  _INSTALL_CONSTANT(MAX_ELEMENTS_VERTICES); //33000
  _INSTALL_CONSTANT(MAX_ELEMENT_INDEX); //36203
  _INSTALL_CONSTANT(MAX_FRAGMENT_INPUT_COMPONENTS); //37157
  _INSTALL_CONSTANT(MAX_FRAGMENT_UNIFORM_BLOCKS); //35373
  _INSTALL_CONSTANT(MAX_FRAGMENT_UNIFORM_COMPONENTS); //35657
  _INSTALL_CONSTANT(MAX_FRAGMENT_UNIFORM_VECTORS); //36349
  _INSTALL_CONSTANT(MAX_PROGRAM_TEXEL_OFFSET); //35077
  _INSTALL_CONSTANT(MAX_RENDERBUFFER_SIZE); //34024
  _INSTALL_CONSTANT(MAX_SAMPLES); //36183
  _INSTALL_CONSTANT(MAX_SERVER_WAIT_TIMEOUT); //37137
  _INSTALL_CONSTANT(MAX_TEXTURE_IMAGE_UNITS); //34930
  _INSTALL_CONSTANT(MAX_TEXTURE_LOD_BIAS); //34045
  _INSTALL_CONSTANT(MAX_TEXTURE_SIZE); //3379
  _INSTALL_CONSTANT(MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS); //35978
  _INSTALL_CONSTANT(MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS); //35979
  _INSTALL_CONSTANT(MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS); //35968
  _INSTALL_CONSTANT(MAX_UNIFORM_BLOCK_SIZE); //35376
  _INSTALL_CONSTANT(MAX_UNIFORM_BUFFER_BINDINGS); //35375
  _INSTALL_CONSTANT(MAX_VARYING_COMPONENTS); //35659
  _INSTALL_CONSTANT(MAX_VARYING_VECTORS); //36348
  _INSTALL_CONSTANT(MAX_VERTEX_ATTRIBS); //34921
  _INSTALL_CONSTANT(MAX_VERTEX_OUTPUT_COMPONENTS); //37154
  _INSTALL_CONSTANT(MAX_VERTEX_TEXTURE_IMAGE_UNITS); //35660
  _INSTALL_CONSTANT(MAX_VERTEX_UNIFORM_BLOCKS); //35371
  _INSTALL_CONSTANT(MAX_VERTEX_UNIFORM_COMPONENTS); //35658
  _INSTALL_CONSTANT(MAX_VERTEX_UNIFORM_VECTORS); //36347
  _INSTALL_CONSTANT(MAX_VIEWPORT_DIMS); //3386
  _INSTALL_CONSTANT(MEDIUM_FLOAT); //36337
  _INSTALL_CONSTANT(MEDIUM_INT); //36340
  _INSTALL_CONSTANT(MIN); //32775
  _INSTALL_CONSTANT(MIN_PROGRAM_TEXEL_OFFSET); //35076
  _INSTALL_CONSTANT(MIRRORED_REPEAT); //33648
  _INSTALL_CONSTANT(NEAREST); //9728
  _INSTALL_CONSTANT(NEAREST_MIPMAP_LINEAR); //9986
  _INSTALL_CONSTANT(NEAREST_MIPMAP_NEAREST); //9984
  _INSTALL_CONSTANT(NEVER); //512
  _INSTALL_CONSTANT(NICEST); //4354
  _INSTALL_CONSTANT(NONE); //0
  _INSTALL_CONSTANT(NOTEQUAL); //517
  _INSTALL_CONSTANT(NO_ERROR); //0
  // _INSTALL_CONSTANT(NUM_COMPRESSED_TEXTURE_FORMATS); //34466
  _INSTALL_CONSTANT(OBJECT_TYPE); //37138
  _INSTALL_CONSTANT(ONE); //1
  _INSTALL_CONSTANT(ONE_MINUS_CONSTANT_ALPHA); //32772
  _INSTALL_CONSTANT(ONE_MINUS_CONSTANT_COLOR); //32770
  _INSTALL_CONSTANT(ONE_MINUS_DST_ALPHA); //773
  _INSTALL_CONSTANT(ONE_MINUS_DST_COLOR); //775
  _INSTALL_CONSTANT(ONE_MINUS_SRC_ALPHA); //771
  _INSTALL_CONSTANT(ONE_MINUS_SRC_COLOR); //769
  _INSTALL_CONSTANT(OUT_OF_MEMORY); //1285
  _INSTALL_CONSTANT(PACK_ALIGNMENT); //3333
  _INSTALL_CONSTANT(PACK_ROW_LENGTH); //3330
  _INSTALL_CONSTANT(PACK_SKIP_PIXELS); //3332
  _INSTALL_CONSTANT(PACK_SKIP_ROWS); //3331
  _INSTALL_CONSTANT(PIXEL_PACK_BUFFER); //35051
  _INSTALL_CONSTANT(PIXEL_PACK_BUFFER_BINDING); //35053
  _INSTALL_CONSTANT(PIXEL_UNPACK_BUFFER); //35052
  _INSTALL_CONSTANT(PIXEL_UNPACK_BUFFER_BINDING); //35055
  _INSTALL_CONSTANT(POINTS); //0
  _INSTALL_CONSTANT(POLYGON_OFFSET_FACTOR); //32824
  _INSTALL_CONSTANT(POLYGON_OFFSET_FILL); //32823
  _INSTALL_CONSTANT(POLYGON_OFFSET_UNITS); //10752
  _INSTALL_CONSTANT(QUERY_RESULT); //34918
  _INSTALL_CONSTANT(QUERY_RESULT_AVAILABLE); //34919
  _INSTALL_CONSTANT(R11F_G11F_B10F); //35898
  _INSTALL_CONSTANT(R16F); //33325
  _INSTALL_CONSTANT(R16I); //33331
  _INSTALL_CONSTANT(R16UI); //33332
  _INSTALL_CONSTANT(R32F); //33326
  _INSTALL_CONSTANT(R32I); //33333
  _INSTALL_CONSTANT(R32UI); //33334
  _INSTALL_CONSTANT(R8); //33321
  _INSTALL_CONSTANT(R8I); //33329
  _INSTALL_CONSTANT(R8UI); //33330
  _INSTALL_CONSTANT(R8_SNORM); //36756
  _INSTALL_CONSTANT(RASTERIZER_DISCARD); //35977
  _INSTALL_CONSTANT(READ_BUFFER); //3074
  _INSTALL_CONSTANT(READ_FRAMEBUFFER); //36008
  _INSTALL_CONSTANT(READ_FRAMEBUFFER_BINDING); //36010
  _INSTALL_CONSTANT(RED); //6403
  _INSTALL_CONSTANT(RED_BITS); //3410
  _INSTALL_CONSTANT(RED_INTEGER); //36244
  _INSTALL_CONSTANT(RENDERBUFFER); //36161
  _INSTALL_CONSTANT(RENDERBUFFER_ALPHA_SIZE); //36179
  _INSTALL_CONSTANT(RENDERBUFFER_BINDING); //36007
  _INSTALL_CONSTANT(RENDERBUFFER_BLUE_SIZE); //36178
  _INSTALL_CONSTANT(RENDERBUFFER_DEPTH_SIZE); //36180
  _INSTALL_CONSTANT(RENDERBUFFER_GREEN_SIZE); //36177
  _INSTALL_CONSTANT(RENDERBUFFER_HEIGHT); //36163
  _INSTALL_CONSTANT(RENDERBUFFER_INTERNAL_FORMAT); //36164
  _INSTALL_CONSTANT(RENDERBUFFER_RED_SIZE); //36176
  _INSTALL_CONSTANT(RENDERBUFFER_SAMPLES); //36011
  _INSTALL_CONSTANT(RENDERBUFFER_STENCIL_SIZE); //36181
  _INSTALL_CONSTANT(RENDERBUFFER_WIDTH); //36162
  _INSTALL_CONSTANT(RENDERER); //7937
  _INSTALL_CONSTANT(REPEAT); //10497
  _INSTALL_CONSTANT(REPLACE); //7681
  _INSTALL_CONSTANT(RG); //33319
  _INSTALL_CONSTANT(RG16F); //33327
  _INSTALL_CONSTANT(RG16I); //33337
  _INSTALL_CONSTANT(RG16UI); //33338
  _INSTALL_CONSTANT(RG32F); //33328
  _INSTALL_CONSTANT(RG32I); //33339
  _INSTALL_CONSTANT(RG32UI); //33340
  _INSTALL_CONSTANT(RG8); //33323
  _INSTALL_CONSTANT(RG8I); //33335
  _INSTALL_CONSTANT(RG8UI); //33336
  _INSTALL_CONSTANT(RG8_SNORM); //36757
  _INSTALL_CONSTANT(RGB); //6407
  _INSTALL_CONSTANT(RGB10_A2); //32857
  _INSTALL_CONSTANT(RGB10_A2UI); //36975
  _INSTALL_CONSTANT(RGB16F); //34843
  _INSTALL_CONSTANT(RGB16I); //36233
  _INSTALL_CONSTANT(RGB16UI); //36215
  _INSTALL_CONSTANT(RGB32F); //34837
  _INSTALL_CONSTANT(RGB32I); //36227
  _INSTALL_CONSTANT(RGB32UI); //36209
  _INSTALL_CONSTANT(RGB5_A1); //32855
  _INSTALL_CONSTANT(RGB565); //36194
  _INSTALL_CONSTANT(RGB8); //32849
  _INSTALL_CONSTANT(RGB8I); //36239
  _INSTALL_CONSTANT(RGB8UI); //36221
  _INSTALL_CONSTANT(RGB8_SNORM); //36758
  _INSTALL_CONSTANT(RGB9_E5); //35901
  _INSTALL_CONSTANT(RGBA); //6408
  _INSTALL_CONSTANT(RGBA4); //32854
  _INSTALL_CONSTANT(RGBA8); //32856
  _INSTALL_CONSTANT(RGBA8I); //36238
  _INSTALL_CONSTANT(RGBA8UI); //36220
  _INSTALL_CONSTANT(RGBA8_SNORM); //36759
  _INSTALL_CONSTANT(RGBA16F); //34842
  _INSTALL_CONSTANT(RGBA16I); //36232
  _INSTALL_CONSTANT(RGBA16UI); //36214
  _INSTALL_CONSTANT(RGBA32F); //34836
  _INSTALL_CONSTANT(RGBA32I); //36226
  _INSTALL_CONSTANT(RGBA32UI); //36208
  _INSTALL_CONSTANT(RGB_INTEGER); //36248
  _INSTALL_CONSTANT(RGBA_INTEGER); //36249
  _INSTALL_CONSTANT(RG_INTEGER); //33320
  _INSTALL_CONSTANT(SAMPLER_2D); //35678
  _INSTALL_CONSTANT(SAMPLER_2D_ARRAY); //36289
  _INSTALL_CONSTANT(SAMPLER_2D_ARRAY_SHADOW); //36292
  _INSTALL_CONSTANT(SAMPLER_2D_SHADOW); //35682
  _INSTALL_CONSTANT(SAMPLER_3D); //35679
  _INSTALL_CONSTANT(SAMPLER_BINDING); //35097
  _INSTALL_CONSTANT(SAMPLER_CUBE); //35680
  _INSTALL_CONSTANT(SAMPLER_CUBE_SHADOW); //36293
  _INSTALL_CONSTANT(SAMPLES); //32937
  _INSTALL_CONSTANT(SAMPLE_ALPHA_TO_COVERAGE); //32926
  _INSTALL_CONSTANT(SAMPLE_BUFFERS); //32936
  _INSTALL_CONSTANT(SAMPLE_COVERAGE); //32928
  _INSTALL_CONSTANT(SAMPLE_COVERAGE_INVERT); //32939
  _INSTALL_CONSTANT(SAMPLE_COVERAGE_VALUE); //32938
  _INSTALL_CONSTANT(SCISSOR_BOX); //3088
  _INSTALL_CONSTANT(SCISSOR_TEST); //3089
  _INSTALL_CONSTANT(SEPARATE_ATTRIBS); //35981
  // _INSTALL_CONSTANT(SHADER_COMPILER); //36346
  // _INSTALL_CONSTANT(SHADER_SOURCE_LENGTH); //35720
  _INSTALL_CONSTANT(SHADER_TYPE); //35663
  _INSTALL_CONSTANT(SHADING_LANGUAGE_VERSION); //35724
  _INSTALL_CONSTANT(SHORT); //5122
  _INSTALL_CONSTANT(SIGNALED); //37145
  _INSTALL_CONSTANT(SIGNED_NORMALIZED); //36764
  _INSTALL_CONSTANT(SRC_ALPHA); //770
  _INSTALL_CONSTANT(SRC_ALPHA_SATURATE); //776
  _INSTALL_CONSTANT(SRC_COLOR); //768
  _INSTALL_CONSTANT(SRGB); //35904
  _INSTALL_CONSTANT(SRGB8); //35905
  _INSTALL_CONSTANT(SRGB8_ALPHA8); //35907
  _INSTALL_CONSTANT(STATIC_COPY); //35046
  _INSTALL_CONSTANT(STATIC_DRAW); //35044
  _INSTALL_CONSTANT(STATIC_READ); //35045
  _INSTALL_CONSTANT(STENCIL); //6146
  _INSTALL_CONSTANT(STENCIL_ATTACHMENT); //36128
  _INSTALL_CONSTANT(STENCIL_BACK_FAIL); //34817
  _INSTALL_CONSTANT(STENCIL_BACK_FUNC); //34816
  _INSTALL_CONSTANT(STENCIL_BACK_PASS_DEPTH_FAIL); //34818
  _INSTALL_CONSTANT(STENCIL_BACK_PASS_DEPTH_PASS); //34819
  _INSTALL_CONSTANT(STENCIL_BACK_REF); //36003
  _INSTALL_CONSTANT(STENCIL_BACK_VALUE_MASK); //36004
  _INSTALL_CONSTANT(STENCIL_BACK_WRITEMASK); //36005
  _INSTALL_CONSTANT(STENCIL_BITS); //3415
  _INSTALL_CONSTANT(STENCIL_BUFFER_BIT); //1024
  _INSTALL_CONSTANT(STENCIL_CLEAR_VALUE); //2961
  _INSTALL_CONSTANT(STENCIL_FAIL); //2964
  _INSTALL_CONSTANT(STENCIL_FUNC); //2962
  _INSTALL_CONSTANT(STENCIL_INDEX); //6401
  _INSTALL_CONSTANT(STENCIL_INDEX8); //36168
  _INSTALL_CONSTANT(STENCIL_PASS_DEPTH_FAIL); //2965
  _INSTALL_CONSTANT(STENCIL_PASS_DEPTH_PASS); //2966
  _INSTALL_CONSTANT(STENCIL_REF); //2967
  _INSTALL_CONSTANT(STENCIL_TEST); //2960
  _INSTALL_CONSTANT(STENCIL_VALUE_MASK); //2963
  _INSTALL_CONSTANT(STENCIL_WRITEMASK); //2968
  _INSTALL_CONSTANT(STREAM_COPY); //35042
  _INSTALL_CONSTANT(STREAM_DRAW); //35040
  _INSTALL_CONSTANT(STREAM_READ); //35041
  _INSTALL_CONSTANT(SUBPIXEL_BITS); //3408
  _INSTALL_CONSTANT(SYNC_CONDITION); //37139
  _INSTALL_CONSTANT(SYNC_FENCE); //37142
  _INSTALL_CONSTANT(SYNC_FLAGS); //37141
  _INSTALL_CONSTANT(SYNC_FLUSH_COMMANDS_BIT); //1
  _INSTALL_CONSTANT(SYNC_GPU_COMMANDS_COMPLETE); //37143
  _INSTALL_CONSTANT(SYNC_STATUS); //37140
  _INSTALL_CONSTANT(TEXTURE); //5890
  _INSTALL_CONSTANT(TEXTURE0); //33984
  _INSTALL_CONSTANT(TEXTURE1); //33985
  _INSTALL_CONSTANT(TEXTURE2); //33986
  _INSTALL_CONSTANT(TEXTURE3); //33987
  _INSTALL_CONSTANT(TEXTURE4); //33988
  _INSTALL_CONSTANT(TEXTURE5); //33989
  _INSTALL_CONSTANT(TEXTURE6); //33990
  _INSTALL_CONSTANT(TEXTURE7); //33991
  _INSTALL_CONSTANT(TEXTURE8); //33992
  _INSTALL_CONSTANT(TEXTURE9); //33993
  _INSTALL_CONSTANT(TEXTURE10); //33994
  _INSTALL_CONSTANT(TEXTURE11); //33995
  _INSTALL_CONSTANT(TEXTURE12); //33996
  _INSTALL_CONSTANT(TEXTURE13); //33997
  _INSTALL_CONSTANT(TEXTURE14); //33998
  _INSTALL_CONSTANT(TEXTURE15); //33999
  _INSTALL_CONSTANT(TEXTURE16); //34000
  _INSTALL_CONSTANT(TEXTURE17); //34001
  _INSTALL_CONSTANT(TEXTURE18); //34002
  _INSTALL_CONSTANT(TEXTURE19); //34003
  _INSTALL_CONSTANT(TEXTURE20); //34004
  _INSTALL_CONSTANT(TEXTURE21); //34005
  _INSTALL_CONSTANT(TEXTURE22); //34006
  _INSTALL_CONSTANT(TEXTURE23); //34007
  _INSTALL_CONSTANT(TEXTURE24); //34008
  _INSTALL_CONSTANT(TEXTURE25); //34009
  _INSTALL_CONSTANT(TEXTURE26); //34010
  _INSTALL_CONSTANT(TEXTURE27); //34011
  _INSTALL_CONSTANT(TEXTURE28); //34012
  _INSTALL_CONSTANT(TEXTURE29); //34013
  _INSTALL_CONSTANT(TEXTURE30); //34014
  _INSTALL_CONSTANT(TEXTURE31); //34015
  _INSTALL_CONSTANT(TEXTURE_2D); //3553
  _INSTALL_CONSTANT(TEXTURE_2D_ARRAY); //35866
  _INSTALL_CONSTANT(TEXTURE_3D); //32879
  _INSTALL_CONSTANT(TEXTURE_BASE_LEVEL); //33084
  _INSTALL_CONSTANT(TEXTURE_BINDING_2D); //32873
  _INSTALL_CONSTANT(TEXTURE_BINDING_2D_ARRAY); //35869
  _INSTALL_CONSTANT(TEXTURE_BINDING_3D); //32874
  _INSTALL_CONSTANT(TEXTURE_BINDING_CUBE_MAP); //34068
  _INSTALL_CONSTANT(TEXTURE_COMPARE_FUNC); //34893
  _INSTALL_CONSTANT(TEXTURE_COMPARE_MODE); //34892
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP); //34067
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_X); //34070
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_Y); //34072
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_NEGATIVE_Z); //34074
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_X); //34069
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_Y); //34071
  _INSTALL_CONSTANT(TEXTURE_CUBE_MAP_POSITIVE_Z); //34073
  _INSTALL_CONSTANT(TEXTURE_IMMUTABLE_FORMAT); //37167
  _INSTALL_CONSTANT(TEXTURE_IMMUTABLE_LEVELS); //33503
  _INSTALL_CONSTANT(TEXTURE_MAG_FILTER); //10240
  _INSTALL_CONSTANT(TEXTURE_MAX_LEVEL); //33085
  _INSTALL_CONSTANT(TEXTURE_MAX_LOD); //33083
  _INSTALL_CONSTANT(TEXTURE_MIN_FILTER); //10241
  _INSTALL_CONSTANT(TEXTURE_MIN_LOD); //33082
  _INSTALL_CONSTANT(TEXTURE_WRAP_R); //32882
  _INSTALL_CONSTANT(TEXTURE_WRAP_S); //10242
  _INSTALL_CONSTANT(TEXTURE_WRAP_T); //10243
  _INSTALL_CONSTANT(TIMEOUT_EXPIRED); //37147
  _INSTALL_CONSTANT(TIMEOUT_IGNORED); //-1
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK); //36386
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_ACTIVE); //36388
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BINDING); //36389
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BUFFER); //35982
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BUFFER_BINDING); //35983
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BUFFER_MODE); //35967
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BUFFER_SIZE); //35973
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_BUFFER_START); //35972
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_PAUSED); //36387
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN); //35976
  _INSTALL_CONSTANT(TRANSFORM_FEEDBACK_VARYINGS); //35971
  _INSTALL_CONSTANT(TRIANGLES); //4
  _INSTALL_CONSTANT(TRIANGLE_FAN); //6
  _INSTALL_CONSTANT(TRIANGLE_STRIP); //5
  // _INSTALL_CONSTANT(TRUE); //1
  _INSTALL_CONSTANT(UNIFORM_ARRAY_STRIDE); //35388
  _INSTALL_CONSTANT(UNIFORM_BLOCK_ACTIVE_UNIFORMS); //35394
  _INSTALL_CONSTANT(UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES); //35395
  _INSTALL_CONSTANT(UNIFORM_BLOCK_BINDING); //35391
  _INSTALL_CONSTANT(UNIFORM_BLOCK_DATA_SIZE); //35392
  _INSTALL_CONSTANT(UNIFORM_BLOCK_INDEX); //35386
  _INSTALL_CONSTANT(UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER); //35397
  _INSTALL_CONSTANT(UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER); //35396
  _INSTALL_CONSTANT(UNIFORM_BUFFER); //35345
  _INSTALL_CONSTANT(UNIFORM_BUFFER_BINDING); //35368
  _INSTALL_CONSTANT(UNIFORM_BUFFER_OFFSET_ALIGNMENT); //35380
  _INSTALL_CONSTANT(UNIFORM_BUFFER_SIZE); //35370
  _INSTALL_CONSTANT(UNIFORM_BUFFER_START); //35369
  _INSTALL_CONSTANT(UNIFORM_IS_ROW_MAJOR); //35390
  _INSTALL_CONSTANT(UNIFORM_MATRIX_STRIDE); //35389
  _INSTALL_CONSTANT(UNIFORM_OFFSET); //35387
  _INSTALL_CONSTANT(UNIFORM_SIZE); //35384
  _INSTALL_CONSTANT(UNIFORM_TYPE); //35383
  _INSTALL_CONSTANT(UNPACK_ALIGNMENT); //3317
  _INSTALL_CONSTANT(UNPACK_COLORSPACE_CONVERSION_WEBGL); //37443
  _INSTALL_CONSTANT(UNPACK_FLIP_Y_WEBGL); //37440
  _INSTALL_CONSTANT(UNPACK_IMAGE_HEIGHT); //32878
  _INSTALL_CONSTANT(UNPACK_PREMULTIPLY_ALPHA_WEBGL); //37441
  _INSTALL_CONSTANT(UNPACK_ROW_LENGTH); //3314
  _INSTALL_CONSTANT(UNPACK_SKIP_IMAGES); //32877
  _INSTALL_CONSTANT(UNPACK_SKIP_PIXELS); //3316
  _INSTALL_CONSTANT(UNPACK_SKIP_ROWS); //3315
  _INSTALL_CONSTANT(UNSIGNALED); //37144
  _INSTALL_CONSTANT(UNSIGNED_BYTE); //5121
  _INSTALL_CONSTANT(UNSIGNED_INT); //5125
  _INSTALL_CONSTANT(UNSIGNED_INT_10F_11F_11F_REV); //35899
  _INSTALL_CONSTANT(UNSIGNED_INT_24_8); //34042
  _INSTALL_CONSTANT(UNSIGNED_INT_2_10_10_10_REV); //33640
  _INSTALL_CONSTANT(UNSIGNED_INT_5_9_9_9_REV); //35902
  _INSTALL_CONSTANT(UNSIGNED_INT_SAMPLER_2D); //36306
  _INSTALL_CONSTANT(UNSIGNED_INT_SAMPLER_2D_ARRAY); //36311
  _INSTALL_CONSTANT(UNSIGNED_INT_SAMPLER_3D); //36307
  _INSTALL_CONSTANT(UNSIGNED_INT_SAMPLER_CUBE); //36308
  _INSTALL_CONSTANT(UNSIGNED_INT_VEC2); //36294
  _INSTALL_CONSTANT(UNSIGNED_INT_VEC3); //36295
  _INSTALL_CONSTANT(UNSIGNED_INT_VEC4); //36296
  _INSTALL_CONSTANT(UNSIGNED_NORMALIZED); //35863
  _INSTALL_CONSTANT(UNSIGNED_SHORT); //5123
  _INSTALL_CONSTANT(UNSIGNED_SHORT_4_4_4_4); //32819
  _INSTALL_CONSTANT(UNSIGNED_SHORT_5_5_5_1); //32820
  _INSTALL_CONSTANT(UNSIGNED_SHORT_5_6_5); //33635
  _INSTALL_CONSTANT(VALIDATE_STATUS); //35715
  _INSTALL_CONSTANT(VENDOR); //7936
  _INSTALL_CONSTANT(VERSION); //7938
  _INSTALL_CONSTANT(VERTEX_ARRAY_BINDING); //34229
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_BUFFER_BINDING); //34975
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_DIVISOR); //35070
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_ENABLED); //34338
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_INTEGER); //35069
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_NORMALIZED); //34922
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_POINTER); //34373
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_SIZE); //34339
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_STRIDE); //34340
  _INSTALL_CONSTANT(VERTEX_ATTRIB_ARRAY_TYPE); //34341
  _INSTALL_CONSTANT(VERTEX_SHADER); //35633
  _INSTALL_CONSTANT(VIEWPORT); //2978
  _INSTALL_CONSTANT(WAIT_FAILED); //37149
  _INSTALL_CONSTANT(ZERO); //0
};
