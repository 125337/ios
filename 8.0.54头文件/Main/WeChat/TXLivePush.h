@interface TXLivePush : NSObject
{
    unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread; // +0x8
    shared_ptr<liteav::live::TXLivePushObserverImpl> _client; // +0x10
    Pusher * _pusher; // +0x20
    TXDeviceManager * _deviceManager; // +0x28
    TXBeautyManager * _beautyManager; // +0x30
    TXAudioEffectManager * _audioEffectManager; // +0x38
    TXLivePushConfig * _config; // +0x40
    PushNetworkConfig _network_config; // +0x48
    long long _video_quality; // +0x78
    unsigned long long _bgm_id; // +0x80
    id <TXLivePushListener> _delegate; // +0x88
    NSString * _rtmpURL; // +0x90
    id <TXLiveRecordListener> _recordDelegate; // +0x98
    id <TXVideoCustomProcessDelegate> _videoProcessDelegate; // +0xa0
    id <TXAudioCustomProcessDelegate> _audioProcessDelegate; // +0xa8
    unsigned long long _audioVolumeEvaluationInterval; // +0xb0
}
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setVideoProcessDelegate:(id)arg1;
- (void)setAudioProcessDelegate:(id)arg1;
- (void)setRecordDelegate:(id)arg1;
- (int)startPreview:(id)arg1;
- (void)stopPreview;
- (int)startPush:(id)arg1;
- (void)stopPush;
- (void)pausePush;
- (void)resumePush;
- (BOOL)isPublishing;
- (BOOL)frontCamera;
- (void)setVideoQuality:(long long)arg1 adjustBitrate:(BOOL)arg2 adjustResolution:(BOOL)arg3;
- (int)switchCamera;
- (void)setMirror:(BOOL)arg1;
- (void)setRenderRotation:(int)arg1;
- (BOOL)toggleTorch:(BOOL)arg1;
- (void)setZoom:(double)arg1;
- (void)setFocusPosition:(CGPoint)arg1;
- (id)getBeautyManager;
- (void)setMute:(BOOL)arg1;
- (id)getAudioEffectManager;
- (void)setAudioVolumeEvaluationListener:(id /* block */)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (int)startRecord:(id)arg1;
- (int)stopRecord;
- (void)snapshot:(id /* block */)arg1;
- (void)sendVideoSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)sendCustomPCMData:(char *)arg1 len:(unsigned int)arg2;
- (void)sendAudioSampleBuffer:(opaqueCMSampleBuffer *)arg1 withType:(long long)arg2;
- (void)setSendAudioSampleBufferMuted:(BOOL)arg1;
- (BOOL)sendMessageEx:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)showVideoDebugLog:(BOOL)arg1;
- (void)setLogViewMargin:(UIEdgeInsets)arg1;
- (void)setEnableClockOverlay:(BOOL)arg1;
- (BOOL)enableClockOverlay;
- (void)startScreenCaptureByReplaykit:(id)arg1;
- (int)stopScreenCapture;
- (int)pauseScreenCapture;
- (int)resumeScreenCapture;
- (void)setBeautyStyle:(long long)arg1 beautyLevel:(float)arg2 whitenessLevel:(float)arg3 ruddinessLevel:(float)arg4;
- (void)setFilter:(id)arg1;
- (void)setSpecialRatio:(float)arg1;
- (void)setEyeScaleLevel:(float)arg1;
- (void)setFaceScaleLevel:(float)arg1;
- (void)setFaceVLevel:(float)arg1;
- (void)setChinLevel:(float)arg1;
- (void)setFaceShortLevel:(float)arg1;
- (void)setNoseSlimLevel:(float)arg1;
- (void)setGreenScreenFile:(id)arg1;
- (void)selectMotionTmpl:(id)arg1 inDir:(id)arg2;
- (void)setMotionMute:(BOOL)arg1;
- (BOOL)playBGM:(id)arg1;
- (BOOL)playBGM:(id)arg1 withBeginNotify:(id /* block */)arg2 withProgressNotify:(id /* block */)arg3 andCompleteNotify:(id /* block */)arg4;
- (BOOL)stopBGM;
- (BOOL)pauseBGM;
- (BOOL)resumeBGM;
- (int)getMusicDuration:(id)arg1;
- (BOOL)setBGMVolume:(float)arg1;
- (BOOL)setMicVolume:(float)arg1;
- (BOOL)setBGMPitch:(float)arg1;
- (BOOL)setReverbType:(long long)arg1;
- (BOOL)setVoiceChangerType:(long long)arg1;
- (BOOL)setBGMPosition:(long long)arg1;
- (void)callExperimentalAPI:(id)arg1;
- (void)setConfig:(id)arg1;
- (id)config;
- (void)doSetEncoderParams:(id)arg1;
- (void)setupDiffConfig:(id)arg1;
- (id)cloneConfig:(id)arg1;
- (id)delegate;
- (id)rtmpURL;
- (id)recordDelegate;
- (id)videoProcessDelegate;
- (id)audioProcessDelegate;
- (unsigned long long)audioVolumeEvaluationInterval;
- (void)setAudioVolumeEvaluationInterval:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

