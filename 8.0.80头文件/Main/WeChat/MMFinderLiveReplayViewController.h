@interface MMFinderLiveReplayViewController : MMCPUIViewController <MMLiveContainerLogicControllerDelegate, MMFinderLiveReplayOperationViewDelegate, MMLiveTaskMgrExt, MMFinderLiveReplayLogicDelegate, MMLiveFullScreenTipsViewDelegate, MMFinderLiveReplayViewDelegate>
{
    BOOL _isForcePortraitForExtend; // +0x70
    BOOL _isEmbededInLiveFeed; // +0x71
    BOOL _isEmbededInLiveFeedByReusing; // +0x72
    BOOL _isResignActive; // +0x73
    MMFinderLiveReplayTaskId * _replayTaskId; // +0x78
    MMFinderLiveReplayView * _replayView; // +0x80
    id <MMLiveViewControllerDelegate> _delegate; // +0x88
    UINavigationController * _navControl; // +0x90
    UIImageView * _blurView; // +0x98
    MMLiveFullScreenTipsView * _privateJoinBlockView; // +0xa0
    long long _currOrientation; // +0xa8
    MMFinderLiveReplayOperationView * _operationView; // +0xb0
    NSString * _lastFromVC; // +0xb8
    MMFinderLiveReplayLogic * _replayLogic; // +0xc0
}
- (void)registerExtensionInReplayTaskPart;
- (void)unRegisterExtensionInReplayTaskPart;
- (void)onLiveTaskPauseLiveForAudience:(id)arg1;
- (void)onLiveTaskResumeLiveForAudience:(id)arg1;
- (void)onLiveTaskMuteLiveForAudience:(id)arg1;
- (void)onLiveTaskUnMuteLiveForAudience:(id)arg1;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeWindowAttachLiveView:(id)arg1;
- (void)onMinimizeWindowDismissLiveView:(id)arg1;
- (void)onExtendAnimationDidEndWithLiveTask:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)checkNeedAutoStartPictureInPicture;
- (void)changeStartPIPAutomaticallyInBackgroundSwitch:(BOOL)arg1;
- (void)startPictureInPicture;
- (void)configPIPHandleLogic;
- (void)stopPictureInPicture;
- (void)checkPictureInPictureAbility;
- (id)getPIPHandleLogic;
- (id)getCurrentPIPHandleLogic;
- (void)registerExtensionInReplayContainerLogicPart;
- (void)unRegisterExtensionInReplayContainerLogicPart;
- (id)displayContentView;
- (id)liveTaskId;
- (id)minimizeSrcView;
- (CGRect)getMinimizeSrcFrameForBusiness:(long long)arg1;
- (void)showView;
- (void)hideView;
- (BOOL)shouldSupportInteractiveTransition;
- (BOOL)shouldInvokeInteractiveTransition;
- (BOOL)shouldSupportLiveSwitchingWithGestureRecognizer:(id)arg1;
- (BOOL)shouldShowCloseButtonWhenMinimized;
- (void)rotateToOrientation:(long long)arg1;
- (void)onWillTransitionToMinimize;
- (void)onEndTransitionWithPreState:(long long)arg1;
- (void)onLiveMinimizeWindowDidShiftIntoListChanged:(BOOL)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)recordVCTrace:(id)arg1;
- (void)embedSubviewFromChildViewController:(id)arg1;
- (void)unembedChildViewController:(id)arg1;
- (void)startReplay;
- (void)stopReplay;
- (void)muteReplay;
- (void)unMuteReplay;
- (id)navigationController;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initNotifications;
- (void)closeDirectlyWithCompletion:(id /* block */)arg1;
- (void)closeWithoutNavigation;
- (long long)getCurrentOrientation;
- (void)enterLive;
- (BOOL)checkReplayBlock;
- (void)showPrivateJoinBlockView;
- (void)showReplayDeleteBlockView;
- (void)onMMLiveFullScreenTipsViewClose;
- (void)displayContent;
- (void)unDisplayContent;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldInteractivePop;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)layoutUI;
- (void)layoutOperationView;
- (void)createReplayOperationView;
- (void)updateReplayOperationViewFrame;
- (void)layoutReplayView;
- (void)layoutBlurView;
- (void)initData;
- (void)initReplayLogic;
- (void)exitAndClearLive;
- (void)onMMLiveFullScreenTaped;
- (void)onMMLiveReplayVideoSizeChange:(CGSize)arg1;
- (void)onGetLiveInfo;
- (void)handleGetLiveInfoDone;
- (void)onWillMinimizeByInteractivePan;
- (void)onPauseReplay;
- (void)onGetDetailDataItem;
- (void)onGetReplayPreviewThumbList:(id)arg1;
- (void)onGetReplayPreviewLowBitrateUrl:(id)arg1 resolutionChanged:(BOOL)arg2;
- (void)onReplayLiveInfoUpdate;
- (void)onGetReplayPreviewResolutionInfo:(id)arg1;
- (void)onConnectMicStateUpdated:(id)arg1 connectMicStateValid:(BOOL)arg2 anchorInAudioMode:(BOOL)arg3 isScreenSharing:(BOOL)arg4;
- (void)onBecomeActive;
- (void)onResignActive;
- (void)close;
- (void)shareToFriend;
- (void)shareToMoment;
- (void)minimizeLive:(id /* block */)arg1;
- (id)contentVM;
- (id)replayLiveTask;
- (unsigned int)initialPlayTime;
- (void)didFinderLiveMoveToNewScene:(id)arg1;
- (id)replayTaskId;
- (void)setReplayTaskId:(id)arg1;
- (id)replayView;
- (void)setReplayView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)navControl;
- (void)setNavControl:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (BOOL)isForcePortraitForExtend;
- (void)setIsForcePortraitForExtend:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeed;
- (void)setIsEmbededInLiveFeed:(BOOL)arg1;
- (BOOL)isEmbededInLiveFeedByReusing;
- (void)setIsEmbededInLiveFeedByReusing:(BOOL)arg1;
- (id)privateJoinBlockView;
- (void)setPrivateJoinBlockView:(id)arg1;
- (long long)currOrientation;
- (void)setCurrOrientation:(long long)arg1;
- (id)operationView;
- (void)setOperationView:(id)arg1;
- (id)lastFromVC;
- (void)setLastFromVC:(id)arg1;
- (id)replayLogic;
- (void)setReplayLogic:(id)arg1;
- (BOOL)isResignActive;
- (void)setIsResignActive:(BOOL)arg1;
- (void).cxx_destruct;
@end
