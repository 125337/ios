@interface TXCVideoDecodeError : NSObject
+ (id)errorWithOSStatus:(int)arg1;
+ (id)hevcUnsupported;
+ (id)decoderCreateFailed;
+ (id)hwDecoderCreateFailed;
+ (id)swDecoderCreateFailed;
+ (id)decodeFailed;
+ (id)needsIFrame;
+ (id)parameterSetIncomplete;
+ (id)incompleteCustomDecoder;
+ (id)cacheReachMax;
+ (id)errorWithCode:(long long)arg1;
@end

