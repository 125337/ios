@interface MMLiveViewController : MMUIViewController <TRTCCloudDelegate, MMFinderLiveNewStartViewControllerDelegate, MMFinderLiveSquareChatStartViewControllerDelegate, MMLiveCommentViewDelegate, MMAcceptAgreementResultViewControllerDelegate, MMTipsViewControllerDelegate, WAAppTaskMgrExt, MMLiveOperationViewDelegate, MMLiveCompleteViewControllerDelegate, MMLiveStarterViewControllerDelegate, MMLiveLogicDelegate, MMLiveTaskMgrExt, WCActionSheetDelegate, MMLiveContainerLogicControllerDelegate, INetworkStatusMgrExt, MMFinderLivePIPMinimizeLogicControllerDelegate>
{
    BOOL _isForcePortraitForExtend; // +0x70
    BOOL _isPresentingWithCustomTransition; // +0x71
    BOOL _liveDidFinished; // +0x72
    BOOL _isEmbededInLiveFeed; // +0x73
    BOOL _isEmbededInLiveFeedByReusing; // +0x74
    BOOL _isExitingEmbededLiveFromCloseUI; // +0x75
    BOOL _isClosing; // +0x76
    BOOL _waitingJoinLive; // +0x77
    BOOL _postponeJoinLive; // +0x78
    BOOL _supressMinimizeWindowAutoupdate; // +0x79
    BOOL _isAppTaskLaunchingDuringLive; // +0x7a
    BOOL _isInBackground; // +0x7b
    BOOL _isRealInBackground; // +0x7c
    BOOL _isInSysInterruptionHandling; // +0x7d
    BOOL _isPausedByAnchor; // +0x7e
    BOOL _isPausedByVerify; // +0x7f
    BOOL _anchorJoinLiveAfterAbnormalExit; // +0x80
    BOOL _isAbnormallyDismissed; // +0x81
    BOOL _liveDidStarted; // +0x82
    BOOL _isLiveAppearing; // +0x83
    id <MMLiveViewControllerDelegate> _delegate; // +0x88
    MMLiveView * _liveView; // +0x90
    MMLiveTaskId * _liveTaskId; // +0x98
    MMLiveLogic * _liveLogic; // +0xa0
    UIViewController<MMLiveCompleteViewControllerInterface> * _completeViewController; // +0xa8
    UIImageView * _blurView; // +0xb0
    MMLiveStarterViewController * _starterViewController; // +0xb8
    MMFinderLiveNewStartViewController * _startNewViewController; // +0xc0
    MMFinderLiveSquareChatStartViewController * _squareChatStartViewController; // +0xc8
    MMFinderCameraCastingStarterViewController * _cameraCastingViewController; // +0xd0
    UINavigationController * _navControl; // +0xd8
    UIView * _feedLiveRoomParentView; // +0xe0
    id /* block */ _closeLiveBlock; // +0xe8
    NSString * _lastNetworkType; // +0xf0
    id /* block */ _forbidLiveActionCallback; // +0xf8
    NSMutableDictionary * _completeExtraInfo; // +0x100
    unsigned long long _currSupportedInterfaceOrientations; // +0x108
    NSMutableDictionary * _downlevelCustomTraitsImpl; // +0x110
    MMLiveOperationView * _operationView; // +0x118
    long long _currOrientation; // +0x120
    unsigned long long _currentPauseViewTypes; // +0x128
}
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)initWithLiveTaskId:(id)arg1;
- (id)initWithLiveTaskIdDirectly:(id)arg1;
- (void)dealloc;
- (BOOL)shouldWrapViewWithSafeArea;
- (BOOL)isJoinLiveAfterAbnormalExit;
- (BOOL)shouldSupportLandScape;
- (void)initAbnormalState;
- (void)initData;
- (void)initLiveLogic;
- (void)initReporter;
- (void)initNotifications;
- (void)viewDidLoad;
- (void)startHandleForLiveRoomDidLoad;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)liveViewWillBeAbnormallyDismissed;
- (void)forceLayoutForOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)providedInterfaceOrientationMaskInIphone;
- (unsigned long long)inner_supportedInterfaceOrientations;
- (unsigned long long)currentOrientationMask;
- (BOOL)shouldInteractivePop;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (void)exitAndClearLive;
- (void)markReleaseUIAndLogic;
- (BOOL)disableLoadViews;
- (void)updateCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (void)changeCurrOrientation:(long long)arg1;
- (void)closeDirectly;
- (void)closeDirectlyWithCompletion:(id /* block */)arg1;
- (void)stopLive;
- (void)anchorAssistantClose;
- (void)close;
- (void)closeByCutLive;
- (void)closeWithoutNavigation;
- (void)closeWithError:(id)arg1 needNotify:(BOOL)arg2;
- (void)gotoCompletePageOverride;
- (void)gotoCompletePage;
- (id)createCompleteViewController;
- (void)showCompleteViewController:(id)arg1;
- (id)navigationController;
- (id)realNavigationController;
- (void)persistMorphDismissTarget;
- (void)setupMorphDismiss:(BOOL)arg1;
- (unsigned long long)systemCapabilityAuthScene;
- (void)updateLiveProgress;
- (void)onLiveAppearingChanged;
- (id)operationView;
- (id)connectMicLogic;
- (unsigned long long)liveId;
- (long long)roleType;
- (id)liveTask;
- (BOOL)hasInvokeStartLive;
- (id)pivotViewController;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)initUI;
- (void)initOperationViewHideStatus;
- (void)initControllerViewSettings;
- (void)showLiveStarterViewController;
- (void)showCameraCastingViewController;
- (void)layoutUI;
- (void)layoutLiveView;
- (void)layoutBlurView;
- (void)layoutOperationView;
- (id)createOperationView;
- (id)displayContentView;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (void)showView;
- (void)hideView;
- (BOOL)shouldSupportInteractiveTransition;
- (BOOL)shouldInvokeInteractiveTransition;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)arg1;
- (BOOL)isPIPHandlerCreated;
- (void)onInteractiveTransitionToMinimizationDidBegin;
- (BOOL)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (BOOL)shouldSupportSpecialLiveAnimatorGestureRecognizer:(id)arg1;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)rotateToOrientation:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (BOOL)isAnchorPreviewRotateTransiting;
- (id)pipMinimizeContentView;
- (void)notifyShowContentView;
- (void)notifyHideContentView;
- (BOOL)isCurrHasPIPAudioModuleAuthority;
- (long long)getCurrentOrientation;
- (void)createLive:(id)arg1;
- (void)joinLive:(unsigned long long)arg1;
- (void)gotoUserProfile:(id)arg1 isAnchorHeadImage:(BOOL)arg2;
- (void)minimizeLive:(id /* block */)arg1;
- (void)displayContent;
- (void)unDisplayContent;
- (unsigned long long)getCurrentSupportedInterfaceOrientations;
- (BOOL)forbidHiddenNavigationBarWillAppear;
- (unsigned long long)displayingPauseViewType;
- (void)addCurrentPauseViewTypes:(unsigned long long)arg1;
- (void)removeCurrentPauseViewTypes:(unsigned long long)arg1;
- (void)showPauseViewWithType:(unsigned long long)arg1;
- (void)hidePauseViewWithType:(unsigned long long)arg1;
- (id)pauseMessageForType:(unsigned long long)arg1;
- (void)doShowPauseViewWithType:(unsigned long long)arg1;
- (void)doHidePauseView;
- (id)getLiveCloseDestructiveTitle;
- (void)closeRoomAction;
- (void)onCreateLive:(id)arg1;
- (void)onJoinLive:(id)arg1;
- (void)onShareLive:(id)arg1;
- (void)onLiveClosed:(id)arg1;
- (void)onGetLiveInfo;
- (void)onGetAnchorStatus;
- (id)getLiveOperationView;
- (id)getLiveViewControllerForLiveLogic;
- (BOOL)checkTask:(id)arg1;
- (void)onLiveTask:(id)arg1 enterLiveRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 exitLiveRoom:(long long)arg2 error:(id)arg3;
- (void)onLiveTask:(id)arg1 liveSdkInfoWillExpire:(id)arg2;
- (void)onLiveTask:(id)arg1 switchRoleType:(int)arg2 errMsg:(id)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 audioAvailable:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 user:(id)arg2 videoAvailable:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 networkLocalQuality:(id)arg2 remoteQuality:(id)arg3;
- (void)onLiveTask:(id)arg1 netStatus:(id)arg2;
- (void)onLiveTask:(id)arg1 cdnPlayEventId:(int)arg2 params:(id)arg3;
- (void)onLiveTaskFirstShowCdnPlayerView:(id)arg1;
- (void)onLiveTask:(id)arg1 cdnPlayRemoteVideoSizeChanged:(CGSize)arg2;
- (void)onLiveTask:(id)arg1 remoteUserEnterRoom:(id)arg2;
- (void)onLiveTask:(id)arg1 remoteUserLeaveRoom:(id)arg2 reason:(long long)arg3;
- (void)onLiveTask:(id)arg1 connectOtherRoomResult:(BOOL)arg2 userId:(id)arg3 errCode:(int)arg4 errMsg:(id)arg5;
- (void)onLiveTask:(id)arg1 sysCallInterrupted:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 SEIConnectMicUserInfoListUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 SEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3 showMicTopic:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 userVoiceVolume:(id)arg2 totalVolume:(long long)arg3 isSelfAnchorUserTalking:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 localAudioModeStateChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioRoomSceneChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audioRoomSEIMicMsgInfoUpdated:(id)arg2 listChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 liveStreamServerTimeUpdated:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 flvNetworkQualityUpdated:(long long)arg2 hasChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 anchorIsTalking:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 otherConnectMicAnchor:(id)arg2 anchorSeiStatus:(unsigned int)arg3 anchorSEIInfo:(id)arg4;
- (void)onLiveTask:(id)arg1 micMutedDidChange:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 didChangeViewCapturing:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 playingViaCdnChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isAssistantValueChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isSyndicateParticipantValueChanged:(BOOL)arg2;
- (void)onLiveTaskSendFirstLocalAudioFrame:(id)arg1;
- (void)onLiveTask:(id)arg1 cameraCastConnectionChanged:(BOOL)arg2;
- (void)onMMLiveStarterViewControllerCreateLive:(id)arg1;
- (void)onMMLiveStarterViewControllerStartLive;
- (void)onMMLiveStarterViewControllerClose;
- (void)onMMLiveStarterViewControllerUserCancelLive;
- (void)onLiveNewStartViewControllerCreateLive:(id)arg1;
- (void)onLiveNewStartViewControllerStartLive;
- (void)onLiveNewStartViewControllerClose;
- (void)onLiveNewStartViewControllerUserCancelLive;
- (void)onLiveSquareChatStartViewControllerUserCancelLive;
- (void)onLiveSquareChatStartViewControllerCreateLive:(id)arg1;
- (void)onLiveSquareChatStartViewControllerStartLive;
- (void)onLiveSquareChatStartViewControllerClose;
- (void)onMMLiveOperationClose;
- (void)invokeCloseLive;
- (void)onMMLiveOperationConnectMic;
- (void)onMMLiveOperationShareScreen;
- (BOOL)onMMLiveOperationIsShareScreenBlocked;
- (double)getControllerVisibleHeight;
- (void)onMMLiveOperationUserHeadImageClicked:(id)arg1 userInfo:(id)arg2;
- (void)onMMLiveOperationInviteFriendsBtnClicked;
- (void)onMMLiveOperationSwitchAudioRoomMode;
- (void)onMMLiveOperationKTVSongButtonClicked;
- (void)onMMLiveCompleteViewControllerClose;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onLiveTaskMinimizedWindowDismiss:(id)arg1;
- (void)showToastWithTitle:(id)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)showForbidLiveViewWithTitleLabel:(id)arg1 withDescLabel:(id)arg2 andActionCallback:(id /* block */)arg3;
- (void)showForbidLiveViewWithTitleLabel:(id)arg1 withDescLabel:(id)arg2 hasLinkLabel:(BOOL)arg3 andActionCallback:(id /* block */)arg4;
- (void)stopStarterViewTimer;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAnchorAssistantLiveCloseTip;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)isNeedTipOnMobilePhoneTraffic;
- (void)showTipWhenChangeNetToSimCard4G:(id)arg1;
- (void)onBecomeActive;
- (void)onResignActive;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onMMLiveFullScreenTipsViewClose;
- (void)onAppTaskWillRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)onAppTaskDidRestoreIntermediatePageWhenLaunchWithAppId:(id)arg1;
- (void)handleForBeginSysInterruption;
- (void)handleForEndSysInterruption;
- (BOOL)shouldForcePortrait;
- (void)onCurrAnchorMainShouldSupportOrientationMaskChanged:(unsigned long long)arg1;
- (void)onMakeLiveViewControllerVisible;
- (void)updateCameraCastLiveRoom;
- (id)downlevelCustomTraits;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)liveLogic;
- (void)setLiveLogic:(id)arg1;
- (id)completeViewController;
- (void)setCompleteViewController:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)isForcePortraitForExtend;
- (void)setIsForcePortraitForExtend:(BOOL)arg1;
- (BOOL)isPresentingWithCustomTransition;
- (void)setIsPresentingWithCustomTransition:(BOOL)arg1;
- (id)starterViewController;
- (void)setStarterViewController:(id)arg1;
- (id)startNewViewController;
- (void)setStartNewViewController:(id)arg1;
- (id)squareChatStartViewController;
- (void)setSquareChatStartViewController:(id)arg1;
- (id)cameraCastingViewController;
- (void)setCameraCastingViewController:(id)arg1;
- (id)navControl;
- (void)setNavControl:(id)arg1;
- (BOOL)liveDidFinished;
- (void)setLiveDidFinished:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeedByReusing;
- (void)setIsEmbededInLiveFeedByReusing:(BOOL)arg1;
- (BOOL)isExitingEmbededLiveFromCloseUI;
- (void)setIsExitingEmbededLiveFromCloseUI:(BOOL)arg1;
- (id)feedLiveRoomParentView;
- (void)setFeedLiveRoomParentView:(id)arg1;
- (id /* block */)closeLiveBlock;
- (void)setCloseLiveBlock:(id /* block */)arg1;
- (BOOL)isClosing;
- (void)setIsClosing:(BOOL)arg1;
- (BOOL)waitingJoinLive;
- (void)setWaitingJoinLive:(BOOL)arg1;
- (id)lastNetworkType;
- (void)setLastNetworkType:(id)arg1;
- (id /* block */)forbidLiveActionCallback;
- (void)setForbidLiveActionCallback:(id /* block */)arg1;
- (id)completeExtraInfo;
- (void)setCompleteExtraInfo:(id)arg1;
- (BOOL)postponeJoinLive;
- (void)setPostponeJoinLive:(BOOL)arg1;
- (BOOL)supressMinimizeWindowAutoupdate;
- (void)setSupressMinimizeWindowAutoupdate:(BOOL)arg1;
- (BOOL)isAppTaskLaunchingDuringLive;
- (void)setIsAppTaskLaunchingDuringLive:(BOOL)arg1;
- (unsigned long long)currSupportedInterfaceOrientations;
- (void)setCurrSupportedInterfaceOrientations:(unsigned long long)arg1;
- (id)downlevelCustomTraitsImpl;
- (void)setDownlevelCustomTraitsImpl:(id)arg1;
- (void)setOperationView:(id)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)isRealInBackground;
- (void)setIsRealInBackground:(BOOL)arg1;
- (BOOL)isInSysInterruptionHandling;
- (void)setIsInSysInterruptionHandling:(BOOL)arg1;
- (BOOL)isPausedByAnchor;
- (void)setIsPausedByAnchor:(BOOL)arg1;
- (BOOL)isPausedByVerify;
- (void)setIsPausedByVerify:(BOOL)arg1;
- (BOOL)anchorJoinLiveAfterAbnormalExit;
- (void)setAnchorJoinLiveAfterAbnormalExit:(BOOL)arg1;
- (BOOL)isAbnormallyDismissed;
- (void)setIsAbnormallyDismissed:(BOOL)arg1;
- (BOOL)liveDidStarted;
- (void)setLiveDidStarted:(BOOL)arg1;
- (BOOL)isLiveAppearing;
- (void)setIsLiveAppearing:(BOOL)arg1;
- (unsigned long long)currentPauseViewTypes;
- (void).cxx_destruct;
@end
