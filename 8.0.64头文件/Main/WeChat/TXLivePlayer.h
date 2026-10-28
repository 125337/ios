@interface TXLivePlayer : NSObject <TXLivePictureInPictureControllerDelegate>
{
    Player * _player; // +0x8
    shared_ptr<liteav::live::LiveContext> _live_context; // +0x10
    PlayerConfig _inner_config; // +0x20
    shared_ptr<liteav::live::TXLivePlayerObserverImpl> _client; // +0xb8
    BOOL _enableHWAcceleration; // +0xc8
    id <TXLivePlayListener> _delegate; // +0xd0
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate; // +0xd8
    id <TXAudioRawDataDelegate> _audioRawDataDelegate; // +0xe0
    TXLivePlayConfig * _config; // +0xe8
    id <TXLiveRecordListener> _recordDelegate; // +0xf0
    TXLivePictureInPictureController * _pipController; // +0xf8
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
- (int)startLivePlay:(id)arg1 type:(long long)arg2;
- (int)stopPlay;
- (BOOL)isPlaying;
- (void)pause;
- (void)resume;
- (void)setRenderRotation:(long long)arg1;
- (void)setRenderMode:(long long)arg1;
- (void)setMute:(BOOL)arg1;
- (void)setVolume:(int)arg1;
- (void)setRecordDelegate:(id)arg1;
- (int)startRecord:(long long)arg1;
- (int)stopRecord;
- (void)snapshot:(id /* block */)arg1;
- (void)setLogViewMargin:(UIEdgeInsets)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (void)setAudioVolumeEvaluationListener:(id /* block */)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (int)switchStream:(id)arg1;
- (unsigned long long)getCurrentRenderPts;
- (void)callExperimentalAPI:(id)arg1;
- (id)getFileNameByTimeNow:(id)arg1 fileType:(id)arg2;
- (BOOL)enablePictureInPicture:(BOOL)arg1;
- (void)onPictureInPictureStateUpdate:(id)arg1 state:(long long)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)pictureInPictureController:(id)arg1 setPlaying:(BOOL)arg2;
- (BOOL)pictureInPictureControllerIsPlaybackPaused:(id)arg1;
- (void)onPictureInPictureControllerResumePlaybackState:(id)arg1;
- (id)delegate;
- (id)videoProcessDelegate;
- (id)audioRawDataDelegate;
- (BOOL)enableHWAcceleration;
- (id)config;
- (id)recordDelegate;
- (id)pipController;
- (void)setPipController:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
