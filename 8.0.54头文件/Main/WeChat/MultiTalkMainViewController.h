@interface MultiTalkMainViewController : MMUIViewController <MultiTalkMgrExt, MMNewMultiSelectContactsViewControllerDelegate, MultiTalkMembersViewDelegate, UIViewControllerTransitioningDelegate, MultiTalkBeforeTalkingOperateViewDelegate, MultiTalkBottomOperatePanelDelegate, MultitalkSecondOperateViewDelegate, IRecordPermissionCheckExt, MultiTalkScreenSharingLogicDelegate, MMTipsViewControllerDelegate, WCActionSheetDelegate, MinimizeNewTransitionControllerDelegate, WCCameraModuleDelegate, ilinkMultiSelectLogicDelegate, MultiSelectContactsViewControllerDelegate, MultiTalkScreenSharingAudienceViewControllerDelegate, AVRoutePickerViewDelegate, MultiTalkMainWindowDelegate>
{
    BOOL m_isMinCardMode; // +0x68
    MultiTalkHDHeadView * m_minCardHeadImageView; // +0x70
    MMUILabel * m_minCardUsrnameLabel; // +0x78
    MMUILabel * m_minCardDescriptionLabel; // +0x80
    VoipDescriptionButton * m_minCardAcceptBtn; // +0x88
    VoipDescriptionButton * m_minCardHangupBtn; // +0x90
    MMUIButton * m_minCardExpandVideoVipViewButton; // +0x98
    MMUIView * m_minCardmMemberDisplayBigHeadView; // +0xa0
    UIImageView * m_minCardBlurView; // +0xa8
    ilinkMultiSelectLogic * m_ilinkMultiSelectLogic; // +0xb0
    vector<int, std::allocator<int>> memberIDMsgVector; // +0xb8
    BOOL m_isMinCardExpandIng; // +0xd0
    BOOL _m_isCaller; // +0xd1
    BOOL _m_connect_hangup; // +0xd2
    BOOL _isFromNewIlink; // +0xd3
    BOOL _isBottomOperatePanelInited; // +0xd4
    BOOL _shouldHideBottomOperatePanel; // +0xd5
    BOOL _m_hasClickAcceptButton; // +0xd6
    BOOL _m_hasClickHangupButton; // +0xd7
    BOOL _m_hasStartTimerView; // +0xd8
    BOOL _m_talkReady; // +0xd9
    BOOL _m_deviceLaunchSuccess; // +0xda
    BOOL _m_hasBlurBackground; // +0xdb
    BOOL _m_isMinimizeMode; // +0xdc
    BOOL _isMemberDisplayBigHeadListUpdated; // +0xdd
    BOOL _isMemberTalkingListUpdated; // +0xde
    BOOL _isMemberWaitListUpdated; // +0xdf
    BOOL _m_hasCreateOk; // +0xe0
    BOOL _m_connect_onePersonLeft; // +0xe1
    BOOL _m_connect_timeOut; // +0xe2
    BOOL _m_connect_netWorkError; // +0xe3
    BOOL _m_connect_beCanceled; // +0xe4
    BOOL _m_connect_interruptByCall; // +0xe5
    BOOL _canShareScreen; // +0xe6
    BOOL _isCameraInterrupt; // +0xe7
    BOOL _isInviterQuitEarly; // +0xe8
    BOOL _isViewAppeared; // +0xe9
    int _m_layoutType; // +0xec
    int _multiPathCellularCounter; // +0xf0
    int _m_deviceStateInfoCounter; // +0xf4
    unsigned int _m_messageId; // +0xf8
    int _m_networkStatus; // +0xfc
    unsigned int _m_audio_duration; // +0x100
    unsigned int _m_video_start_time; // +0x104
    int _mInitThermalState; // +0x108
    int _mThermalState; // +0x10c
    int _mPrevThermalState; // +0x110
    int _mMaxThermalState; // +0x114
    unsigned int _mInitCpuUsage; // +0x118
    unsigned int _mCpuUsage; // +0x11c
    unsigned int _mPrevCpuUsage; // +0x120
    unsigned int _mMaxCpuUsage; // +0x124
    unsigned int _mIsLowPowerModeEnabled; // +0x128
    unsigned int _mInitBatteryInfo; // +0x12c
    unsigned int _mBatteryInfo; // +0x130
    unsigned int _mPrevBatteryInfo; // +0x134
    unsigned int _mLowBattery; // +0x138
    unsigned int _mPrevLowBattery; // +0x13c
    unsigned int _mInitDeviceCpuUsage; // +0x140
    unsigned int _mDeviceCpuUsage; // +0x144
    unsigned int _mPrevTotalCpuUsage; // +0x148
    unsigned int _mMaxTotalCpuUsage; // +0x14c
    unsigned int _mInitBatteryChargeInfo; // +0x150
    unsigned int _mBatteryChargeInfo; // +0x154
    unsigned int _mPrevBatteryChargeInfo; // +0x158
    unsigned int _m_minimizeClickCount; // +0x15c
    unsigned int _m_muteClickCount; // +0x160
    unsigned int _m_speakerClickCount; // +0x164
    unsigned int _m_videoClickCount; // +0x168
    unsigned int _m_addMemberClickCount; // +0x16c
    MultiTalkScreenSharingLogic * _screenSharingLogic; // +0x170
    MMUIView * m_minCardModeBackgroundView; // +0x178
    UIImageView * m_minCardModeBackgroundViewBlurView; // +0x180
    UIImageView * m_minCardModeBackgroundViewMaskView; // +0x188
    id <MultiTalkMainViewControllerDelegate> _m_mainWindowDelegate; // +0x190
    MultiTalkScreenSharingAudienceViewController * _screenSharingAudienceViewController; // +0x198
    UIView<MultiTalkMembersViewProtocol> * _m_contactView; // +0x1a0
    MultiTalkBeforeTalkingOperateView * _m_beforeTalkingView; // +0x1a8
    MultiTalkBottomOperatePanel * _bottomOperatePanel; // +0x1b0
    MultitalkSecondOperateView * _m_secondTalkingView; // +0x1b8
    UIImageView * _m_backgroundView; // +0x1c0
    MMTimer * _m_checkTalkingTimer; // +0x1c8
    MMTimer * _m_updateMessageTimer; // +0x1d0
    MMTimer * _m_checkQualityTimer; // +0x1d8
    MMTimer * _checkMultiPathCellularTimer; // +0x1e0
    MMTimer * _hideMultiPathCellularTimer; // +0x1e8
    MMTimer * _m_deviceStateInfoTimer; // +0x1f0
    MMConfSDKMemberMgr * _m_group; // +0x1f8
    CContact * _m_contactInviteMe; // +0x200
    NSDictionary * _m_videoMemberInfo; // +0x208
    NSArray * _m_memberTalkArray; // +0x210
    NSDictionary * _m_memberTalkingDic; // +0x218
    NSArray * _m_memberWaitList; // +0x220
    NSArray * _m_memberDisplayBigHeadList; // +0x228
    NSArray * _m_contactWaitList; // +0x230
    NSArray * _m_contactArrayOther; // +0x238
    MMTimer * _m_timeOutTimer; // +0x240
    MMTimer * _m_onePersonCheckFroMinimizeTimer; // +0x248
    id _m_selfMember; // +0x250
    WCUIAlertView * _currentAlertView; // +0x258
    unsigned long long _m_connect_startTime; // +0x260
    MinimizeNewTransitionController * _transitionController; // +0x268
    UIImageView * _m_snapshotBlurView; // +0x270
    CContact * _m_roomContact; // +0x278
    AVRoutePickerView * _avRouteView; // +0x280
    NSString * _prevPortType; // +0x288
}
- (BOOL)isVideoSteamingWithUserName:(id)arg1;
- (void)hangupManually;
- (void)updateProximityBySpeakerButtonState;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)dealloc;
- (void)whenGoingToResign;
- (void)callReport;
- (void)connectReportSuccess;
- (void)connectReportFailed;
- (void)durationReport;
- (void)videoDurationReport;
- (void)functionReport;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidTransitionToNewSize;
- (void)viewDidAppear:(BOOL)arg1;
- (void)layoutSubviewsManually;
- (void)viewDidLayoutSubviews;
- (void)changeViewInLayoutType;
- (void)resetExpandViewElement:(BOOL)arg1;
- (void)layMinCardModeView;
- (void)resetMinCardModeBackgroundViewInfo;
- (CGRect)getMinCardSize;
- (void)resetMinCardRound:(id)arg1;
- (void)layMinCardModeBackgroundViewBlurView;
- (void)layMinCardModeBackgroundView;
- (void)layoutMinCardHeadImageView;
- (void)layoutMinCardButton;
- (void)layoutMinUsernameLabel;
- (void)layoutMinCardDescriptionLabel;
- (void)layoutMinCardBlurView;
- (void)layMinCardModeBackgroundViewMaskView;
- (void)layoutMinCardmMemberDisplayBigHeadView;
- (void)resetMinCardmMemberDisplayBigHeadView;
- (void)updateMinCardmMemberDisplayBigHeadView;
- (void)layoutMinCardExpandVideoVipViewButton;
- (void)updateAccessibility;
- (void)onMinCardExpandVideoVipViewButton;
- (void)expandVideoVipView;
- (id)getMinCardContentView;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)scrollClickClose;
- (void)onMinCardHangup;
- (void)onMinCardAcceptCall;
- (void)onMinCardMinimize;
- (void)restoreMinCardStatusBarColor;
- (id)groupInfo;
- (void)updateMessageId:(unsigned int)arg1;
- (void)updateGroupInfo:(id)arg1;
- (BOOL)isTheSameWithGroup:(id)arg1;
- (BOOL)isMemberReachLimit;
- (void)checkIfOnePerson;
- (void)updateMemberTalkingList;
- (void)updateContactOtherList;
- (void)updateContactWaitList;
- (void)updateMemberWaitList;
- (void)updateMemberDisplayBigHeadList;
- (void)updateVideoMemberInfo;
- (void)initOnePersonCheck;
- (void)initTimeOutTimer;
- (void)timeOutLogic;
- (void)initUpdateMessageTimer;
- (void)updateMessageDuration;
- (void)initCheckTalkingTimer;
- (void)initCheckQualityTimer;
- (void)checkTalkMember;
- (void)getMemberQualityInfoList;
- (void)initBackgroundView;
- (void)updateBackgroundViewBlur;
- (void)initContactView;
- (void)initBottomOperatePanel;
- (void)initSecondTalkingView;
- (void)initBeforeTalkingView;
- (void)onClickAddMemberButton;
- (void)hangupMultiTalkByCallEnd;
- (BOOL)isUsingEarDevice;
- (BOOL)isIgnoreSpeakerButtonDevice;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1 withAnimation:(long long)arg2;
- (void)changeToReceiveACallLayout;
- (void)changeToJoinACallLayout;
- (void)changeToTalkingLayout;
- (void)onInviteMultiTalk:(id)arg1;
- (void)onCreateMultiTalk:(id)arg1;
- (void)onCancelCreateMultiTalk:(id)arg1;
- (void)doCancelCreateMultiTalk:(id)arg1;
- (void)onEnterMultiTalk:(id)arg1;
- (void)onInviteOrAcceptTimeout:(id)arg1;
- (void)onReceiveMissMultiTalk:(id)arg1;
- (void)onMemberChange:(id)arg1;
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
- (void)onMultiTalkMgrChangeToLowNetwork;
- (void)onMultiTalkRedirectOk;
- (void)onOtherDeviceHandleTalk:(id)arg1;
- (void)resubscribeLargeVideo;
- (void)changeVideoModeBaseOnNetwork;
- (void)closeVideoSendAndRecv;
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
- (void)onMultiSelectContactsDidFinishSelect:(id)arg1;
- (void)onSingleSelectContactDidFinishSelect:(id)arg1;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(BOOL)arg2 clickCount:(unsigned int)arg3;
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
- (id)onMultiTalkMembersViewMemberBeforeTalkingAtIndex:(unsigned long long)arg1;
- (unsigned long long)onMultiTalkMembersViewMemberCountBeforeTalking;
- (id)onMultiTalkMembersViewMemberThatInviteMeBeforeTalking;
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
- (void)onMultiTalkBeforeTalkingOperateViewEnterCall;
- (void)onMultiTalkBeforeTalkingOperateViewMinimize;
- (void)onMultiTalkBeforeTalkingOperateViewMinimizeWithNotAnimation;
- (unsigned long long)getBeforeTalkingOtherMemberCount;
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
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
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
- (unsigned long long)getMembersInRoomNum;
- (id)getMembersInRoom;
- (void)addMembersToIlinkChatRoomGroup:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)multiTalkScreenSharingAudienceViewControllerDidClose:(id)arg1;
- (void)multiTalkScreenSharingAudienceViewController:(id)arg1 didTapToChangeOperationViewsAppearance:(BOOL)arg2;
- (id)m_minCardModeBackgroundView;
- (void)setM_minCardModeBackgroundView:(id)arg1;
- (id)m_minCardModeBackgroundViewBlurView;
- (void)setM_minCardModeBackgroundViewBlurView:(id)arg1;
- (id)m_minCardModeBackgroundViewMaskView;
- (void)setM_minCardModeBackgroundViewMaskView:(id)arg1;
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
- (id)m_updateMessageTimer;
- (void)setM_updateMessageTimer:(id)arg1;
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
- (id)m_contactInviteMe;
- (void)setM_contactInviteMe:(id)arg1;
- (unsigned int)m_messageId;
- (void)setM_messageId:(unsigned int)arg1;
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
- (BOOL)isInviterQuitEarly;
- (void)setIsInviterQuitEarly:(BOOL)arg1;
- (BOOL)isViewAppeared;
- (void)setIsViewAppeared:(BOOL)arg1;
- (id)avRouteView;
- (void)setAvRouteView:(id)arg1;
- (id)prevPortType;
- (void)setPrevPortType:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

