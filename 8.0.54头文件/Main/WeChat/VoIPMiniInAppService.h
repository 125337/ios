@interface VoIPMiniInAppService : MMUserService <VoipUIManagerExt, IMinimizeTaskDelegateInterface, IVOIPExt, VoIPPIPServiceExt, IVOIPModeSwitchExt, VoIPMiniInAppViewDelegate, VoIPInvitationServiceExtension, IUiUtilExt, MMServiceProtocol>
{
    BOOL _isViewVisable; // +0x8
    BOOL _isCameraPrevInterruptAndResume; // +0x9
    BOOL _isLocalResume; // +0xa
    unsigned long long _animateStatus; // +0x10
    MinimizeTaskData * _minimizeTaskData; // +0x18
    VoIPMiniInAppView * _currentView; // +0x20
}
+ (id)minimizeTaskKey;
- (void)resetViewAndStatus;
- (void)setupView;
- (void)setupMinimizeTaskData;
- (void)setupVOIPMgr;
- (void)setup;
- (void)kick;
- (void)kickAsync;
- (CGRect)convertedVisibleFrameToWindow:(id)arg1;
- (id)snapshotImage;
- (id)view;
- (void)reset;
- (BOOL)getIfCameraPrevInterruptAndResume;
- (id)init;
- (void)onServiceInit;
- (void)UIManagerWillQuitWindow;
- (void)UIManagerDidCloseCompletely;
- (void)UIManagerWillCollapseWindow;
- (void)UIManagerDidCollapseWindow;
- (void)UIManagerWillExtendWindow;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerOnNotifyBadNetwork;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (void)OnVideoModeChangeToVoiceMode;
- (void)OnBeginTalk:(id)arg1;
- (void)OnMicStartFailed;
- (void)OnMicRMSCheckBad;
- (void)onVoipAudioDevicePlugin;
- (void)onVoipAudioDeviceUnPlugin;
- (void)onVoIPCloseCameraByInterrupt;
- (void)onVoIPOpenCameraByInterrupt;
- (void)onVoIPExtLocalCaptureSuspend;
- (void)onVoIPExtLocalCaptureResume;
- (void)onVoIPExtRemoteCaptureSuspend;
- (void)onVoIPExtRemoteCaptureResume;
- (void)onVideoOrientationChangeTo:(long long)arg1;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)OnBothVideoMode;
- (void)OnOneWayLocalEarMode;
- (void)OnOneWayRemoteEarMode;
- (void)OnOneWayLocalVideoMode;
- (void)OnOneWayRemoteVideoMode;
- (void)miniInAppViewOnMainAreaClick:(id)arg1;
- (void)miniInAppViewOnExtendAreaClick:(id)arg1;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)voIPInvitationServiceWillScrollIn;
- (void)voIPInvitationServiceDidScrollIn;
- (void)voIPInvitationServiceWillScrollOut;
- (void)voIPInvitationServiceDidScrollOut;
- (void)voIPInvitationServiceWillClear;
- (void)voIPInvitationServiceDidClear;
- (BOOL)isViewVisable;
- (void)setIsViewVisable:(BOOL)arg1;
- (unsigned long long)animateStatus;
- (void)setAnimateStatus:(unsigned long long)arg1;
- (id)minimizeTaskData;
- (void)setMinimizeTaskData:(id)arg1;
- (id)currentView;
- (void)setCurrentView:(id)arg1;
- (BOOL)isCameraPrevInterruptAndResume;
- (void)setIsCameraPrevInterruptAndResume:(BOOL)arg1;
- (BOOL)isLocalResume;
- (void)setIsLocalResume:(BOOL)arg1;
- (void).cxx_destruct;
@end

