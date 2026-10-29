@interface MMLiveILinkPushAdapter : MMLiveTRTCPushAdapter
{
    os_unfair_lock_s _remoteVideoDictLock; // +0x8
    BOOL _hasVideoMuteImage; // +0xc
    BOOL _useTRTCAudioDevice; // +0xd
    BOOL _shouldPushTrtcStream; // +0xe
    BOOL _forcePushTrtcStream; // +0xf
    BOOL _hasStartedLocalMixVideo; // +0x10
    BOOL _hasWaitConnectMicAudience; // +0x11
    BOOL _isMiniGameLiveMode; // +0x12
    ILinkPusher * _ilinkPushInstance; // +0x18
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x20
    NSMutableDictionary * _remoteUserVideoInfoDict; // +0x28
    TRTCTranscodingConfig * _localMixConfig; // +0x30
    NSObject<OS_dispatch_source> * _imageStreamTimer; // +0x38
    UIImage * _currentImageForVideoStream; // +0x40
    NSString * _currentSdkUserId; // +0x48
    unsigned long long _trtcPushState; // +0x50
    MMLiveRemoteTrtcCustomRenderComposeManagerV2 * _composeManager; // +0x58
    id /* block */ _composeCallback; // +0x60
    NSMutableData * _muteAudioData; // +0x68
}
- (void)dealloc;
- (void)initDefaultData;
- (BOOL)isLiveAudience;
- (BOOL)canStartLocalCapture;
- (void)startLocalVideo;
- (void)switchVideoSourceTo:(unsigned long long)arg1;
- (void)enableCustomVideoCapture:(BOOL)arg1;
- (void)enterRoom;
- (void)exitRoom;
- (void)destroySharedTRTCInstance;
- (void)updateHasWaitConnectMicAudience:(BOOL)arg1;
- (BOOL)updateCloudMixtureParamsForFinderLiveWithMicUsersInfo:(id)arg1 isPureAudioMode:(BOOL)arg2;
- (void)updateIsMiniGameLiveMode:(BOOL)arg1;
- (void)switchRole:(long long)arg1;
- (void)enableBlackStream:(BOOL)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (CGSize)getResolutionSize:(id)arg1;
- (void)setVideoEncoderParam:(id)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3;
- (void)setCustomVideoEncoderParam:(int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 fps:(int)arg4 bitrate:(int)arg5 minbitrate:(int)arg6 gop:(int)arg7;
- (void)updateRemoteTRTCVideoFrame:(id)arg1 withUserId:(id)arg2;
- (void)removeRemoteUser:(id)arg1;
- (void)updateRemoteUser:(id)arg1 isVideoEnabled:(BOOL)arg2;
- (void)startImageStreamTimerWithImage:(id)arg1;
- (void)clearImageStreamTimer;
- (void)checkAndClearImageStreamTimer;
- (opaqueCMSampleBuffer *)createSampleBufferFromImage:(id)arg1 andSize:(CGSize)arg2;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)updateComposeManager:(id)arg1;
- (void)onRefreshComposePixelBuffer:(id)arg1;
- (void)registerComposeEndCallback;
- (void)unregisterComposeEndCallback;
- (void)startLocalMixVideo;
- (void)stopLocalMixVideo;
- (void)mixRemoteThenSendSampleBuffer:(opaqueCMSampleBuffer *)arg1 isCameraMirror:(BOOL)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)updateMixTranscodingConfig:(id)arg1;
- (void)updateTrtcPushStateWithRemoteTRTCUsersState:(BOOL)arg1;
- (void)delayResetTrtcPushState;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (void)sendSEIMessageData:(id)arg1 ilinkOnly:(BOOL)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)onLocalProcessedAudioFrame:(id)arg1;
- (void)onMixedAllAudioFrame:(id)arg1;
- (id)convertMonoToStereo:(id)arg1;
- (void)updateTrtcPushState:(unsigned long long)arg1;
- (void)updateShouldPushTrtcStream;
- (void)updateForcePushTrtcStream:(BOOL)arg1;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (void)sendCustomVideoData:(__CVBuffer *)arg1 pixelFormat:(long long)arg2 rotation:(long long)arg3 timestampMs:(unsigned long long)arg4;
- (id)ilinkPushInstance;
- (void)setIlinkPushInstance:(id)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (id)remoteUserVideoInfoDict;
- (void)setRemoteUserVideoInfoDict:(id)arg1;
- (id)localMixConfig;
- (void)setLocalMixConfig:(id)arg1;
- (id)imageStreamTimer;
- (void)setImageStreamTimer:(id)arg1;
- (BOOL)hasVideoMuteImage;
- (void)setHasVideoMuteImage:(BOOL)arg1;
- (id)currentImageForVideoStream;
- (void)setCurrentImageForVideoStream:(id)arg1;
- (id)currentSdkUserId;
- (void)setCurrentSdkUserId:(id)arg1;
- (BOOL)useTRTCAudioDevice;
- (void)setUseTRTCAudioDevice:(BOOL)arg1;
- (unsigned long long)trtcPushState;
- (void)setTrtcPushState:(unsigned long long)arg1;
- (BOOL)shouldPushTrtcStream;
- (void)setShouldPushTrtcStream:(BOOL)arg1;
- (BOOL)forcePushTrtcStream;
- (void)setForcePushTrtcStream:(BOOL)arg1;
- (id)composeManager;
- (void)setComposeManager:(id)arg1;
- (BOOL)hasStartedLocalMixVideo;
- (void)setHasStartedLocalMixVideo:(BOOL)arg1;
- (id /* block */)composeCallback;
- (void)setComposeCallback:(id /* block */)arg1;
- (BOOL)hasWaitConnectMicAudience;
- (void)setHasWaitConnectMicAudience:(BOOL)arg1;
- (id)muteAudioData;
- (void)setMuteAudioData:(id)arg1;
- (BOOL)isMiniGameLiveMode;
- (void)setIsMiniGameLiveMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
