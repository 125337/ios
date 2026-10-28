@interface TPVodEndParams : NSObject
{
    long long _retentionDurationMs; // +0x8
    long long _errorCode; // +0x10
    long long _tSeekCount; // +0x18
    long long _tSeekBufferingCount; // +0x20
    long long _tSeekBufferingDurationMs; // +0x28
    long long _tSecondBufferingCount; // +0x30
    long long _tSecondBufferingDurationMs; // +0x38
    long long _videoDecoderType; // +0x40
    long long _audioDecoderType; // +0x48
    long long _demuxerType; // +0x50
    long long _videoRendererType; // +0x58
    long long _audioRendererType; // +0x60
}
- (id)init;
- (long long)retentionDurationMs;
- (void)setRetentionDurationMs:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (long long)tSeekCount;
- (void)setTSeekCount:(long long)arg1;
- (long long)tSeekBufferingCount;
- (void)setTSeekBufferingCount:(long long)arg1;
- (long long)tSeekBufferingDurationMs;
- (void)setTSeekBufferingDurationMs:(long long)arg1;
- (long long)tSecondBufferingCount;
- (void)setTSecondBufferingCount:(long long)arg1;
- (long long)tSecondBufferingDurationMs;
- (void)setTSecondBufferingDurationMs:(long long)arg1;
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
