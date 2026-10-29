@interface VoIPMPScreenProjectPlugin : NSObject <MultiTalkMgrExt, VoIPilinkMgrVideoStreamObserver, ConfSDKServiceMgrExt, VoIPOrientationServiceExtension, MMFlutterPlugin, VoIPMPPreviewNativeApi, VoIPMPScreenProjectReportNativeApi, VoipmpCoreNativeControllerBase, VoIPMPFlutterTextureManagerDelegate, VoIPMPScreenProjectPreviewSourceSelectorDelegate, VoIPMPScreenProjectFrameSenderDelegate>
{
    BOOL _hasEnabledScreenMode; // +0x8
    BOOL _isIlinkMode; // +0x9
    BOOL _localCameraOn; // +0xa
    BOOL _hasAttachedCurrentCallContext; // +0xb
    BOOL _hasLoggedScreenProjectTargetFps; // +0xc
    int _selfMemberId; // +0x10
    VoipmpCoreNativeControllerCallback * _zidlCallback; // +0x18
    NSString * _chatroomName; // +0x20
    NSObject<FlutterPlatformView> * _previewFileView; // +0x28
    MMConfSDKMemberMgr * _currentMemberMgr; // +0x30
    VoIPMPFlutterTextureManager * _textureManager; // +0x38
    long long _currentSourceType; // +0x40
    VoIPMPScreenProjectPreviewSourceSelector * _previewSourceSelector; // +0x48
    VoIPMPScreenProjectFrameSender * _frameSender; // +0x50
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x58
    double _lastRemoteCameraFrameTimestamp; // +0x60
    long long _lastLoggedScreenProjectTargetFps; // +0x68
    VoIPMPV2DeviceFlutterApi * _deviceFlutterApi; // +0x70
}
- (id)previewSourceSelector;
- (id)frameSender;
- (void)reportEvent:(id)arg1 error:(id *)arg2;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)notifyOrientationStateToFlutter:(BOOL)arg1;
- (void)voIPOrientationServiceDidChangeDeviceOrientation;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPOrientationServiceDidChangeMotionOrientation;
- (void)attachToCurrentCallContext;
- (void)detachFromCurrentCallContext;
- (void)launchSelectFilePageWithCompletion:(id /* block */)arg1;
- (void)launchSelectMediaPageWithCompletion:(id /* block */)arg1;
- (void)setScreenProjectSubVideoTypeSubVideoType:(long long)arg1 error:(id *)arg2;
- (id)getScreenProjectTargetFpsWithError:(id *)arg1;
- (void)sendScreenProjectShotImageData:(id)arg1 width:(long long)arg2 height:(long long)arg3 error:(id *)arg4;
- (void)notifyScreenProjectFinishedWithError:(id *)arg1;
- (void)sendDoodleOverlayImageData:(id)arg1 width:(long long)arg2 height:(long long)arg3 error:(id *)arg4;
- (void)clearDoodleOverlayWithError:(id *)arg1;
- (void)startNativeScreenCapture;
- (void)stopNativeScreenCapture;
- (void)updateScreenProjectSubVideoType:(int)arg1;
- (void)stopAllFrameSending;
- (id)captureLastFrameSnapshot;
- (void)setPIPFrameCallback:(id /* block */)arg1;
- (void)setCallback:(id)arg1;
- (void)getUserInfoAsync:(unsigned long long)arg1 username:(id)arg2;
- (void)getDisplayInfoAsync:(unsigned long long)arg1;
- (void)getVoIPDeviceInfoAsync:(unsigned long long)arg1;
- (void)getDeviceInfoAsync:(unsigned long long)arg1;
- (void)getNetworkTypeAsync:(unsigned long long)arg1;
- (void)isScreenInteractiveAsync:(unsigned long long)arg1;
- (unsigned long long)getServerTimeMs;
- (id)getVoipRootDir;
- (BOOL)isBackgroundCallKit;
- (void)bindSocketToNetWork:(int)arg1;
- (void)onVideoFrameAsync:(unsigned long long)arg1 memberId:(int)arg2 dataPtr:(id)arg3 dataLen:(int)arg4 width:(int)arg5 height:(int)arg6 format:(int)arg7;
- (void)onReportDataAsync:(unsigned long long)arg1;
- (BOOL)isSpeakerActive;
- (void)setSpeakerActive:(BOOL)arg1;
- (BOOL)isMicrophoneMuted;
- (void)setMicrophoneMuted:(BOOL)arg1;
- (BOOL)isCameraFront;
- (void)setLocalCameraEnabled:(BOOL)arg1;
- (void)getAvailableDevicesAsync:(unsigned long long)arg1;
- (void)getCurrentDeviceAsync:(unsigned long long)arg1;
- (void)deviceRouteToAsync:(unsigned long long)arg1 device:(id)arg2;
- (void)updateAudioSceneAsync:(unsigned long long)arg1 scene:(int)arg2;
- (void)startPlayAsync:(unsigned long long)arg1 speakerOn:(BOOL)arg2 sampleRate:(int)arg3 channels:(int)arg4 frameDuration:(int)arg5;
- (void)stopPlayAsync:(unsigned long long)arg1;
- (void)startRecordAsync:(unsigned long long)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4 mute:(BOOL)arg5;
- (void)stopRecordAsync:(unsigned long long)arg1;
- (void)isRecordingAsync:(unsigned long long)arg1;
- (void)muteMicrophoneAsync:(unsigned long long)arg1;
- (void)unMuteMicrophoneAsync:(unsigned long long)arg1;
- (void)getNativeWindowAsync:(unsigned long long)arg1 member:(int)arg2;
- (void)bindEncodingRenderTargetAsync:(unsigned long long)arg1 surfaceId:(id)arg2;
- (void)bindEncodingExternalRenderTargetAsync:(unsigned long long)arg1 windowDoublePtr:(unsigned long long)arg2 nativeMutex:(unsigned long long)arg3;
- (void)setDecodingSurfaceSizeAsync:(unsigned long long)arg1 memberId:(int)arg2 width:(int)arg3 height:(int)arg4 orient:(int)arg5;
- (void)getRenderTextureAsync:(unsigned long long)arg1 member:(int)arg2;
- (void)bindSelfMidAsync:(unsigned long long)arg1 member:(int)arg2;
- (void)startRenderAsync:(unsigned long long)arg1;
- (void)setRenderSizeAsync:(unsigned long long)arg1 memberId:(int)arg2 width:(int)arg3 height:(int)arg4;
- (void)releaseVideoResourceAsync:(unsigned long long)arg1;
- (void)onAudioNoisyAmbientAsync:(unsigned long long)arg1;
- (void)checkVirtualBackgroundStateAsync:(unsigned long long)arg1;
- (void)checkWevisionSupportedAsync:(unsigned long long)arg1;
- (void)setVirtualBackgroundAsync:(unsigned long long)arg1 on:(BOOL)arg2;
- (void)flipCameraAsync:(unsigned long long)arg1;
- (void)pauseCameraAsync:(unsigned long long)arg1 pause:(BOOL)arg2;
- (void)openCameraAsync:(unsigned long long)arg1;
- (void)closeCameraAsync:(unsigned long long)arg1;
- (void)onCameraSwitchToAsync:(unsigned long long)arg1 isOn:(BOOL)arg2 isFront:(BOOL)arg3;
- (void)ensureVoIPServiceAsync:(unsigned long long)arg1 username:(id)arg2 roomType:(int)arg3 isCallee:(BOOL)arg4;
- (void)getRingtoneInfoAsync:(unsigned long long)arg1 username:(id)arg2;
- (void)startRingAsync:(unsigned long long)arg1 username:(id)arg2 roomType:(int)arg3 isCallee:(BOOL)arg4;
- (void)ringNewInComingAsync:(unsigned long long)arg1;
- (void)stopRingNewInComingAsync:(unsigned long long)arg1;
- (void)stopRingAsync:(unsigned long long)arg1;
- (void)pauseRingAsync:(unsigned long long)arg1;
- (void)resumeRingAsync:(unsigned long long)arg1;
- (void)endRingAsync:(unsigned long long)arg1 isSpeaker:(BOOL)arg2;
- (void)inOtherBussinessBusyAsync:(unsigned long long)arg1;
- (void)canQuickAcceptUseBTAsync:(unsigned long long)arg1;
- (void)getSplitScreenStateAsync:(unsigned long long)arg1;
- (void)setSplitScreenAsync:(unsigned long long)arg1 split:(BOOL)arg2;
- (void)allowNetWorkChangeToMobileNetAsync:(unsigned long long)arg1;
- (void)canEnterFloatUIAsync:(unsigned long long)arg1 roomType:(int)arg2;
- (void)canParseInviteMsgAsync:(unsigned long long)arg1;
- (void)isInAccessibilityModeAsync:(unsigned long long)arg1;
- (void)checkILinkNewInComingSupportAsync:(unsigned long long)arg1 caller:(id)arg2 roomType:(int)arg3;
- (void)isWeVisionPluginSupportedAsync:(unsigned long long)arg1;
- (void)markUserNotSupportAsync:(unsigned long long)arg1 wxUsername:(id)arg2 roomType:(int)arg3;
- (void)setAutoScreenOffEnabledAsync:(unsigned long long)arg1 enable:(BOOL)arg2;
- (void)getShouldEnableVideoTypePipAsync:(unsigned long long)arg1;
- (void)insertMsgAsync:(unsigned long long)arg1 toUser:(id)arg2 caller:(BOOL)arg3 roomType:(int)arg4 timeInSec:(int)arg5 inviteId:(unsigned long long)arg6 roomId:(unsigned long long)arg7 msgType:(int)arg8 callerMemberid:(int)arg9 calleeMemberid:(int)arg10;
- (void)insertVoipDetailMsgAsync:(unsigned long long)arg1 caller:(id)arg2 userList:(id)arg3 beforeEnd:(BOOL)arg4 timeInSec:(int)arg5 roomId:(unsigned long long)arg6;
- (void)insertVoipRecallTipAsync:(unsigned long long)arg1 toUser:(id)arg2 roomType:(int)arg3 reason:(int)arg4;
- (void)insertMultiTalkMsgAsync:(unsigned long long)arg1 group:(id)arg2 isEnd:(BOOL)arg3 createUser:(id)arg4 roomId:(unsigned long long)arg5 createTime:(unsigned long long)arg6 isMissed:(BOOL)arg7;
- (void)cleanSettingWhileInCallAsync:(unsigned long long)arg1;
- (void)callAddMembersAsync:(unsigned long long)arg1 members:(id)arg2;
- (void)onInviteSuccessAsync:(unsigned long long)arg1 roomType:(int)arg2 roomId:(unsigned long long)arg3 roomKey:(unsigned long long)arg4;
- (void)onRemoteNoRespAsync:(unsigned long long)arg1;
- (void)onBeforeToggleAudioMenuAsync:(unsigned long long)arg1;
- (void)onAudioMenuLoadingFinishAsync:(unsigned long long)arg1;
- (void)onSwitchAudioDeviceByMenuAsync:(unsigned long long)arg1;
- (void)onJoinMultiRoomSuccAsync:(unsigned long long)arg1;
- (void)updateRemoteSupportAdaptiveRotateAsync:(unsigned long long)arg1 isSupportAdaptiveRotate:(BOOL)arg2;
- (void)notifyCallerBeforeInitAudioAsync:(unsigned long long)arg1 isCaller:(BOOL)arg2;
- (void)voIPCallTalkingStateNotifyAsync:(unsigned long long)arg1 state:(int)arg2 params:(id)arg3;
- (void)onRemoteFormatChangeAsync:(unsigned long long)arg1 memberId:(int)arg2 format:(int)arg3;
- (void)loadAllBannerInfoAsync:(unsigned long long)arg1 wxGroupIds:(id)arg2 bannerInfos:(id)arg3;
- (void)getRenderErrorStateReportAsync:(unsigned long long)arg1;
- (void)getAudioErrorStateReportAsync:(unsigned long long)arg1;
- (id)getCurrentMemberSnapshots;
- (void)textureManager:(id)arg1 didUpdateTextureInfo:(id)arg2 forRenderId:(long long)arg3 memberId:(int)arg4 streamType:(int)arg5;
- (void)onVideoFrame:(int)arg1 data:(const char *)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 isScreenStream:(BOOL)arg7;
- (void)onLocalPreviewPixelBuffer:(__CVBuffer *)arg1 memberId:(int)arg2 rotate:(int)arg3;
- (void)releaseVideoResources;
- (int)currentRemoteMemberId;
- (id)topMostViewController;
- (id)previewSourceSelectorTopMostViewController:(id)arg1;
- (void)previewSourceSelector:(id)arg1 didChangeSourceType:(long long)arg2;
- (id)screenProjectFrameSenderTopMostViewController:(id)arg1;
- (id)screenProjectFrameSenderPreviewFileView:(id)arg1;
- (BOOL)screenProjectFrameSenderIsIlinkMode:(id)arg1;
- (BOOL)screenProjectFrameSenderLocalCameraOn:(id)arg1;
- (BOOL)screenProjectFrameSenderHasEnabledScreenMode:(id)arg1;
- (void)screenProjectFrameSenderDidEnableScreenMode:(id)arg1;
- (void)confSDKServiceMgrScreenProjectTargetFPSDidChange:(long long)arg1;
- (void)OnCameraVideoStateChange:(BOOL)arg1 CameraOn:(BOOL)arg2;
- (BOOL)shouldIgnoreDefaultRender;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(__CVBuffer *)arg1;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (void)selectFileFromNativeWithCompletion:(id /* block */)arg1;
- (void)selectMediaFromNativeWithCompletion:(id /* block */)arg1;
- (id)cachedAssetPathsForToken:(id)arg1;
- (void)cleanupPreviewSource;
- (id)zidlCallback;
- (void)setZidlCallback:(id)arg1;
- (id)chatroomName;
- (void)setChatroomName:(id)arg1;
- (BOOL)hasEnabledScreenMode;
- (void)setHasEnabledScreenMode:(BOOL)arg1;
- (id)previewFileView;
- (void)setPreviewFileView:(id)arg1;
- (id)currentMemberMgr;
- (void)setCurrentMemberMgr:(id)arg1;
- (BOOL)isIlinkMode;
- (void)setIsIlinkMode:(BOOL)arg1;
- (int)selfMemberId;
- (void)setSelfMemberId:(int)arg1;
- (BOOL)localCameraOn;
- (void)setLocalCameraOn:(BOOL)arg1;
- (id)textureManager;
- (void)setTextureManager:(id)arg1;
- (long long)currentSourceType;
- (void)setCurrentSourceType:(long long)arg1;
- (void)setPreviewSourceSelector:(id)arg1;
- (void)setFrameSender:(id)arg1;
- (id)registrar;
- (void)setRegistrar:(id)arg1;
- (BOOL)hasAttachedCurrentCallContext;
- (void)setHasAttachedCurrentCallContext:(BOOL)arg1;
- (double)lastRemoteCameraFrameTimestamp;
- (void)setLastRemoteCameraFrameTimestamp:(double)arg1;
- (BOOL)hasLoggedScreenProjectTargetFps;
- (void)setHasLoggedScreenProjectTargetFps:(BOOL)arg1;
- (long long)lastLoggedScreenProjectTargetFps;
- (void)setLastLoggedScreenProjectTargetFps:(long long)arg1;
- (id)deviceFlutterApi;
- (void)setDeviceFlutterApi:(id)arg1;
- (void).cxx_destruct;
@end
