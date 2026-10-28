@interface VoIPViewController : MMWindowViewController <WCActionSheetDelegate, MinimizeNewTransitionControllerDelegate, AVRoutePickerViewDelegate, WCCameraModuleDelegate, MultiSelectContactsViewControllerDelegate, MMStringToastViewDelegate, _TtP6WeChat13ICarPlayUIExt_, VoIPAudioServiceExtension, IAUAudioDeviceExt, SharePreConfirmSheetViewDelegate, VoIPMPSubCallServiceExtension, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VoIPTalkingViewDelegate, IVOIPVideoDeviceDelegate, VoipUIManagerExt>
{
    unsigned int _status; // +0x7c
    CContact * _contact; // +0x80
    UIImageView * _backgroundView; // +0x88
    UIImageView * m_profileBackgroundView; // +0x90
    CMessageWrap * _msgWrap; // +0x98
    BOOL _isConnectOK; // +0xa0
    BOOL _isAcceptVoice; // +0xa1
    BOOL _canUpdateStatusMachine; // +0xa2
    unsigned int _startTalkingTime; // +0xa4
    int m_viewInitMode; // +0xa8
    BOOL m_forceToVoice; // +0xac
    BOOL m_hasStopBellSound; // +0xad
    BOOL m_hasInvokeToAudioAnimation; // +0xae
    BOOL m_hasCalculateBlurView; // +0xaf
    BOOL m_isMinimizeMode; // +0xb0
    BOOL _isEnding; // +0xb1
    BOOL _lastTalkEnding; // +0xb2
    BOOL _isSpeakModeOpen; // +0xb3
    BOOL _isMicOpen; // +0xb4
    BOOL _isVideoModeOpen; // +0xb5
    BOOL _needResetVolume; // +0xb6
    BOOL _v2_isUsingVirtualBackground; // +0xb7
    BOOL _frontVirtualBackgroundOn; // +0xb8
    BOOL _backVirtualBackgroundOn; // +0xb9
    BOOL _isFrontCamera; // +0xba
    BOOL _isPreAuthorized; // +0xbb
    BOOL _isShowingAirplay; // +0xbc
    BOOL _isAirplayLoading; // +0xbd
    BOOL _isIlink; // +0xbe
    BOOL _isCameraInterrupt; // +0xbf
    BOOL _isMiniInAppActived; // +0xc0
    BOOL _isAudioInterruption; // +0xc1
    BOOL _m_shouldChange; // +0xc2
    BOOL _m_isLandSpaceMode; // +0xc3
    BOOL _hasDisabledProximityToPresentSettingViewController; // +0xc4
    BOOL _hasShowRingBackInfoView; // +0xc5
    BOOL _canClickAddMembersBtn; // +0xc6
    BOOL _isVideoDeviceStartCompleteAtFirst; // +0xc7
    BOOL _isVideoDeviceRecvFrameAtFirst; // +0xc8
    BOOL _isToastViewAddingScrollingString; // +0xc9
    unsigned int initTime; // +0xcc
    unsigned int _netStatusTipStartTime; // +0xd0
    unsigned int _netStatusTipDisplayDuation; // +0xd4
    unsigned int _deviceStatus; // +0xd8
    MultiTalkHDHeadView * m_headImageView; // +0xe0
    UILabel * m_usrnameLabel; // +0xe8
    VoIPHeadImageBlurView * m_blurView; // +0xf0
    MMUIButton * m_minimizeButton; // +0xf8
    VoIPTalkingView * m_talkingView; // +0x100
    VoipMinimizeReportObject * m_reportObject; // +0x108
    UIView * m_warningView; // +0x110
    id <VoIPViewControllerDelegate> _m_delegate; // +0x118
    WCUIAlertView * _alertView; // +0x120
    long long _netStatusTipType; // +0x128
    RingBackSoundCoordinator * _ringCoordinator; // +0x130
    RingToneDetail * _ringDetail; // +0x138
    unsigned long long _openFrom; // +0x140
    unsigned long long _m_roomId; // +0x148
    long long _m_roomKey; // +0x150
    MMStringToastView * _toastView; // +0x158
    RingDancingButton * _ringDancingButton; // +0x160
    unsigned long long _exceptionType; // +0x168
    VoIPMPUIv2DotsLoadingView * _v2_dotsLoadingView; // +0x170
    UILabel * _m_warningLabel; // +0x178
    double _m_oldOriginY; // +0x180
    CADisplayLink * _ringDisplayLink; // +0x188
    UIView * _marqueeUponView; // +0x190
    UILabel * _marqueeUponLabel; // +0x198
    long long _lastEndRoomKey; // +0x1a0
    MinimizeNewTransitionController * _transitionController; // +0x1a8
    UIImageView * _m_snapshotBlurView; // +0x1b0
    AVRoutePickerView * _avRouteView; // +0x1b8
    NSString * _prevPortType; // +0x1c0
    id /* block */ _displayAudioInterruptionToastBlock; // +0x1c8
    unsigned long long _audioUnitStartupSucceedCount; // +0x1d0
    SharePreConfirmSheetView * _sheetView; // +0x1d8
}
+ (id)getCurrentTopViewController;
- (void)_cancelDisplayingAudioInterruptionToast:(BOOL)arg1;
- (void)cancelDisplayingAudioInterruptionToast;
- (void)displayAudioInterruptionToastIfNeed;
- (void)setIsIlink:(BOOL)arg1;
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
- (void)onDidSelectNormalContact:(id)arg1;
- (void)switchToAudioModeAnimation;
- (id)getContact;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3;
- (void)addScrollingString:(id)arg1 withDisplayTime:(double)arg2 type:(unsigned long long)arg3 isDiff:(BOOL)arg4;
- (void)layoutToastViewWithBottom:(double)arg1;
- (void)layoutToastView;
- (void)changeVoIPToastOriginY:(double)arg1 height:(double)arg2;
- (void)MMStringToastViewWillAnimateToAddScrollingStringWithHeight:(double)arg1;
- (void)MMStringToastViewDidAnimateToAddScrollingString;
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
- (void)VoIPTalkingViewDidSwitchToSplit;
- (void)VoIPTalkingViewSubWindowViewOnMove;
- (void)VoIPTalkingViewDidRestoreToDefault;
- (double)panelHeight;
- (void)VoIPTalkingViewDidShowButtons;
- (void)VoIPTalkingViewDidHideButtons;
- (void)voIPAudioServiceInterruptionBegin;
- (void)voIPAudioServiceInterruptionEnd;
- (void)voIPAudioServiceDidReceiveAudioUnitCallbackFirstEachStartup;
- (void)voIPAudioServiceDidStartAudioUnitButFailed;
- (void)OnSharePreConfirmSheetViewSend:(id)arg1;
- (void)voIPMPSubCallServiceDidReceiveInvite;
- (void)voIPMPSubCallServiceDidFinishInvite;
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
- (BOOL)v2_isUsingVirtualBackground;
- (void)setV2_isUsingVirtualBackground:(BOOL)arg1;
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
- (BOOL)isCameraInterrupt;
- (void)setIsCameraInterrupt:(BOOL)arg1;
- (BOOL)isMiniInAppActived;
- (id)v2_dotsLoadingView;
- (void)setV2_dotsLoadingView:(id)arg1;
- (BOOL)isAudioInterruption;
- (void)setIsAudioInterruption:(BOOL)arg1;
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
- (BOOL)isToastViewAddingScrollingString;
- (void)setIsToastViewAddingScrollingString:(BOOL)arg1;
- (id /* block */)displayAudioInterruptionToastBlock;
- (void)setDisplayAudioInterruptionToastBlock:(id /* block */)arg1;
- (unsigned long long)audioUnitStartupSucceedCount;
- (void)setAudioUnitStartupSucceedCount:(unsigned long long)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end
