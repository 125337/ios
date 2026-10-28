@interface TPLiveEndParams : NSObject
{
    long long _retentionDurationMs; // +0x8
    long long _errorCode; // +0x10
    long long _videoDecoderType; // +0x18
    long long _audioDecoderType; // +0x20
    long long _demuxerType; // +0x28
    long long _videoRendererType; // +0x30
    long long _audioRendererType; // +0x38
}
- (id)init;
- (long long)retentionDurationMs;
- (void)setRetentionDurationMs:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (long long)videoDecoderType;
- (void)setVideoDecoderType:(long long)arg1;
- (long long)audioDecoderType;
- (void)setAudioDecoderType:(long long)arg1;
- (long long)demuxerType;
- (void)setDemuxerType:(long long)arg1;
- (long long)videoRendererType;
- (void)setVideoRendererType:(long long)arg1;
- (long long)audioRendererType;
- (void)setAudioRendererType:(long long)arg1;
@end
