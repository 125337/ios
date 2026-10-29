@interface WCFinderPostCompressMetrics : NSObject
{
    BOOL _encodingPlanChangedAfterPrediction; // +0x8
    BOOL _inputHDR; // +0x9
    BOOL _targetOutputHDR; // +0xa
    BOOL _useHDRToSDR; // +0xb
    BOOL _lowPowerModeAtStart; // +0xc
    BOOL _didReencode; // +0xd
    unsigned long long _schemaVersion; // +0x10
    long long _targetWidth; // +0x18
    long long _targetHeight; // +0x20
    double _targetFPS; // +0x28
    long long _targetVideoBitrateBitsPerSecond; // +0x30
    long long _targetAudioBitrateBitsPerSecond; // +0x38
    double _targetIFrameInterval; // +0x40
    unsigned long long _targetCodec; // +0x48
    unsigned long long _encoderType; // +0x50
    long long _thermalStateAtStart; // +0x58
    unsigned long long _compressResult; // +0x60
    double _actualCompressDurationMs; // +0x68
    long long _actualCompressedFileSizeBytes; // +0x70
    NSString * _compressErrorDomain; // +0x78
    long long _compressErrorCode; // +0x80
    long long _actualWidth; // +0x88
    long long _actualHeight; // +0x90
    double _actualFPS; // +0x98
    long long _actualVideoBitrateBitsPerSecond; // +0xa0
    long long _actualAudioBitrateBitsPerSecond; // +0xa8
    long long _actualAudioChannels; // +0xb0
    long long _actualDurationMs; // +0xb8
    unsigned long long _actualCodec; // +0xc0
}
- (id)description;
- (BOOL)encodingPlanChangedAfterPrediction;
- (void)setEncodingPlanChangedAfterPrediction:(BOOL)arg1;
- (unsigned long long)schemaVersion;
- (void)setSchemaVersion:(unsigned long long)arg1;
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
- (BOOL)inputHDR;
- (void)setInputHDR:(BOOL)arg1;
- (BOOL)targetOutputHDR;
- (void)setTargetOutputHDR:(BOOL)arg1;
- (BOOL)useHDRToSDR;
- (void)setUseHDRToSDR:(BOOL)arg1;
- (long long)thermalStateAtStart;
- (void)setThermalStateAtStart:(long long)arg1;
- (BOOL)lowPowerModeAtStart;
- (void)setLowPowerModeAtStart:(BOOL)arg1;
- (unsigned long long)compressResult;
- (void)setCompressResult:(unsigned long long)arg1;
- (BOOL)didReencode;
- (void)setDidReencode:(BOOL)arg1;
- (double)actualCompressDurationMs;
- (void)setActualCompressDurationMs:(double)arg1;
- (long long)actualCompressedFileSizeBytes;
- (void)setActualCompressedFileSizeBytes:(long long)arg1;
- (id)compressErrorDomain;
- (void)setCompressErrorDomain:(id)arg1;
- (long long)compressErrorCode;
- (void)setCompressErrorCode:(long long)arg1;
- (long long)actualWidth;
- (void)setActualWidth:(long long)arg1;
- (long long)actualHeight;
- (void)setActualHeight:(long long)arg1;
- (double)actualFPS;
- (void)setActualFPS:(double)arg1;
- (long long)actualVideoBitrateBitsPerSecond;
- (void)setActualVideoBitrateBitsPerSecond:(long long)arg1;
- (long long)actualAudioBitrateBitsPerSecond;
- (void)setActualAudioBitrateBitsPerSecond:(long long)arg1;
- (long long)actualAudioChannels;
- (void)setActualAudioChannels:(long long)arg1;
- (long long)actualDurationMs;
- (void)setActualDurationMs:(long long)arg1;
- (unsigned long long)actualCodec;
- (void)setActualCodec:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
