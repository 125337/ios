@interface TPDynamicStatisticParams : NSObject
{
    long long _videoBufferedDurationMs; // +0x8
    long long _audioBufferedDurationMs; // +0x10
    long long _videoDecodeFrameCount; // +0x18
    long long _videoRenderFrameCount; // +0x20
    long long _minVideoDecodeCostTimeMs; // +0x28
    long long _avgVideoDecodeCostTimeMs; // +0x30
    long long _maxVideoDecodeCostTimeMs; // +0x38
    long long _minVideoStreamBitrateBitsPerSecond; // +0x40
    long long _avgVideoStreamBitrateBitsPerSecond; // +0x48
    long long _maxVideoStreamBitrateBitsPerSecond; // +0x50
    long long _minVideoGopSize; // +0x58
    long long _avgVideoGopSize; // +0x60
    long long _maxVideoGopSize; // +0x68
}
- (long long)videoBufferedDurationMs;
- (void)setVideoBufferedDurationMs:(long long)arg1;
- (long long)audioBufferedDurationMs;
- (void)setAudioBufferedDurationMs:(long long)arg1;
- (long long)videoDecodeFrameCount;
- (void)setVideoDecodeFrameCount:(long long)arg1;
- (long long)videoRenderFrameCount;
- (void)setVideoRenderFrameCount:(long long)arg1;
- (long long)minVideoDecodeCostTimeMs;
- (void)setMinVideoDecodeCostTimeMs:(long long)arg1;
- (long long)avgVideoDecodeCostTimeMs;
- (void)setAvgVideoDecodeCostTimeMs:(long long)arg1;
- (long long)maxVideoDecodeCostTimeMs;
- (void)setMaxVideoDecodeCostTimeMs:(long long)arg1;
- (long long)minVideoStreamBitrateBitsPerSecond;
- (void)setMinVideoStreamBitrateBitsPerSecond:(long long)arg1;
- (long long)avgVideoStreamBitrateBitsPerSecond;
- (void)setAvgVideoStreamBitrateBitsPerSecond:(long long)arg1;
- (long long)maxVideoStreamBitrateBitsPerSecond;
- (void)setMaxVideoStreamBitrateBitsPerSecond:(long long)arg1;
- (long long)minVideoGopSize;
- (void)setMinVideoGopSize:(long long)arg1;
- (long long)avgVideoGopSize;
- (void)setAvgVideoGopSize:(long long)arg1;
- (long long)maxVideoGopSize;
- (void)setMaxVideoGopSize:(long long)arg1;
@end

