@interface VoIPViewController : MMWindowViewController <WCActionSheetDelegate, MinimizeNewTransitionControllerDelegate, AVRoutePickerViewDelegate, WCCameraModuleDelegate, MultiSelectContactsViewControllerDelegate, MMStringToastViewDelegate, _TtP6WeChat13ICarPlayUIExt_, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VoIPTalkingViewDelegate, IVOIPVideoDeviceDelegate, VoipUIManagerExt>
{
    unsigned int _status; // +0x74
    CContact * _contact; // +0x78
    UIImageView * _backgroundView; // +0x80
    UIImageView * m_profileBackgroundView; // +0x88
    CMessageWrap * _msgWrap; // +0x90
    BOOL _isConnectOK; // +0x98
    BOOL _isAcceptVoice; // +0x99
    BOOL _canUpdateStatusMachine; // +0x9a
    unsigned int _startTalkingTime; // +0x9c
    int m_viewInitMode; // +0xa0
    BOOL m_forceToVoice; // +0xa4
    BOOL m_hasStopBellSound; // +0xa5
    BOOL m_hasInvokeToAudioAnimation; // +0xa6
    BOOL m_hasCalculateBlurView; // +0xa7
    BOOL m_isMinimizeMode; // +0xa8
    BOOL _isEnding; // +0xa9
    BOOL _lastTalkEnding; // +0xaa
    BOOL _isSpeakModeOpen; // +0xab
    BOOL _isMicOpen; // +0xac
    BOOL _isVideoModeOpen; // +0xad
    BOOL _needResetVolume; // +0xae
    BOOL _frontVirtualBackgroundOn; // +0xaf
    BOOL _backVirtualBackgroundOn; // +0xb0
    BOOL _isFrontCamera; // +0xb1
    BOOL _isPreAuthorized; // +0xb2
    BOOL _isShowingAirplay; // +0xb3
    BOOL _isAirplayLoading; // +0xb4
    BOOL _isIlink; // +0xb5
    BOOL _isCameraInterrupt; // +0xb6
    BOOL _isMiniInAppActived; // +0xb7
    BOOL _m_shouldChange; // +0xb8
    BOOL _m_isLandSpaceMode; // +0xb9
    BOOL _hasDisabledProximityToPresentSettingViewController; // +0xba
    BOOL _hasShowRingBackInfoView; // +0xbb
    BOOL _canClickAddMembersBtn; // +0xbc
    BOOL _isVideoDeviceStartCompleteAtFirst; // +0xbd
    BOOL _isVideoDeviceRecvFrameAtFirst; // +0xbe
    unsigned int initTime; // +0xc0
    unsigned int _netStatusTipStartTime; // +0xc4
    unsigned int _netStatusTipDisplayDuation; // +0xc8
    unsigned int _deviceStatus; // +0xcc
    MultiTalkHDHeadView * m_headImageView; // +0xd0
    UILabel * m_usrnameLabel; // +0xd8
    VoIPHeadImageBlurView * m_blurView; // +0xe0
    MMUIButton * m_minimizeButton; // +0xe8
    VoIPTalkingView * m_talkingView; // +0xf0
    VoipMinimizeReportObject * m_reportObject; // +0xf8
    UIView * m_warningView; // +0x100
    id <VoIPViewControllerDelegate> _m_delegate; // +0x108
    WCUIAlertView * _alertView; // +0x110
    long long _netStatusTipType; // +0x118
    RingBackSoundCoordinator * _ringCoordinator; // +0x120
    RingToneDetail * _ringDetail; // +0x128
    unsigned long long _openFrom; // +0x130
    unsigned long long _m_roomId; // +0x138
    long long _m_roomKey; // +0x140
    MMStringToastView * _toastView; // +0x148
    RingDancingButton * _ringDancingButton; // +0x150
    unsigned long long _exceptionType; // +0x158
    VoIPMPUIDotsLoadingView * _dotsLoadingView; // +0x160
    UILabel * _m_warningLabel; // +0x168
    double _m_oldOriginY; // +0x170
    CADisplayLink * _ringDisplayLink; // +0x178
    UIView * _marqueeUponView; // +0x180
    UILabel * _marqueeUponLabel; // +0x188
    long long _lastEndRoomKey; // +0x190
    MinimizeNewTransitionController * _transitionController; // +0x198
    UIImageView * _m_snapshotBlurView; // +0x1a0
    AVRoutePickerView * _avRouteView; // +0x1a8
    NSString * _prevPortType; // +0x1b0
}
+ (id)getCurrentTopViewController;
- (void)setIsMiniInAppActived:(BOOL)arg1;
- (void)showWithAnimated:(int)arg1 inWindow:(id)arg2;
- (void)hide;
- (BOOL)isForceFullScreen;
- (void)setContact:(id)arg1;
- (BOOL)shouldFormVoIPMessageWhenCall;
- (BOOL)isFromMyselfForFormingVOIPMessageWhenCall;
- (int)wordingType;
- (void)supplementLocalBubbleMessage;
- (unsigned long long)roomID;
- (long long)roomKey;
- (void)formVOIPMessageWhenCall;
- (void)updateStatusLabel;
- (CGSize)viewSize;
- (CGRect)viewRect;
- (void)layoutBackgroundView;
- (void)layoutProfileBackgroundView;
- (void)layoutBlurView;
- (void)layoutHeadImageView;
- (void)layoutUsernameLabel;
- (void)layoutWarningView;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)checkAndUpdateProximity;
- (void)checkAndUpdateProximityBeforeTalkStart;
- (void)initRingCoordinator;
- (void)layoutNewMinimizeButton;
- (void)layoutMinimizeButton;
- (BOOL)accessibilityPerformEscape;
- (void)onSmallSwitchButtonClick;
- (void)changeToMinimizeView;
- (void)slipToMinimizeView:(id)arg1;
- (void)layoutTalkingView;
- (void)resetExpandViewElement:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1 andContact:(id)arg2 isEarMode:(BOOL)arg3 andInitViewMode:(int)arg4 openFrom:(unsigned long long)arg5 delegate:(id)arg6;
- (long long)preferredStatusBarStyle;
- (void)unregisterAllExtensions;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (void)dealloc;
- (BOOL)isCaller;
- (BOOL)isCalling;
- (BOOL)isTalking;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)stopPlaySound;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)switchToTalkingView;
- (void)reportTalkingAllButtonStatus:(int)arg1;
- (void)reportAllButtonStatus:(int)arg1;
- (void)endAirplayLoadingState;
- (void)layoutRingBackDancingButton;
- (void)relayoutRingDancingButtonWithRecentStatue;
- (void)startMarquee;
- (void)stopMarquee;
- (void)processMarquee;
- (void)OnLocalEarModeFor2G;
- (void)OnRemoteEarModeFor2G;
- (void)OnLocalEarMode;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnVideoModeChangeToVoiceMode;
- (void)onVoIPChangeExceptionType:(unsigned long long)arg1;
- (void)updateNetTypeStatus;
- (BOOL)shouldQuitAutomaticallyWhenEndingCall;
- (BOOL)shouldLaunchEndingFeedbackWhenEndingCall;
- (void)endCallAfterDelay:(double)arg1 withCompletion:(id /* block */)arg2;
- (void)fakeEndVoIPByChangingToMultiTalk;
- (void)clearRenderView;
- (void)forceEndCall;
- (void)onVoIPStartCameraInterruption;
- (void)onVideoVoipTalkingViewHangUp;
- (void)onVideoVoipTalkingViewEndCall;
- (BOOL)isVideoVoipTalkingViewInitWithVideoMode;
- (void)onVideoVoipTalkingViewSwitchToSmall;
- (void)didOnVideoVoipViewChangeToMinimizeMode;
- (BOOL)onVideoVoipTalkingViewRequestMinimizeStatus;
- (BOOL)onVideoVoipTalkingViewIsVoipTalking;
- (void)setIfNeedSupplyExceptionMessage:(int)arg1;
- (void)onVoIPTalkingView:(id)arg1 durationTimerUpdated:(id)arg2;
- (void)onShowVideoHint;
- (int)getRemoteVideoRatio;
- (void)ReportVoIPButtonStatus:(id)arg1 dialStatus:(int)arg2 audioData:(id)arg3 actionResult:(id)arg4;
- (void)SetMicroPhoneMute:(BOOL)arg1;
- (BOOL)getIsTalked;
- (void)setIsUserAbort:(unsigned int)arg1;
- (void)FlipCamera;
- (unsigned int)getRoomType;
- (unsigned long long)getRoomId;
- (long long)getRoomKey;
- (id)getDangerUserTips;
- (BOOL)getIsDangerTalk;
- (unsigned long long)getDangerRoomId;
- (unsigned long long)getDangerRoomKey;
- (void)setVirtualBackground:(BOOL)arg1 isFront:(BOOL)arg2;
- (BOOL)isRemoteUsePhone;
- (BOOL)getIsCameraFront;
- (BOOL)getIsMinimizeView;
- (void)setVideoDelegate:(id)arg1;
- (void)voipAppBecomeActive;
- (void)voipAppGotoBackground;
- (void)setVideoDeviceDelegate:(id)arg1;
- (void)setOutputVideoRender:(id)arg1;
- (void)setInputVideoRender:(id)arg1;
- (void)setLocalViewRenderer:(id)arg1;
- (void)setRemoteViewRenderer:(id)arg1;
- (void)changeRenderFrame:(CGRect)arg1;
- (id)getOutputVideoRenderView;
- (id)getInputVideoRenderLock;
- (id)getOutputVideoRenderLock;
- (void)changeInputRenderFrame:(CGRect)arg1;
- (id)getInputVideoRenderView;
- (void)VideoStatusChange:(BOOL)arg1 update:(BOOL)arg2 notify:(BOOL)arg3;
- (BOOL)getIfThisTalkIlink;
- (long long)getVideoOrientation;
- (unsigned int)getRemoteWxVer;
- (id)getRemoteSourceDevice;
- (BOOL)isVideoMode;
- (BOOL)isInitVideoMode;
- (void)HangupWithReason:(int)arg1;
- (BOOL)getIfEnableRCI;
- (int)getUseSharpenFilterConfig;
- (int)getUse1080pSharpen;
- (BOOL)getRemoteVideoClosed;
- (BOOL)getLocalVideoClosed;
- (int)getModeActionStatus;
- (BOOL)getIsVoiceMode;
- (void)VideoSwitchToVoiceModeNotPushStatus;
- (unsigned int)getRemoteUserIlinkSupportStatus:(id)arg1;
- (void)addScrollingStringOutsideVoIP:(id)arg1 withDisplayTime:(double)arg2;
- (void)onAddMemberPageForIlink;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)switchToAudioModeAnimation;
- (id)getContact;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(BOOL)arg4;
- (void)layoutToastView;
- (void)changeVoIPToastOriginY:(double)arg1 height:(double)arg2;
- (void)setToastAlpha:(double)arg1;
- (void)showNetStatusTipWithType:(long long)arg1;
- (void)checkIfNeedResetNetStatusTipType;
- (void)hideNetStatusTip;
- (void)onTapNetStatusTipView;
- (void)viewDidLayoutSubviews;
- (void)layoutMPUIDotsLoadingView;
- (void)layoutSubViews;
- (void)onVoipWarningMsgArrived;
- (void)UIManagerWillExtendWindow;
- (void)UIManagerDidExtendWindow;
- (void)UIManagerWindowWillExtendFromCollapse;
- (void)backFromMinimise;
- (void)onVoipFailToAddMinimizeTask;
- (void)onSupportClickAddMembersBtn;
- (void)setAlertView:(id)arg1;
- (void)closeWithCompletion:(id /* block */)arg1;
- (void)cancelOrEndCallAction;
- (void)cancelOrEndCallActionImmediately:(BOOL)arg1;
- (void)cancelOrEndCallActionImmediately:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (BOOL)useTransparentNavibar;
- (void)OnRemoteVideoMode;
- (void)OnRemoteEarMode;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)specialTouchAreaView;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (void)clearPanGesture;
- (void)initMinimizePanGesture;
- (void)resetNormalView;
- (BOOL)shouldBlockGesture;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (void)onFinishMinimizeCircleInteraction:(BOOL)arg1;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeTransitionChanged:(double)arg1 translation:(CGPoint)arg2;
- (void)onMinimizeTransitionBeginWithoutContext;
- (id)getSnapshotView;
- (id)getVideoSnapshotViewBeforeTalk;
- (BOOL)shouldBlockSlipGesture;
- (void)videoDeviceCameraFront:(id)arg1;
- (void)videoDeviceCameraBack:(id)arg1;
- (void)videoDevice:(id)arg1 updateFilterSetting:(id)arg2 fromABTest:(BOOL)arg3;
- (void)videoDevice:(id)arg1 didChangeRotation:(int)arg2;
- (void)addMultiAudioDeviceView;
- (void)showAirplay;
- (void)showAirplayLoading;
- (void)showAirplayOvertime;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)onChangeVideoMode;
- (void)startCameraInterruption;
- (void)endCameraInterruption;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (void)cameraModuleInterruptionCancel:(id)arg1;
- (long long)cameraModuleReportScene;
- (void)onToastView:(id)arg1 contentUpdated:(id)arg2;
- (void)onVideoSessionStartComplete;
- (void)onVideoSessionRecvFirstFrame;
- (id)contact;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)m_headImageView;
- (void)setM_headImageView:(id)arg1;
- (id)m_usrnameLabel;
- (void)setM_usrnameLabel:(id)arg1;
- (id)m_blurView;
- (void)setM_blurView:(id)arg1;
- (id)m_profileBackgroundView;
- (void)setM_profileBackgroundView:(id)arg1;
- (BOOL)m_hasCalculateBlurView;
- (void)setM_hasCalculateBlurView:(BOOL)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (id)m_talkingView;
- (void)setM_talkingView:(id)arg1;
- (BOOL)m_isMinimizeMode;
- (void)setM_isMinimizeMode:(BOOL)arg1;
- (id)m_reportObject;
- (void)setM_reportObject:(id)arg1;
- (unsigned int)initTime;
- (void)setInitTime:(unsigned int)arg1;
- (id)m_warningView;
- (void)setM_warningView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isEnding;
- (void)setIsEnding:(BOOL)arg1;
- (BOOL)lastTalkEnding;
- (void)setLastTalkEnding:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)alertView;
- (long long)netStatusTipType;
- (void)setNetStatusTipType:(long long)arg1;
- (unsigned int)netStatusTipStartTime;
- (void)setNetStatusTipStartTime:(unsigned int)arg1;
- (unsigned int)netStatusTipDisplayDuation;
- (void)setNetStatusTipDisplayDuation:(unsigned int)arg1;
- (BOOL)isSpeakModeOpen;
- (void)setIsSpeakModeOpen:(BOOL)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (BOOL)isVideoModeOpen;
- (void)setIsVideoModeOpen:(BOOL)arg1;
- (id)ringCoordinator;
- (void)setRingCoordinator:(id)arg1;
- (id)ringDetail;
- (void)setRingDetail:(id)arg1;
- (unsigned long long)openFrom;
- (void)setOpenFrom:(unsigned long long)arg1;
- (unsigned long long)m_roomId;
- (void)setM_roomId:(unsigned long long)arg1;
- (long long)m_roomKey;
- (void)setM_roomKey:(long long)arg1;
- (id)toastView;
- (void)setToastView:(id)arg1;
- (BOOL)needResetVolume;
- (void)setNeedResetVolume:(BOOL)arg1;
- (id)ringDancingButton;
- (void)setRingDancingButton:(id)arg1;
- (BOOL)frontVirtualBackgroundOn;
- (void)setFrontVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)backVirtualBackgroundOn;
- (void)setBackVirtualBackgroundOn:(BOOL)arg1;
- (BOOL)isFrontCamera;
- (void)setIsFrontCamera:(BOOL)arg1;
- (BOOL)isPreAuthorized;
- (void)setIsPreAuthorized:(BOOL)arg1;
- (unsigned long long)exceptionType;
- (void)setExceptionType:(unsigned long long)arg1;
- (BOOL)isShowingAirplay;
- (void)setIsShowingAirplay:(BOOL)arg1;
- (unsigned int)deviceStatus;
- (void)setDeviceStatus:(unsigned int)arg1;
- (BOOL)isAirplayLoading;
- (void)setIsAirplayLoading:(BOOL)arg1;
- (BOOL)isIlink;
- (void)setIsIlink:(BOOL)arg1;
- (BOOL)isCameraInterrupt;
- (void)setIsCameraInterrupt:(BOOL)arg1;
- (BOOL)isMiniInAppActived;
- (id)dotsLoadingView;
- (void)setDotsLoadingView:(id)arg1;
- (id)m_warningLabel;
- (void)setM_warningLabel:(id)arg1;
- (BOOL)m_shouldChange;
- (void)setM_shouldChange:(BOOL)arg1;
- (double)m_oldOriginY;
- (void)setM_oldOriginY:(double)arg1;
- (BOOL)m_isLandSpaceMode;
- (void)setM_isLandSpaceMode:(BOOL)arg1;
- (BOOL)hasDisabledProximityToPresentSettingViewController;
- (void)setHasDisabledProximityToPresentSettingViewController:(BOOL)arg1;
- (id)ringDisplayLink;
- (void)setRingDisplayLink:(id)arg1;
- (id)marqueeUponView;
- (void)setMarqueeUponView:(id)arg1;
- (id)marqueeUponLabel;
- (void)setMarqueeUponLabel:(id)arg1;
- (long long)lastEndRoomKey;
- (void)setLastEndRoomKey:(long long)arg1;
- (BOOL)hasShowRingBackInfoView;
- (void)setHasShowRingBackInfoView:(BOOL)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (id)m_snapshotBlurView;
- (void)setM_snapshotBlurView:(id)arg1;
- (id)avRouteView;
- (void)setAvRouteView:(id)arg1;
- (id)prevPortType;
- (void)setPrevPortType:(id)arg1;
- (BOOL)canClickAddMembersBtn;
- (void)setCanClickAddMembersBtn:(BOOL)arg1;
- (BOOL)isVideoDeviceStartCompleteAtFirst;
- (void)setIsVideoDeviceStartCompleteAtFirst:(BOOL)arg1;
- (BOOL)isVideoDeviceRecvFrameAtFirst;
- (void)setIsVideoDeviceRecvFrameAtFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end

