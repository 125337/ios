@interface MultiTalkMainViewController : MMWindowViewController <MultiTalkMgrExt, MultiTalkMembersViewDelegate, UIViewControllerTransitioningDelegate, MultiTalkBeforeTalkingOperateViewDelegate, MultiTalkBottomOperatePanelDelegate, MultitalkSecondOperateViewDelegate, IRecordPermissionCheckExt, MultiTalkScreenSharingLogicDelegate, MMTipsViewControllerDelegate, WCActionSheetDelegate, MinimizeNewTransitionControllerDelegate, WCCameraModuleDelegate, ilinkMultiSelectLogicDelegate, MultiTalkScreenSharingAudienceViewControllerDelegate, AVRoutePickerViewDelegate, IAUAudioDeviceExt, ISysCallCheckExt, VoIPInvitationBreadthViewDelegate, VoIPLockScreenButtonDelegate, VoipUIManagerExt, MultiTalkMainWindowDelegate, RingBackSoundCoordinatorDelegate>
{
    BOOL m_isMinCardMode; // +0x7c
    ilinkMultiSelectLogic * m_ilinkMultiSelectLogic; // +0x80
    vector<int, std::allocator<int>> memberIDMsgVector; // +0x88
    BOOL m_isMinCardExpandIng; // +0xa0
    BOOL _m_isCaller; // +0xa1
    BOOL _m_connect_hangup; // +0xa2
    BOOL _isFromNewIlink; // +0xa3
    BOOL _fromIgnore; // +0xa4
    BOOL _isLockScreen; // +0xa5
    BOOL _isBottomOperatePanelInited; // +0xa6
    BOOL _shouldHideBottomOperatePanel; // +0xa7
    BOOL _m_hasClickAcceptButton; // +0xa8
    BOOL _m_hasClickHangupButton; // +0xa9
    BOOL _m_hasStartTimerView; // +0xaa
    BOOL _m_talkReady; // +0xab
    BOOL _m_deviceLaunchSuccess; // +0xac
    BOOL _m_hasBlurBackground; // +0xad
    BOOL _m_isMinimizeMode; // +0xae
    BOOL _isMemberDisplayBigHeadListUpdated; // +0xaf
    BOOL _isMemberTalkingListUpdated; // +0xb0
    BOOL _isMemberWaitListUpdated; // +0xb1
    BOOL _m_hasCreateOk; // +0xb2
    BOOL _m_connect_onePersonLeft; // +0xb3
    BOOL _m_connect_timeOut; // +0xb4
    BOOL _m_connect_netWorkError; // +0xb5
    BOOL _m_connect_beCanceled; // +0xb6
    BOOL _m_connect_interruptByCall; // +0xb7
    BOOL _canShareScreen; // +0xb8
    BOOL _isCameraInterrupt; // +0xb9
    BOOL _isViewAppeared; // +0xba
    BOOL _isFirstTimeViewDidAppeared; // +0xbb
    BOOL _isInAudioInterruption; // +0xbc
    BOOL _isSysCallingBeforeAcception; // +0xbd
    BOOL _hasReportHiddenWithin1hBtnExp; // +0xbe
    BOOL _hasReportGroupHideBtnExp; // +0xbf
    BOOL _isVoIPRoomWithOutsideContacts; // +0xc0
    BOOL _isSelfOutsideChatRoom; // +0xc1
    int _m_layoutType; // +0xc4
    int _multiPathCellularCounter; // +0xc8
    int _m_deviceStateInfoCounter; // +0xcc
    int _m_networkStatus; // +0xd0
    unsigned int _m_audio_duration; // +0xd4
    unsigned int _m_video_start_time; // +0xd8
    int _mInitThermalState; // +0xdc
    int _mThermalState; // +0xe0
    int _mPrevThermalState; // +0xe4
    int _mMaxThermalState; // +0xe8
    unsigned int _mInitCpuUsage; // +0xec
    unsigned int _mCpuUsage; // +0xf0
    unsigned int _mPrevCpuUsage; // +0xf4
    unsigned int _mMaxCpuUsage; // +0xf8
    unsigned int _mIsLowPowerModeEnabled; // +0xfc
    unsigned int _mInitBatteryInfo; // +0x100
    unsigned int _mBatteryInfo; // +0x104
    unsigned int _mPrevBatteryInfo; // +0x108
    unsigned int _mLowBattery; // +0x10c
    unsigned int _mPrevLowBattery; // +0x110
    unsigned int _mInitDeviceCpuUsage; // +0x114
    unsigned int _mDeviceCpuUsage; // +0x118
    unsigned int _mPrevTotalCpuUsage; // +0x11c
    unsigned int _mMaxTotalCpuUsage; // +0x120
    unsigned int _mInitBatteryChargeInfo; // +0x124
    unsigned int _mBatteryChargeInfo; // +0x128
    unsigned int _mPrevBatteryChargeInfo; // +0x12c
    unsigned int _m_minimizeClickCount; // +0x130
    unsigned int _m_muteClickCount; // +0x134
    unsigned int _m_speakerClickCount; // +0x138
    unsigned int _m_videoClickCount; // +0x13c
    unsigned int _m_addMemberClickCount; // +0x140
    MultiTalkScreenSharingLogic * _screenSharingLogic; // +0x148
    id <MultiTalkMainViewControllerDelegate> _m_mainWindowDelegate; // +0x150
    MultiTalkScreenSharingAudienceViewController * _screenSharingAudienceViewController; // +0x158
    UIView<MultiTalkMembersViewProtocol> * _m_contactView; // +0x160
    MultiTalkBeforeTalkingOperateView * _m_beforeTalkingView; // +0x168
    MultiTalkBottomOperatePanel * _bottomOperatePanel; // +0x170
    MultitalkSecondOperateView * _m_secondTalkingView; // +0x178
    UIImageView * _m_backgroundView; // +0x180
    VoIPLockScreenButton * _lockButton; // +0x188
    VoIPLockScreenTip * _lockScreenTip; // +0x190
    UITapGestureRecognizer * _lockedTapGesture; // +0x198
    _TtC6WeChat22VoIPExtOperateMenuView * _screenProjectSourceMenu; // +0x1a0
    MMTimer * _m_checkTalkingTimer; // +0x1a8
    MMTimer * _m_checkQualityTimer; // +0x1b0
    MMTimer * _checkMultiPathCellularTimer; // +0x1b8
    MMTimer * _hideMultiPathCellularTimer; // +0x1c0
    MMTimer * _m_deviceStateInfoTimer; // +0x1c8
    MMConfSDKMemberMgr * _m_group; // +0x1d0
    NSString * _m_groupId; // +0x1d8
    CContact * _m_contactInviteMe; // +0x1e0
    NSDictionary * _m_videoMemberInfo; // +0x1e8
    NSArray * _m_memberTalkArray; // +0x1f0
    NSDictionary * _m_memberTalkingDic; // +0x1f8
    NSArray * _m_memberWaitList; // +0x200
    NSArray * _m_memberDisplayBigHeadList; // +0x208
    NSArray * _m_contactWaitList; // +0x210
    NSArray * _m_contactArrayOther; // +0x218
    MMTimer * _m_timeOutTimer; // +0x220
    MMTimer * _m_onePersonCheckFroMinimizeTimer; // +0x228
    id _m_selfMember; // +0x230
    WCUIAlertView * _currentAlertView; // +0x238
    unsigned long long _m_connect_startTime; // +0x240
    MinimizeNewTransitionController * _transitionController; // +0x248
    UIImageView * _m_snapshotBlurView; // +0x250
    CContact * _m_roomContact; // +0x258
    AVRoutePickerView * _avRouteView; // +0x260
    NSString * _prevPortType; // +0x268
    WeToast * _toast; // +0x270
    id /* block */ _displayAudioInterruptionToastBlock; // +0x278
    unsigned long long _audioUnitReceivedCallbackCount; // +0x280
    VoIPInvitationBreadthView * _invitationBreadthView; // +0x288
    VoIPInvitationInfo * _invitationInfo; // +0x290
    UIImageView * _invitationBreadthTransformView; // +0x298
    VoIPInComingReportManager * _voipReportManager; // +0x2a0
}
- (void)reloadData;
- (BOOL)isSpeakerOn;
- (unsigned int)getDeviceStatus;
- (void)_cancelDisplayingAudioInterruptionToast:(BOOL)arg1;
- (void)cancelDisplayingAudioInterruptionToast;
- (void)displayAudioInterruptionToastIfNeed;
- (BOOL)isVideoSteamingWithUserName:(id)arg1;
- (void)hangupManually;
- (void)updateProximityBySpeakerButtonState;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (id)init;
- (id)initWithGroupInfo:(id)arg1;
- (void)dealloc;
- (void)whenGoingToResign;
- (void)callReport;
- (void)connectReportSuccess;
- (void)connectReportFailed;
- (void)durationReport;
- (void)videoDurationReport;
- (void)functionReport;
- (void)loadView;
- (void)viewDidLoad;
- (void)initViews;
- (BOOL)useTransparentNavibar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)layoutSubviewsManually;
- (void)viewDidLayoutSubviews;
- (void)changeViewInLayoutType;
- (void)resetExpandViewElement:(BOOL)arg1;
- (void)loadInvitationBreadthView;
- (id)currentInviteGroupNickName;
- (void)updateInvitationBreadthView;
- (id)getVoIPInvitationInfo;
- (void)layMinCardModeView;
- (void)updateMinCardmMemberDisplayBigHeadView;
- (void)updateAccessibility;
- (void)accept;
- (void)expandVideoVipView;
- (id)getMinCardContentView;
- (void)onMinCardMinimize;
- (void)restoreMinCardStatusBarColor;
- (id)groupInfo;
- (void)updateGroupInfo:(id)arg1;
- (BOOL)isInvitationCardViewExists;
- (void)ringBackSoundCoordinatorDidMuteWhenIsVolumeUp:(BOOL)arg1;
- (BOOL)isTheSameWithGroup:(id)arg1;
- (BOOL)isMemberReachLimit;
- (BOOL)isInBreathInviteScene;
- (void)checkIfOnePerson;
- (void)updateMemberTalkingList;
- (unsigned int)getCurrentRoomMemberCount;
- (void)updateContactOtherList;
- (void)updateContactWaitList;
- (void)updateMemberWaitList;
- (void)updateMemberDisplayBigHeadList;
- (void)updateVideoMemberInfo;
- (void)initOnePersonCheck;
- (void)initTimeOutTimer;
- (void)timeOutLogic;
- (void)initCheckTalkingTimer;
- (void)initCheckQualityTimer;
- (void)checkTalkMember;
- (void)getMemberQualityInfoList;
- (void)initBackgroundView;
- (void)updateBackgroundViewBlur;
- (void)initContactView;
- (void)initBottomOperatePanel;
- (void)reportScreenProjectEntryExposureIfNeeded;
- (void)initSecondTalkingView;
- (void)initBeforeTalkingView;
- (int)inviteReportCallTypeForIlinkTalk:(BOOL)arg1;
- (void)onClickAddMemberButton;
- (void)hangupMultiTalkByCallEnd;
- (BOOL)isUsingEarDevice;
- (BOOL)isIgnoreSpeakerButtonDevice;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2;
- (void)changeToReceiveACallLayout;
- (void)changeToJoinACallLayout;
- (void)changeToTalkingLayout;
- (BOOL)isInTalkingLayout;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)doCancelCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onMemberChange:(id)arg1;
- (void)updateMemberOutSideChatRoom:(id)arg1;
- (void)tryStartTimerView;
- (void)checkUsingCellar;
- (void)uploadDeviceStateCheck;
- (void)hideMultiPathCellularTips;
- (void)onMultiTalkReady;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onErr:(int)arg1;
- (void)onCreateFailedDueToRisk;
- (void)onAlertError;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 errorType:(int)arg2 groupInfo:(id)arg3;
- (void)onAddMultiTalkMemberFailedDueToRiskWithGroupInfo:(id)arg1;
- (void)onMultiTalkBannerItemChange:(id)arg1;
- (void)onRejectToCreateRoomForServerOverloadWithTimeInterval:(int)arg1;
- (void)onRejectToOpenCameraForServerOverloadWithTimeInterval:(int)arg1;
- (void)onBackgroundSelect:(BOOL)arg1;
- (void)onMultiTalkFailToAddMinimizeTask;
- (void)onIlinkChangeToMultiTalk:(double)arg1 isMicMute:(BOOL)arg2 isSpeakerOn:(BOOL)arg3 localVideoClosed:(BOOL)arg4;
- (void)reloadScreenSharingAudienceWithEnable:(BOOL)arg1;
- (void)multiTalkMembersView:(id)arg1 didReloadScreenSharingAudienceWithEnable:(BOOL)arg2;
- (void)updateSpeakerButtonStatus:(id)arg1 hasExtenalOutput:(BOOL)arg2;
- (void)OnCameraVideoStateChange:(BOOL)arg1 CameraOn:(BOOL)arg2;
- (void)OnScreenVideoStateChange:(BOOL)arg1 ScreenOn:(BOOL)arg2;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (void)onMultiTalkMgrOpenVideoServerNotAllowed;
- (void)handleCrossPlatformRemoteViewingIfNeeded;
- (void)onReceiveVideoMemberChangeMsg:(id)arg1 extDic:(id)arg2;
- (void)onMultiTalkMgrVideoSessionStartComplete;
- (void)onMultiTalkMgrVideoSessionStopComplete;
- (void)onMultiTalkMgrChangeVideoFailed;
- (void)onMultiTalkMgrVideoDeviceAuthFailed;
- (void)delayCheckUnReachable;
- (void)onMultiTalkMgrNetworkChange;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrChangeToWiFi;
- (void)onMultiTalkMgrChangeToHighWWan;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)resubscribeLargeVideo;
- (void)changeVideoModeBaseOnNetwork;
- (void)recoverVideoOn:(BOOL)arg1 screenStatus:(unsigned int)arg2;
- (id)screenSharingLogic;
- (id)groupForScreenSharingLogic;
- (void)screenSharingLogic:(id)arg1 didStartSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didStopSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didPauseSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didResumeSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 willTransiteSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didTransiteSharingInViewController:(id)arg2;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkSysInterrupt;
- (void)onMultiTalkSysInterruptEnd;
- (void)setCurrentAlertView:(id)arg1;
- (BOOL)onMultiTalkMembersViewIsVideoUserName:(id)arg1;
- (id)onMultiTalkMembersViewRequestRenderForUsername:(id)arg1;
- (unsigned long long)onMultiTalkMembersViewTotalMemberCount;
- (id)onMultiTalkMembersViewMemberAtIndex:(unsigned long long)arg1;
- (id)multiTalkMembersViewMembers;
- (void)onMultiTalkMembersViewAnimateToOnePerson;
- (void)onMultiTalkMembersViewClickdToBigViewWithAnimation:(BOOL)arg1 isSharedScreenData:(BOOL)arg2;
- (void)multiTalkMembersView:(id)arg1 onChangedToBigViewWithAnimation:(BOOL)arg2 isSharedScreenData:(BOOL)arg3;
- (void)onMultiTalkMembersViewDidLayoutCells:(id)arg1;
- (void)onMultiTalkMembersViewChangedToNormalViewFromShareScreenView:(BOOL)arg1;
- (void)onMultiTalkMembersViewUpdateSelectedUserNames:(id)arg1 remainingVisableUserNames:(id)arg2;
- (void)onMultiTalkMembersViewUpdateVideoDisplay:(id)arg1;
- (BOOL)onMultiTalkMembersViewIsSharingScreenUser:(id)arg1;
- (void)onMultiTalkMembersViewChangeOperationViewsAppearance:(BOOL)arg1;
- (id)onMultiTalkMembersViewGetVideoMember:(id)arg1;
- (void)onMultiTalkMemberDidTapped:(id)arg1;
- (id)onMultiTalkMembersViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkMembersViewMemberCountBeforeTalking;
- (id)onMultiTalkMembersViewMemberThatInviteMeBeforeTalking;
- (id)onMultiTalkMembersViewMemberStatusMapBeforeTalking;
- (unsigned long long)multiTalkMembersViewRoomId;
- (unsigned long long)multiTalkMembersViewRoomKey;
- (int)multiTalkMembersViewPanelLayoutType;
- (id)onMultiTalkMemberGetCallerName:(id)arg1;
- (double)multiTalkMembersView:(id)arg1 bottomOperationPanelDisplayHeight:(int)arg2;
- (double)multiTalkMembersViewBottomOperationPanelDisplayHeight;
- (void)realCallHangupDelegate;
- (void)callHangupDelegate;
- (void)callAcceptDelegate;
- (void)onMultiTalkBeforeTalkingOperateViewHanup;
- (void)realHangup;
- (void)onMultiTalkBeforeTalkingOperateViewEnterCall;
- (void)realAccept;
- (void)onMultiTalkBeforeTalkingOperateViewMinimize;
- (void)onMultiTalkBeforeTalkingOperateViewMinimizeWithNotAnimation;
- (unsigned long long)getBeforeTalkingOtherMemberCount;
- (void)onMultiTalkBeforeTalkingOperateViewIgnoreAction;
- (void)collapseInvitationBreadthViewForAutoIgnore;
- (void)UIManagerWillExtendWindow;
- (void)onRemoteSupportNewScreenProjectChanged:(BOOL)arg1;
- (void)onMultiTalkBottomOperatePanelVideoOpen;
- (void)_onMultiTalkBottomOperatePanelVideoOpen;
- (void)onMultiTalkBottomOperatePanelVideoClose;
- (void)onMultiTalkBottomOperatePanelMicrophoneOn;
- (void)onMultiTalkBottomOperatePanelMicrophoneOff;
- (void)onMultiTalkBottomOperatePanelSpeakerOn;
- (void)onMultiTalkBottomOperatePanelSpeakerOff;
- (void)onMultiTalkBottomOperatePanelHangup;
- (void)onMultiTalkBottomOperatePanelFlipCameraButtonClick;
- (void)onMultiTalkBottomOperatePanelOpenMultiPathCellularSetting;
- (unsigned long long)getCurrentRoomId;
- (unsigned long long)getCurrentRoomKey;
- (void)onMultiTalkBottomOperatePanelArrowButtonClick;
- (void)multiTalkBottomOperatePanelDidUpdateSpeakerButtonState:(id)arg1;
- (id)settingPortType;
- (BOOL)hasExtenalOutput;
- (id)curOutputPort;
- (id)getSpeakerBtnText:(id)arg1;
- (void)updateProximityWithPort:(id)arg1;
- (BOOL)showAirplayOrJustChange;
- (void)showToastOnMultiTalkVC:(id)arg1;
- (void)changeAudioToPort:(id)arg1 hasChanged:(BOOL)arg2;
- (void)setPanelSpeakerReady:(BOOL)arg1;
- (BOOL)getIfTalkReady;
- (void)addMultiAudioDeviceView;
- (void)showAirplay;
- (void)showAirplayLoading;
- (void)showAirplayOvertime;
- (void)routePickerViewWillBeginPresentingRoutes:(id)arg1;
- (void)routePickerViewDidEndPresentingRoutes:(id)arg1;
- (void)onMultitalkSecondOperateViewAddMember;
- (void)onMultitalkSecondOperateViewShareScreen;
- (void)showScreenProjectSourceMenu;
- (void)configScreenProjectSourceMenu;
- (void)onScreenProjectSelectFile;
- (void)onScreenProjectSelectMedia;
- (BOOL)shouldUseCrossPlatformScreenSharing;
- (BOOL)voipMultiTalkLockScreenEnabled;
- (void)onMultitalkSecondOperateViewMinimizeButtonClick;
- (unsigned long long)multitalkSecondOperateRoomID;
- (unsigned long long)multitalkSecondOperateRoomKey;
- (int)multitalkSecondOperatePanelLayoutType;
- (void)onClickTipsBtn:(unsigned long long)arg1;
- (void)showBlurMode;
- (void)clearBlurMode;
- (void)onMultiTalkMainWindowExtendAnimationDidEnd;
- (void)onMultiTalkMainWindowQuitAnimationWillStart;
- (void)onMultiTalkMainWindowQuitAnimationDidEnd;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowCollapseAnimationDidEnd;
- (void)onMultiTalkMainWindowCollapseAnimationWillStart;
- (void)onMultiTalkMainWindowExtendFromCollapseAnimationDidEnd;
- (CGRect)onMultiTalkMainWindowRequestMinimizeFrame;
- (id)onMultiTalkMainWindowGetMainRootView;
- (id)onMultiTalkMainWindowGetMinimizeImage;
- (void)OnRecordPermissioned;
- (void)OnRecordDenied;
- (void)OnRecordDeniedByWeChat;
- (void)adjustViewAndNavBarRect;
- (void)applicationWillEnterForeground;
- (void)didEnterBackground;
- (void)didTurnOffScreen;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)minimizeAnimationView;
- (void)initMinimizePanGesture;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (void)clearPanGesture;
- (void)resetNormalView;
- (CGSize)viewSize;
- (CGRect)viewRect;
- (void)slipToMinimizeView:(id)arg1 talkReady:(BOOL)arg2;
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
- (BOOL)shouldBlockSlipGesture;
- (void)cameraModuleInterruptionBegin:(id)arg1;
- (void)cameraModuleInterruptionEnd:(id)arg1;
- (void)cameraModuleInterruptionCancel:(id)arg1;
- (long long)cameraModuleReportScene;
- (BOOL)getIfMemberAlreadyInRoom:(id)arg1;
- (id)getAllMembersInVoipGroup;
- (void)ilinkMultiSelectLogicAddMembers:(id)arg1 inviteId:(unsigned long long)arg2;
- (void)ilinkMultiSelectLogicDidSelectNormalContact:(id)arg1;
- (void)multiTalkScreenSharingAudienceViewControllerDidClose:(id)arg1;
- (void)multiTalkScreenSharingAudienceViewController:(id)arg1 didTapToChangeOperationViewsAppearance:(BOOL)arg2;
- (void)audioDeviceStartedFail:(id)arg1;
- (void)audioDeviceDidReceiveCallbackFirstEachStartup;
- (void)OnSysCallState:(int)arg1 andCallId:(id)arg2;
- (void)setupNormalModeFromBreadthModeWithAnimated:(BOOL)arg1;
- (void)voIPInvitationBreadthViewWillSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewDidSetupScene:(id)arg1;
- (void)voIPInvitationBreadthViewWillScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidScrollOut:(id)arg1 manually:(BOOL)arg2;
- (void)voIPInvitationBreadthViewDidInterceptScrollingOut:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewHangup:(id)arg1;
- (void)voIPInvitationBreadthViewDidInviteViewIgnore:(id)arg1;
- (void)voIPInvitationBreadthViewDidQuickReplyViewClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenMiniInAppClick:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenAccept:(id)arg1;
- (void)voIPInvitationBreadthViewDidFullScreenHangup:(id)arg1;
- (void)scheduleMultiTalkFloatWindowExposureWithHiddenType:(long long)arg1 voipOperScene:(long long)arg2;
- (void)reportMultiTalkFloatWindowClick;
- (id)hiddenWithin1hBtnReportParamsForGroupCall;
- (void)reportHiddenWithin1hBtnExpIfNeeded;
- (void)reportHiddenWithin1hBtnClick;
- (id)groupHideBtnReportParams;
- (void)reportGroupHideBtnExpIfNeeded;
- (void)reportGroupHideBtnClick;
- (void)bindScreenLockReportParamsToView:(id)arg1;
- (void)setupLockScreenIfNeeded;
- (id)rootView;
- (void)updateScreenLock:(BOOL)arg1;
- (void)onScreenLockedTap:(id)arg1;
- (void)lockScreenButtonTapped:(id)arg1 toLocked:(BOOL)arg2;
- (BOOL)lockScreenButtonCanExitShakeAnimation:(id)arg1;
- (void)lockScreenButtonWillLock:(id)arg1;
- (void)lockScreenButtonWillUnlock:(id)arg1;
- (long long)profileObjectCallStateForContact:(id)arg1;
- (BOOL)m_isMinCardExpandIng;
- (void)setM_isMinCardExpandIng:(BOOL)arg1;
- (BOOL)m_isCaller;
- (void)setM_isCaller:(BOOL)arg1;
- (id)m_mainWindowDelegate;
- (void)setM_mainWindowDelegate:(id)arg1;
- (BOOL)m_connect_hangup;
- (void)setM_connect_hangup:(BOOL)arg1;
- (BOOL)isFromNewIlink;
- (void)setIsFromNewIlink:(BOOL)arg1;
- (BOOL)fromIgnore;
- (void)setFromIgnore:(BOOL)arg1;
- (BOOL)isLockScreen;
- (void)setIsLockScreen:(BOOL)arg1;
- (id)screenSharingAudienceViewController;
- (void)setScreenSharingAudienceViewController:(id)arg1;
- (id)m_contactView;
- (void)setM_contactView:(id)arg1;
- (id)m_beforeTalkingView;
- (void)setM_beforeTalkingView:(id)arg1;
- (id)bottomOperatePanel;
- (void)setBottomOperatePanel:(id)arg1;
- (BOOL)isBottomOperatePanelInited;
- (void)setIsBottomOperatePanelInited:(BOOL)arg1;
- (BOOL)shouldHideBottomOperatePanel;
- (void)setShouldHideBottomOperatePanel:(BOOL)arg1;
- (id)m_secondTalkingView;
- (void)setM_secondTalkingView:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)lockButton;
- (void)setLockButton:(id)arg1;
- (id)lockScreenTip;
- (void)setLockScreenTip:(id)arg1;
- (id)lockedTapGesture;
- (void)setLockedTapGesture:(id)arg1;
- (id)screenProjectSourceMenu;
- (void)setScreenProjectSourceMenu:(id)arg1;
- (int)m_layoutType;
- (void)setM_layoutType:(int)arg1;
- (BOOL)m_hasClickAcceptButton;
- (void)setM_hasClickAcceptButton:(BOOL)arg1;
- (BOOL)m_hasClickHangupButton;
- (void)setM_hasClickHangupButton:(BOOL)arg1;
- (BOOL)m_hasStartTimerView;
- (void)setM_hasStartTimerView:(BOOL)arg1;
- (BOOL)m_talkReady;
- (void)setM_talkReady:(BOOL)arg1;
- (BOOL)m_deviceLaunchSuccess;
- (void)setM_deviceLaunchSuccess:(BOOL)arg1;
- (BOOL)m_hasBlurBackground;
- (void)setM_hasBlurBackground:(BOOL)arg1;
- (BOOL)m_isMinimizeMode;
- (void)setM_isMinimizeMode:(BOOL)arg1;
- (BOOL)isMemberDisplayBigHeadListUpdated;
- (void)setIsMemberDisplayBigHeadListUpdated:(BOOL)arg1;
- (BOOL)isMemberTalkingListUpdated;
- (void)setIsMemberTalkingListUpdated:(BOOL)arg1;
- (BOOL)isMemberWaitListUpdated;
- (void)setIsMemberWaitListUpdated:(BOOL)arg1;
- (id)m_checkTalkingTimer;
- (void)setM_checkTalkingTimer:(id)arg1;
- (id)m_checkQualityTimer;
- (void)setM_checkQualityTimer:(id)arg1;
- (id)checkMultiPathCellularTimer;
- (void)setCheckMultiPathCellularTimer:(id)arg1;
- (id)hideMultiPathCellularTimer;
- (void)setHideMultiPathCellularTimer:(id)arg1;
- (int)multiPathCellularCounter;
- (void)setMultiPathCellularCounter:(int)arg1;
- (int)m_deviceStateInfoCounter;
- (void)setM_deviceStateInfoCounter:(int)arg1;
- (id)m_deviceStateInfoTimer;
- (void)setM_deviceStateInfoTimer:(id)arg1;
- (id)m_group;
- (void)setM_group:(id)arg1;
- (id)m_groupId;
- (void)setM_groupId:(id)arg1;
- (id)m_contactInviteMe;
- (void)setM_contactInviteMe:(id)arg1;
- (id)m_videoMemberInfo;
- (void)setM_videoMemberInfo:(id)arg1;
- (id)m_memberTalkArray;
- (void)setM_memberTalkArray:(id)arg1;
- (id)m_memberTalkingDic;
- (void)setM_memberTalkingDic:(id)arg1;
- (id)m_memberWaitList;
- (void)setM_memberWaitList:(id)arg1;
- (id)m_memberDisplayBigHeadList;
- (void)setM_memberDisplayBigHeadList:(id)arg1;
- (id)m_contactWaitList;
- (void)setM_contactWaitList:(id)arg1;
- (id)m_contactArrayOther;
- (void)setM_contactArrayOther:(id)arg1;
- (id)m_timeOutTimer;
- (void)setM_timeOutTimer:(id)arg1;
- (id)m_onePersonCheckFroMinimizeTimer;
- (void)setM_onePersonCheckFroMinimizeTimer:(id)arg1;
- (id)m_selfMember;
- (void)setM_selfMember:(id)arg1;
- (int)m_networkStatus;
- (void)setM_networkStatus:(int)arg1;
- (id)currentAlertView;
- (BOOL)m_hasCreateOk;
- (void)setM_hasCreateOk:(BOOL)arg1;
- (BOOL)m_connect_onePersonLeft;
- (void)setM_connect_onePersonLeft:(BOOL)arg1;
- (BOOL)m_connect_timeOut;
- (void)setM_connect_timeOut:(BOOL)arg1;
- (BOOL)m_connect_netWorkError;
- (void)setM_connect_netWorkError:(BOOL)arg1;
- (BOOL)m_connect_beCanceled;
- (void)setM_connect_beCanceled:(BOOL)arg1;
- (BOOL)m_connect_interruptByCall;
- (void)setM_connect_interruptByCall:(BOOL)arg1;
- (unsigned long long)m_connect_startTime;
- (void)setM_connect_startTime:(unsigned long long)arg1;
- (unsigned int)m_audio_duration;
- (void)setM_audio_duration:(unsigned int)arg1;
- (unsigned int)m_video_start_time;
- (void)setM_video_start_time:(unsigned int)arg1;
- (int)mInitThermalState;
- (void)setMInitThermalState:(int)arg1;
- (int)mThermalState;
- (void)setMThermalState:(int)arg1;
- (int)mPrevThermalState;
- (void)setMPrevThermalState:(int)arg1;
- (int)mMaxThermalState;
- (void)setMMaxThermalState:(int)arg1;
- (unsigned int)mInitCpuUsage;
- (void)setMInitCpuUsage:(unsigned int)arg1;
- (unsigned int)mCpuUsage;
- (void)setMCpuUsage:(unsigned int)arg1;
- (unsigned int)mPrevCpuUsage;
- (void)setMPrevCpuUsage:(unsigned int)arg1;
- (unsigned int)mMaxCpuUsage;
- (void)setMMaxCpuUsage:(unsigned int)arg1;
- (unsigned int)mIsLowPowerModeEnabled;
- (void)setMIsLowPowerModeEnabled:(unsigned int)arg1;
- (unsigned int)mInitBatteryInfo;
- (void)setMInitBatteryInfo:(unsigned int)arg1;
- (unsigned int)mBatteryInfo;
- (void)setMBatteryInfo:(unsigned int)arg1;
- (unsigned int)mPrevBatteryInfo;
- (void)setMPrevBatteryInfo:(unsigned int)arg1;
- (unsigned int)mLowBattery;
- (void)setMLowBattery:(unsigned int)arg1;
- (unsigned int)mPrevLowBattery;
- (void)setMPrevLowBattery:(unsigned int)arg1;
- (unsigned int)mInitDeviceCpuUsage;
- (void)setMInitDeviceCpuUsage:(unsigned int)arg1;
- (unsigned int)mDeviceCpuUsage;
- (void)setMDeviceCpuUsage:(unsigned int)arg1;
- (unsigned int)mPrevTotalCpuUsage;
- (void)setMPrevTotalCpuUsage:(unsigned int)arg1;
- (unsigned int)mMaxTotalCpuUsage;
- (void)setMMaxTotalCpuUsage:(unsigned int)arg1;
- (unsigned int)mInitBatteryChargeInfo;
- (void)setMInitBatteryChargeInfo:(unsigned int)arg1;
- (unsigned int)mBatteryChargeInfo;
- (void)setMBatteryChargeInfo:(unsigned int)arg1;
- (unsigned int)mPrevBatteryChargeInfo;
- (void)setMPrevBatteryChargeInfo:(unsigned int)arg1;
- (unsigned int)m_minimizeClickCount;
- (void)setM_minimizeClickCount:(unsigned int)arg1;
- (unsigned int)m_muteClickCount;
- (void)setM_muteClickCount:(unsigned int)arg1;
- (unsigned int)m_speakerClickCount;
- (void)setM_speakerClickCount:(unsigned int)arg1;
- (unsigned int)m_videoClickCount;
- (void)setM_videoClickCount:(unsigned int)arg1;
- (unsigned int)m_addMemberClickCount;
- (void)setM_addMemberClickCount:(unsigned int)arg1;
- (BOOL)canShareScreen;
- (void)setCanShareScreen:(BOOL)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (id)m_snapshotBlurView;
- (void)setM_snapshotBlurView:(id)arg1;
- (BOOL)isCameraInterrupt;
- (void)setIsCameraInterrupt:(BOOL)arg1;
- (id)m_roomContact;
- (void)setM_roomContact:(id)arg1;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:(BOOL)arg1;
- (BOOL)isFirstTimeViewDidAppeared;
- (void)setIsFirstTimeViewDidAppeared:(BOOL)arg1;
- (id)avRouteView;
- (void)setAvRouteView:(id)arg1;
- (id)prevPortType;
- (void)setPrevPortType:(id)arg1;
- (id)toast;
- (void)setToast:(id)arg1;
- (id /* block */)displayAudioInterruptionToastBlock;
- (void)setDisplayAudioInterruptionToastBlock:(id /* block */)arg1;
- (unsigned long long)audioUnitReceivedCallbackCount;
- (void)setAudioUnitReceivedCallbackCount:(unsigned long long)arg1;
- (BOOL)isInAudioInterruption;
- (void)setIsInAudioInterruption:(BOOL)arg1;
- (BOOL)isSysCallingBeforeAcception;
- (void)setIsSysCallingBeforeAcception:(BOOL)arg1;
- (id)invitationBreadthView;
- (void)setInvitationBreadthView:(id)arg1;
- (id)invitationInfo;
- (void)setInvitationInfo:(id)arg1;
- (id)invitationBreadthTransformView;
- (void)setInvitationBreadthTransformView:(id)arg1;
- (id)voipReportManager;
- (void)setVoipReportManager:(id)arg1;
- (BOOL)hasReportHiddenWithin1hBtnExp;
- (void)setHasReportHiddenWithin1hBtnExp:(BOOL)arg1;
- (BOOL)hasReportGroupHideBtnExp;
- (void)setHasReportGroupHideBtnExp:(BOOL)arg1;
- (BOOL)isVoIPRoomWithOutsideContacts;
- (void)setIsVoIPRoomWithOutsideContacts:(BOOL)arg1;
- (BOOL)isSelfOutsideChatRoom;
- (void)setIsSelfOutsideChatRoom:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
