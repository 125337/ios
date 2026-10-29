@interface TPPlayerBaseMediaParams : NSObject
{
    float _videoStartFrameRate; // +0x8
    NSString * _containerFormat; // +0x10
    long long _durationMs; // +0x18
    long long _hlsSourceType; // +0x20
    long long _demuxerType; // +0x28
    long long _videoWidth; // +0x30
    long long _videoHeight; // +0x38
    long long _videoEncodeFormat; // +0x40
    long long _videoStartStreamBitrateBps; // +0x48
    long long _videoDecoderType; // +0x50
    long long _videoRendererType; // +0x58
    long long _audioEncodeFormat; // +0x60
    long long _audioDecoderType; // +0x68
    long long _audioRendererType; // +0x70
    long long _subtitleEncodeFormat; // +0x78
}
- (id)init;
- (id)containerFormat;
- (void)setContainerFormat:(id)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)hlsSourceType;
- (void)setHlsSourceType:(long long)arg1;
- (long long)demuxerType;
- (void)setDemuxerType:(long long)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (long long)videoEncodeFormat;
- (void)setVideoEncodeFormat:(long long)arg1;
- (long long)videoStartStreamBitrateBps;
- (void)setVideoStartStreamBitrateBps:(long long)arg1;
- (float)videoStartFrameRate;
- (void)setVideoStartFrameRate:(float)arg1;
- (long long)videoDecoderType;
- (void)setVideoDecoderType:(long long)arg1;
- (long long)videoRendererType;
- (void)setVideoRendererType:(long long)arg1;
- (long long)audioEncodeFormat;
- (void)setAudioEncodeFormat:(long long)arg1;
- (long long)audioDecoderType;
- (void)setAudioDecoderType:(long long)arg1;
- (long long)audioRendererType;
- (void)setAudioRendererType:(long long)arg1;
- (long long)subtitleEncodeFormat;
- (void)setSubtitleEncodeFormat:(long long)arg1;
- (void).cxx_destruct;
@end

