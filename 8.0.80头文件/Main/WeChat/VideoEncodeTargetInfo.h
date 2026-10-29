@interface VideoEncodeTargetInfo : NSObject
{
    BOOL _targetOutputHDR; // +0x8
    BOOL _targetUseHDRToSDR; // +0x9
    BOOL _didReencode; // +0xa
    long long _targetWidth; // +0x10
    long long _targetHeight; // +0x18
    double _targetFPS; // +0x20
    long long _targetVideoBitrateBitsPerSecond; // +0x28
    long long _targetAudioBitrateBitsPerSecond; // +0x30
    double _targetIFrameInterval; // +0x38
    unsigned long long _targetCodec; // +0x40
    unsigned long long _encoderType; // +0x48
}
+ (id)targetInfoWithOutputConfig:(id)arg1;
- (id)description;
- (long long)targetWidth;
- (void)setTargetWidth:(long long)arg1;
- (long long)targetHeight;
- (void)setTargetHeight:(long long)arg1;
- (double)targetFPS;
- (void)setTargetFPS:(double)arg1;
- (long long)targetVideoBitrateBitsPerSecond;
- (void)setTargetVideoBitrateBitsPerSecond:(long long)arg1;
- (long long)targetAudioBitrateBitsPerSecond;
- (void)setTargetAudioBitrateBitsPerSecond:(long long)arg1;
- (double)targetIFrameInterval;
- (void)setTargetIFrameInterval:(double)arg1;
- (unsigned long long)targetCodec;
- (void)setTargetCodec:(unsigned long long)arg1;
- (unsigned long long)encoderType;
- (void)setEncoderType:(unsigned long long)arg1;
- (BOOL)targetOutputHDR;
- (void)setTargetOutputHDR:(BOOL)arg1;
- (BOOL)targetUseHDRToSDR;
- (void)setTargetUseHDRToSDR:(BOOL)arg1;
- (BOOL)didReencode;
- (void)setDidReencode:(BOOL)arg1;
@end
