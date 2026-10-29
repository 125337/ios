@interface TXLivePlayer : NSObject
{
    unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread; // +0x8
    Player * _player; // +0x10
    Config _inner_config; // +0x18
    shared_ptr<liteav::live::TXLivePlayerObserverImpl> _client; // +0xb8
    UIView * _containView; // +0xc8
    BOOL _enableHWAcceleration; // +0xd0
    BOOL _isAutoPlay; // +0xd1
    id <TXLivePlayListener> _delegate; // +0xd8
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate; // +0xe0
    id <TXAudioRawDataDelegate> _audioRawDataDelegate; // +0xe8
    TXLivePlayConfig * _config; // +0xf0
    id <TXLiveRecordListener> _recordDelegate; // +0xf8
}
+ (void)setAudioRoute:(long long)arg1;
- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setAudioRawDataDelegate:(id)arg1;
- (void)setVideoProcessDelegate:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setupVideoWidget:(CGRect)arg1 containView:(id)arg2 insertIndex:(unsigned int)arg3;
- (void)removeVideoWidget;
- (void)setEnableHWAcceleration:(BOOL)arg1;
- (int)startPlay:(id)arg1 type:(long long)arg2;
- (int)stopPlay;
- (BOOL)isPlaying;
- (void)pause;
- (void)resume;
- (int)prepareLiveSeek:(id)arg1 bizId:(long long)arg2;
- (int)seek:(float)arg1;
- (int)resumeLive;
- (void)setRenderRotation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setVolume:(int)arg1;
- (void)setRecordDelegate:(id)arg1;
- (int)startRecord:(long long)arg1;
- (int)stopRecord;
- (void)snapshot:(id /* block */)arg1;
- (void)setRate:(float)arg1;
- (void)setLogViewMargin:(UIEdgeInsets)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (void)setAudioVolumeEvaluationListener:(id /* block */)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (int)switchStream:(id)arg1;
- (unsigned long long)getCurrentRenderPts;
- (void)callExperimentalAPI:(id)arg1;
- (void)setEncryptionParams:(id)arg1;
- (void)EnableBackgroundDecoding:(BOOL)arg1;
- (void)enableMetalRender:(BOOL)arg1;
- (void)externalNotifyCustomRenderFirstFrameEvent;
- (void)setAudioJitterBufferFactory:(id)arg1;
- (void)enableReportStreamRspInfo:(id)arg1;
- (void)reportExternalBusinessData:(id)arg1;
- (void)setLebCacheParams:(id)arg1;
- (void)enableIPMultiplexing:(BOOL)arg1;
- (void)enableAudioVolumeEqualizer:(id)arg1;
- (id)getFileNameByTimeNow:(id)arg1 fileType:(id)arg2;
- (id)delegate;
- (id)videoProcessDelegate;
- (id)audioRawDataDelegate;
- (BOOL)enableHWAcceleration;
- (id)config;
- (id)recordDelegate;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

