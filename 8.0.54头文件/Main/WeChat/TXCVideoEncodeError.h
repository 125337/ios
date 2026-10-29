@interface TXCVideoEncodeError : NSObject
+ (id)errorWithOSStatus:(int)arg1;
+ (id)hevcUnsupported;
+ (id)hwEncoderCreateFailed;
+ (id)swEncoderCreateFailed;
+ (id)encodeFailed;
+ (id)hwEncoderStucked;
+ (id)errorWithCode:(long long)arg1;
@end

