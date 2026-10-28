@interface TPThumbPlayerWrapper : NSObject
{
    ITPPlayer * _player; // +0x8
    TPThumbPlayerMessageCallbackWrapper * _msgCbWrapper; // +0x10
    TPThumbPlayerAudioFrameCallbackWrapper * _audioFrameCbWrapper; // +0x18
    TPThumbPlayerVideoFrameCallbackWrapper * _videoFrameCbWrapper; // +0x20
    TPThumbPlayerSubtitleFrameCallbackWrapper * _subtitleFrameCbWrapper; // +0x28
    TPThumbPlayerDemuxerCallbackWrapper * _demuxerCbWrapper; // +0x30
    TPThumbPlayerPostProcessFrameCallbackWrapper * _postprocessFrameCbWrapper; // +0x38
    shared_ptr<TPThumbPlayerEventRecordCallbackWrapper> _eventRecordCbWrapper; // +0x40
}
- (id)init;
- (void)dealloc;
- (int)setInitConfig:(void *)arg1;
- (int)setDataSource:(id)arg1;
- (int)setDataSource:(id)arg1 withHttpHeaders:(id)arg2;
- (int)prepare;
- (int)prepareAsync;
- (int)start;
- (int)pause;
- (int)stop;
- (int)reset;
- (int)releasePlayer;
- (int)seekToAsync:(long long)arg1 mode:(int)arg2 opaque:(long long)arg3;
- (int)switchDefinitionAsync:(id)arg1 opaque:(long long)arg2;
- (int)switchDefinitionAsync:(id)arg1 mode:(int)arg2 opaque:(long long)arg3;
- (int)switchDefinitionAsync:(id)arg1 withHttpHeader:(id)arg2 mode:(int)arg3 opaque:(long long)arg4;
- (int)addSubtitleTrackSource:(id)arg1 trackName:(id)arg2;
- (int)addSubtitleTrackSource:(id)arg1 trackName:(id)arg2 httpHeader:(id)arg3;
- (int)addAudioTrackSource:(id)arg1 trackName:(id)arg2;
- (int)addAudioTrackSource:(id)arg1 trackName:(id)arg2 httpHeader:(id)arg3;
- (int)selectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (int)deselectTrackAsync:(int)arg1 opaque:(long long)arg2;
- (int)selectProgramAsync:(int)arg1 opaque:(long long)arg2;
- (int)setOptionLong:(int)arg1 lParam1:(long long)arg2 lParam2:(long long)arg3;
- (int)setOptionObject:(int)arg1 objectParam:(void *)arg2;
- (int)setAudioVolume:(float)arg1;
- (int)setAudioMute:(BOOL)arg1;
- (int)setAudioNormalizeVolumeParams:(id)arg1;
- (int)setPlaybackRate:(float)arg1;
- (int)setVideoSurface:(id)arg1;
- (int)setVideoGravity:(int)arg1;
- (int)setLoopback:(BOOL)arg1 startTimeMs:(long long)arg2 endTimeMs:(long long)arg3;
- (int)setMessageCallback:(id)arg1;
- (int)setAudioFrameCallback:(id)arg1;
- (int)setVideoFrameCallback:(id)arg1;
- (int)setSubtitleFrameCallback:(id)arg1;
- (int)setDemuxerCallback:(id)arg1;
- (int)setPostProcessFrameCallback:(id)arg1;
- (int)setEventRecordCallback:(id)arg1;
- (long long)getPropertyLong:(int)arg1;
- (id)getPropertyString:(int)arg1;
- (int)getVideoWidth;
- (int)getVideoHeight;
- (long long)getDurationMs;
- (long long)getCurrentPositionMs;
- (long long)getBufferedDurationMs;
- (long long)getBufferedSize;
- (vector<TPMediaTrackInfo, std::allocator<TPMediaTrackInfo>>)getTrackInfo;
- (vector<TPAVProgramInfo, std::allocator<TPAVProgramInfo>>)getProgramInfo;
- (TPFrame *)getSnapshot:(int)arg1 width:(int)arg2 height:(int)arg3;
- (TPFrame *)getSubtitleSnapshot:(int)arg1 width:(int)arg2 height:(int)arg3;
- (int)getPlayerID;
- (long long)getDemuxerOffsetInFile;
- (TPGeneralPlayFlowParams)getGeneralPlayFlowParams;
- (TPDynamicStatisticParams)getDynamicStatisticParams;
- (TPDynamicStatisticParams)getDynamicStatisticParamsAndReset;
- (ITPPlayer *)getPlayer;
- (ITPPlayer *)player;
- (void)setPlayer:(ITPPlayer *)arg1;
- (TPThumbPlayerMessageCallbackWrapper *)msgCbWrapper;
- (void)setMsgCbWrapper:(TPThumbPlayerMessageCallbackWrapper *)arg1;
- (TPThumbPlayerAudioFrameCallbackWrapper *)audioFrameCbWrapper;
- (void)setAudioFrameCbWrapper:(TPThumbPlayerAudioFrameCallbackWrapper *)arg1;
- (TPThumbPlayerVideoFrameCallbackWrapper *)videoFrameCbWrapper;
- (void)setVideoFrameCbWrapper:(TPThumbPlayerVideoFrameCallbackWrapper *)arg1;
- (TPThumbPlayerSubtitleFrameCallbackWrapper *)subtitleFrameCbWrapper;
- (void)setSubtitleFrameCbWrapper:(TPThumbPlayerSubtitleFrameCallbackWrapper *)arg1;
- (TPThumbPlayerDemuxerCallbackWrapper *)demuxerCbWrapper;
- (void)setDemuxerCbWrapper:(TPThumbPlayerDemuxerCallbackWrapper *)arg1;
- (TPThumbPlayerPostProcessFrameCallbackWrapper *)postprocessFrameCbWrapper;
- (void)setPostprocessFrameCbWrapper:(TPThumbPlayerPostProcessFrameCallbackWrapper *)arg1;
- (shared_ptr<TPThumbPlayerEventRecordCallbackWrapper>)eventRecordCbWrapper;
- (void)setEventRecordCbWrapper:(shared_ptr<TPThumbPlayerEventRecordCallbackWrapper>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
