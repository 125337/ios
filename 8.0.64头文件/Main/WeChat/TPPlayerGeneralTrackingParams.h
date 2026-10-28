@interface TPPlayerGeneralTrackingParams : NSObject
{
    long long _apiPrepareTimeMs; // +0x8
    long long _playerSchedulingThreadPrepareStartTimeMs; // +0x10
    long long _demuxerThreadPrepareStartTimeMs; // +0x18
    long long _demuxerOpenFileStartTimeMs; // +0x20
    long long _demuxerOpenFileEndTimeMs; // +0x28
    long long _initFirstClipPositionEndTimeMs; // +0x30
    long long _firstVideoPacketReadEndTimeMs; // +0x38
    long long _firstAudioPacketReadEndTimeMs; // +0x40
    long long _demuxerThreadOnprepareCompleteTimeMs; // +0x48
    long long _playerSchedulingThreadOnpreparedTimeMs; // +0x50
    long long _videoDecoderOpenedTimeMs; // +0x58
    long long _firstVideoFrameRenderedTimeMs; // +0x60
    long long _audioDecoderOpenedTimeMs; // +0x68
    long long _firstAudioFrameRenderedTimeMs; // +0x70
}
- (long long)apiPrepareTimeMs;
- (void)setApiPrepareTimeMs:(long long)arg1;
- (long long)playerSchedulingThreadPrepareStartTimeMs;
- (void)setPlayerSchedulingThreadPrepareStartTimeMs:(long long)arg1;
- (long long)demuxerThreadPrepareStartTimeMs;
- (void)setDemuxerThreadPrepareStartTimeMs:(long long)arg1;
- (long long)demuxerOpenFileStartTimeMs;
- (void)setDemuxerOpenFileStartTimeMs:(long long)arg1;
- (long long)demuxerOpenFileEndTimeMs;
- (void)setDemuxerOpenFileEndTimeMs:(long long)arg1;
- (long long)initFirstClipPositionEndTimeMs;
- (void)setInitFirstClipPositionEndTimeMs:(long long)arg1;
- (long long)firstVideoPacketReadEndTimeMs;
- (void)setFirstVideoPacketReadEndTimeMs:(long long)arg1;
- (long long)firstAudioPacketReadEndTimeMs;
- (void)setFirstAudioPacketReadEndTimeMs:(long long)arg1;
- (long long)demuxerThreadOnprepareCompleteTimeMs;
- (void)setDemuxerThreadOnprepareCompleteTimeMs:(long long)arg1;
- (long long)playerSchedulingThreadOnpreparedTimeMs;
- (void)setPlayerSchedulingThreadOnpreparedTimeMs:(long long)arg1;
- (long long)videoDecoderOpenedTimeMs;
- (void)setVideoDecoderOpenedTimeMs:(long long)arg1;
- (long long)firstVideoFrameRenderedTimeMs;
- (void)setFirstVideoFrameRenderedTimeMs:(long long)arg1;
- (long long)audioDecoderOpenedTimeMs;
- (void)setAudioDecoderOpenedTimeMs:(long long)arg1;
- (long long)firstAudioFrameRenderedTimeMs;
- (void)setFirstAudioFrameRenderedTimeMs:(long long)arg1;
@end
