@interface WCFinderPostStaticSnapshot : NSObject
{
    long long _durationMs; // +0x8
    long long _fileSizeBytes; // +0x10
    NSString * _codec; // +0x18
    double _frameRate; // +0x20
    long long _width; // +0x28
    long long _height; // +0x30
    long long _bitrateBitsPerSecond; // +0x38
    long long _configuredVideoBitrateBitsPerSec; // +0x40
    long long _configuredAudioBitrateBitsPerSec; // +0x48
}
- (id)initWithDurationMs:(long long)arg1 fileSizeBytes:(long long)arg2 codec:(id)arg3 frameRate:(double)arg4 width:(long long)arg5 height:(long long)arg6 bitrateBitsPerSecond:(long long)arg7 configuredVideoBitrateBitsPerSec:(long long)arg8 configuredAudioBitrateBitsPerSec:(long long)arg9;
- (id)description;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)fileSizeBytes;
- (void)setFileSizeBytes:(long long)arg1;
- (id)codec;
- (void)setCodec:(id)arg1;
- (double)frameRate;
- (void)setFrameRate:(double)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (long long)bitrateBitsPerSecond;
- (void)setBitrateBitsPerSecond:(long long)arg1;
- (long long)configuredVideoBitrateBitsPerSec;
- (void)setConfiguredVideoBitrateBitsPerSec:(long long)arg1;
- (long long)configuredAudioBitrateBitsPerSec;
- (void)setConfiguredAudioBitrateBitsPerSec:(long long)arg1;
- (void).cxx_destruct;
@end
