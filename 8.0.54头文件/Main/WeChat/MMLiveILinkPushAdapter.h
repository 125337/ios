@interface MMLiveILinkPushAdapter : MMLiveTRTCPushAdapter <ILinkAudioFrameDelegate>
{
    os_unfair_lock_s _remoteVideoDictLock; // +0x8
    BOOL _hasVideoMuteImage; // +0xc
    BOOL _useTRTCAudioDevice; // +0xd
    BOOL _hasCreatedILinkBgmMgr; // +0xe
    BOOL _shouldPushTrtcStream; // +0xf
    BOOL _forcePushTrtcStream; // +0x10
    ILinkPusher * _ilinkPushInstance; // +0x18
    NSObject<OS_dispatch_queue> * _workingQueue; // +0x20
    NSMutableDictionary * _remoteUserVideoInfoDict; // +0x28
    TRTCTranscodingConfig * _localMixConfig; // +0x30
    LayerOpenGLContext * _context; // +0x38
    MMLayerCompositer * _layerCompositer; // +0x40
    NSMutableArray * _subLayerArray; // +0x48
    NSObject<OS_dispatch_source> * _imageStreamTimer; // +0x50
    MMLiveILinkCompositerTextureWrap * _compositerTextureWrap; // +0x58
    UIImage * _currentImageForVideoStream; // +0x60
    NSString * _currentSdkUserId; // +0x68
    unsigned long long _trtcPushState; // +0x70
}
- (void)dealloc;
- (void)initDefaultData;
- (BOOL)isLiveAudience;
- (BOOL)canStartLocalCapture;
- (void)enterRoom;
- (void)exitRoom;
- (void)destroySharedTRTCInstance;
- (void)switchRole:(long long)arg1;
- (void)enableBlackStream:(BOOL)arg1;
- (void)setVideoMuted:(BOOL)arg1;
- (void)updateRemoteTRTCVideoFrame:(id)arg1 withUserId:(id)arg2;
- (void)removeRemoteUser:(id)arg1;
- (void)updateRemoteUser:(id)arg1 isVideoEnabled:(BOOL)arg2;
- (void)startImageStreamTimerWithImage:(id)arg1;
- (void)clearImageStreamTimer;
- (void)checkAndClearImageStreamTimer;
- (opaqueCMSampleBuffer *)createSampleBufferFromImage:(id)arg1 andSize:(CGSize)arg2;
- (void)setVideoMuteImage:(id)arg1 fps:(long long)arg2;
- (void)initLayerCompositer;
- (id)subLayerAtIndex:(unsigned long long)arg1;
- (void)mixRemoteThenSendSampleBuffer:(opaqueCMSampleBuffer *)arg1 isCameraMirror:(BOOL)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)updateMixTranscodingConfig:(id)arg1;
- (void)updateTrtcPushStateWithRemoteTRTCUsersState:(BOOL)arg1;
- (void)delayResetTrtcPushState;
- (BOOL)sendSEIMessage:(id)arg1 repeatCount:(long long)arg2;
- (void)sendSEIMessageData:(id)arg1;
- (void)sendSEIMessageData:(id)arg1 ilinkOnly:(BOOL)arg2;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 shouldReportCaptureMetrics:(BOOL)arg3;
- (void)onMixedAllAudioFrame:(id)arg1;
- (void)onMixedPlayAudioFrame:(id)arg1;
- (void)onMixedILinkLocalAudioData:(char *)arg1 dataLen:(int)arg2 channels:(int)arg3 sampleRate:(int)arg4;
- (id)convertMonoToStereo:(id)arg1;
- (id)getAudioEffectManager;
- (void)startLocalAudio;
- (void)stopLocalAudio;
- (void)setAudioEnabled:(BOOL)arg1;
- (void)setAudioRoute:(long long)arg1;
- (void)setVolumeType:(long long)arg1;
- (void)setAudioQuality:(long long)arg1;
- (void)setAudioMuted:(BOOL)arg1;
- (void)setAudioCaptureVolume:(long long)arg1;
- (void)restartAudioDevice:(BOOL)arg1;
- (void)updateTrtcPushState:(unsigned long long)arg1;
- (void)updateShouldPushTrtcStream;
- (void)updateForcePushTrtcStream:(BOOL)arg1;
- (void)sendH264EncodedVideoData:(id)arg1 width:(double)arg2 height:(double)arg3 frameType:(long long)arg4;
- (id)ilinkPushInstance;
- (void)setIlinkPushInstance:(id)arg1;
- (id)workingQueue;
- (void)setWorkingQueue:(id)arg1;
- (id)remoteUserVideoInfoDict;
- (void)setRemoteUserVideoInfoDict:(id)arg1;
- (id)localMixConfig;
- (void)setLocalMixConfig:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)layerCompositer;
- (void)setLayerCompositer:(id)arg1;
- (id)subLayerArray;
- (void)setSubLayerArray:(id)arg1;
- (id)imageStreamTimer;
- (void)setImageStreamTimer:(id)arg1;
- (id)compositerTextureWrap;
- (void)setCompositerTextureWrap:(id)arg1;
- (BOOL)hasVideoMuteImage;
- (void)setHasVideoMuteImage:(BOOL)arg1;
- (id)currentImageForVideoStream;
- (void)setCurrentImageForVideoStream:(id)arg1;
- (id)currentSdkUserId;
- (void)setCurrentSdkUserId:(id)arg1;
- (BOOL)useTRTCAudioDevice;
- (void)setUseTRTCAudioDevice:(BOOL)arg1;
- (BOOL)hasCreatedILinkBgmMgr;
- (void)setHasCreatedILinkBgmMgr:(BOOL)arg1;
- (unsigned long long)trtcPushState;
- (void)setTrtcPushState:(unsigned long long)arg1;
- (BOOL)shouldPushTrtcStream;
- (void)setShouldPushTrtcStream:(BOOL)arg1;
- (BOOL)forcePushTrtcStream;
- (void)setForcePushTrtcStream:(BOOL)arg1;
- (void).cxx_destruct;
@end

