@interface MMLiveTRTCPushAdapter : MMLivePushAdapter <MMLiveTRTCPublishMediaStreamLogicDelegate, TRTCAudioFrameDelegate>
{
    BOOL _isLocalMicClosed; // +0x8
    id <MMLiveTRTCPushAdapterDelegate> _trtcPushDelegate; // +0x10
    unsigned long long _trtcCloudAppId; // +0x18
    unsigned long long _trtcCloudBizId; // +0x20
    long long _trtcRoleType; // +0x28
    TRTCVideoConfig * _videoConfig; // +0x30
    TRTCAudioConfig * _audioConfig; // +0x38
    MMLiveTRTCPublishMediaStreamLogic * _publishMediaStreamLogic; // +0x40
    CGSize _extRes; // +0x48
}
+ (long long)tranferNewVolumeTypeToVolumeType:(long long)arg1;
+ (CGSize)getResolutionSize:(long long)arg1 resolutionMode:(long long)arg2;
- (void)initDefaultData;
- (BOOL)isLiveAudience;
- (id)trtcParams;
- (BOOL)canStartLocalCapture;
- (void)setupTrtcVideo:(BOOL)arg1;
- (void)setupTrtcAudio;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)enterRoom;
- (void)exitRoom;
- (void)setQCloudAccount:(unsigned long long)arg1 bizId:(unsigned long long)arg2;
- (void)destroySharedTRTCInstance;
- (void)setCameraPreviewOrientation:(long long)arg1;
- (void)startCameraCaptureWithContainerView:(id)arg1 useFrontCamera:(BOOL)arg2;
- (void)updateTRTCPrivateMapKey:(id)arg1;
- (long long)currTrtcRoleType;
- (long long)currNewVolumeType;
- (void)switchRole:(long long)arg1;
- (CGSize)getResolutionSize:(id)arg1;
- (void)setExtVideoResolution:(CGSize)arg1;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setVideoEnabled:(BOOL)arg1 destroyRender:(BOOL)arg2;
- (void)setVideoMuted:(BOOL)arg1;
- (void)updateHevcEncodeEnabled:(BOOL)arg1;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)enableBlackStream:(BOOL)arg1;
- (BOOL)isBlackStreamResolutionCustomSetEnabled;
- (void)setResolutionMode:(long long)arg1;
- (void)setVideoFillMode:(long long)arg1;
- (void)setGSensorEnabled:(BOOL)arg1;
- (void)setQosPreference:(long long)arg1 andQosControlMode:(long long)arg2;
- (void)setSmallVideoEnabled:(BOOL)arg1;
- (void)setPrefersLowQuality:(BOOL)arg1;
- (void)setWaterMark:(id)arg1 inRect:(CGRect)arg2;
- (void)enableTrtcBackgroundDecoding:(BOOL)arg1;
- (void)enableCustomVideoCapture:(BOOL)arg1;
- (void)sendCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (void)sendCustomVideoData:(id)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4 width:(double)arg5 height:(double)arg6;
- (void)enableExternalH264EncodedVideo:(BOOL)arg1;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (BOOL)setVideoEncoderRotation:(long long)arg1;
- (void)setVideoToolboxSetting:(id)arg1;
- (void)setCapturedAudioFrameDelegateFormat:(id)arg1;
- (void)setCustomVideo:(id)arg1;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)switchAudioCapture:(BOOL)arg1;
- (void)setAudioQuality:(long long)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setNewVolumeType:(long long)arg1;
- (void)updateTRTCLocalAudioUpstreamStopped:(BOOL)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setVolumeEvaluationEnabled:(BOOL)arg1;
- (void)setVadDetectionEnabled:(BOOL)arg1;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1 withVadDetection:(BOOL)arg2;
- (void)enableAudioVolumeEvaluation:(unsigned long long)arg1;
- (void)setStereoDirection:(BOOL)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (id)getAudioEffectManager;
- (void)restartAudioDevice:(BOOL)arg1;
- (void)enableCustomAudioCapture:(BOOL)arg1;
- (void)sendCustomAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)enableMixExternalAudio:(BOOL)arg1 playout:(BOOL)arg2;
- (void)mixExternalAudioData:(id)arg1 sampleRate:(long long)arg2 channels:(int)arg3 timestampMs:(unsigned long long)arg4;
- (void)mixExternalAudioVolume:(long long)arg1 playoutVolume:(long long)arg2;
- (id)currentVideoCloudMixtureParams;
- (void)updateCloudMixtureParamsWithFirstSmallVideoRectRatio:(CGRect)arg1;
- (BOOL)updateCloudMixtureParamsForFinderLiveWithMicUsersInfo:(id)arg1 isPureAudioMode:(BOOL)arg2;
- (BOOL)updateCloudMixtureParamsForFinderLiveAudioRoomModeWithMicUsersInfo:(id)arg1 adminUser:(id)arg2 mixStreamIdentity:(id)arg3 mixWithVideo:(BOOL)arg4 useNewCloudMixture:(BOOL)arg5 subtitleRobotUserId:(id)arg6;
- (unsigned int)getSdkRoomIdUIntValueFromString:(id)arg1;
- (void)handleConnectionRecovery;
- (void)handleStartPublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)handleUpdatePublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (void)handleStopPublishMediaStreamResultWithTaskId:(id)arg1 code:(int)arg2 message:(id)arg3 extraInfo:(id)arg4;
- (BOOL)updateCloudMixtureParamsForFinderLiveKTVModeWithMicUsers:(id)arg1;
- (void)updateMixTranscodingConfig:(id)arg1;
- (void)updateRemoteUser:(id)arg1 fillMode:(long long)arg2;
- (void)updateRemoteUser:(id)arg1 rotation:(long long)arg2;
- (void)startRemoteVideo:(id)arg1 withView:(id)arg2;
- (void)stopRemoteVideo:(id)arg1;
- (BOOL)sendCustomMessage:(id)arg1;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (void)startCrossRoom:(id)arg1 userId:(id)arg2 sdkNewPkSign:(id)arg3 pkSign:(id)arg4;
- (void)stopCrossRomm;
- (void)stopCrossRommWithRoomId:(id)arg1;
- (void)disconnectTwoRoom:(id)arg1 roomB:(id)arg2;
- (void)playMusic:(int)arg1 path:(id)arg2 publish:(BOOL)arg3 startBlock:(id /* block */)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)pausePlayMusic:(int)arg1;
- (void)resumePlayMusic:(int)arg1;
- (void)stopPlayMusic:(int)arg1;
- (void)updateReporterExtInfo:(id)arg1;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)onMixedAllAudioFrame:(id)arg1;
- (void)onRemoteUserAudioFrame:(id)arg1 userId:(id)arg2;
- (void)onCapturedAudioFrame:(id)arg1;
- (void)onLocalProcessedAudioFrame:(id)arg1;
- (void)onVoiceEarMonitorAudioFrame:(id)arg1;
- (void)onLiveTRTCWillStartPublishMediaStream;
- (BOOL)isLocalMicClosed;
- (void)setIsLocalMicClosed:(BOOL)arg1;
- (id)trtcPushDelegate;
- (void)setTrtcPushDelegate:(id)arg1;
- (unsigned long long)trtcCloudAppId;
- (void)setTrtcCloudAppId:(unsigned long long)arg1;
- (unsigned long long)trtcCloudBizId;
- (void)setTrtcCloudBizId:(unsigned long long)arg1;
- (long long)trtcRoleType;
- (void)setTrtcRoleType:(long long)arg1;
- (id)videoConfig;
- (void)setVideoConfig:(id)arg1;
- (id)audioConfig;
- (void)setAudioConfig:(id)arg1;
- (id)publishMediaStreamLogic;
- (void)setPublishMediaStreamLogic:(id)arg1;
- (CGSize)extRes;
- (void)setExtRes:(CGSize)arg1;
- (void).cxx_destruct;
@end
