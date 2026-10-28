@interface MMLiveContainerLogic : NSObject <UIViewControllerTransitioningDelegate, MMLiveCustomTransitionDelegate, MMLiveMinimizeWindowDelegate, IMinimizeTaskDelegateInterface, MMLiveMinimizationInteractiveDelegate, MMLiveViewExt, MMLiveTaskMgrExt, MMFinderLiveWinterOlympicViewExt, MiniAudioTaskContentViewDelegate, MMFinderLiveEnterAndExitSqaureTransitionControllerDelegatge, MMFinderLiveMinimizeWindowReporterDelegate, UINavigationControllerDelegate, MMLiveMorphInteractiveDismissTransitionControllerDelegate>
{
    BOOL _hasStartQuitAnimation; // +0x8
    BOOL _supportEdgePanGesture; // +0x9
    BOOL _showNetworkFailIndicatorView; // +0xa
    BOOL _isMinimizeModeInPIP; // +0xb
    BOOL _isShowHomePageBottomPlayerLiveView; // +0xc
    BOOL _isEnterSquareTransitionSpecialState; // +0xd
    BOOL _isInHomepagePopTransition; // +0xe
    BOOL _isCollapsing; // +0xf
    BOOL _isExtending; // +0x10
    BOOL _isFinishExtendFromCollapse; // +0x11
    BOOL _isFinishRotateForExtend; // +0x12
    BOOL _useCommonMinimizeWindow; // +0x13
    BOOL _useVideoContentMinimizeStyle; // +0x14
    BOOL _isMinimizeMode; // +0x15
    BOOL _isShowBottomPlayer; // +0x16
    BOOL _isBoundEnterSqaureGesture; // +0x17
    BOOL _isBoundExitSqaureGesture; // +0x18
    BOOL _enterHomepageTransitionAnimated; // +0x19
    BOOL _isTransferingToPrimitive; // +0x1a
    BOOL _hasShiftIntoList; // +0x1b
    BOOL _useCustomSize; // +0x1c
    id <MMLiveContainerLogicDelegate> _liveContainerDelegate; // +0x20
    long long _currTransitionState; // +0x28
    UINavigationController * _navigationController; // +0x30
    UIViewController<MMLiveContainerLogicTargetViewControllerDelegate> * _targetViewController; // +0x38
    UIImage * _snapShotImage; // +0x40
    MMUIViewController<MMLiveContainerLogicControllerDelegate> * _logicControllerDelegate; // +0x48
    MMLiveMinimizeWindow * _minimizeWindow; // +0x50
    TransitionStateInfo * _currTransitionStateInfo; // +0x58
    TransitionStateInfo * _nextTransitionStateInfo; // +0x60
    NSArray * _iphoneExtendIgnoreVCArray; // +0x68
    NSArray * _ipadExtendIgnoreVCArray; // +0x70
    MinimizeTaskData * _minimizeTaskData; // +0x78
    unsigned long long _lastMinimizeModeOpenType; // +0x80
    MMLiveMinimizationInteractiveLogic * _minizationInteractiveLogic; // +0x88
    MMLiveMorphInteractiveDismissTransitionController * _morphInteractiveDismissController; // +0x90
    MMUIButton * _closeButton; // +0x98
    MiniAudioTaskContentView * _minimizeContainerRootView; // +0xa0
    MMMinimizeLiveContainerView * _minimizeLiveContainerView; // +0xa8
    MMUIButton * _localAudioModeBtn; // +0xb0
    unsigned long long _indicatorState; // +0xb8
    MMFinderLiveMinimizeWindowReporter * _audienceMinimizeReporter; // +0xc0
    MMFinderLiveEnterSqaureTransitionController * _enterSqaureTrasitionController; // +0xc8
    MMFinderLiveExitSqaureTransitionController * _exitSqaureTrasitionController; // +0xd0
    UIImageView * _bottomPlayerLiveViewSnapshot; // +0xd8
    MMFinderLiveEnterSqaureTransitionContext * _context; // +0xe0
    CGSize _customSize; // +0xe8
    CGSize _originalScaleSize; // +0xf8
    CGRect _minimizeFrame; // +0x108
    CGRect _minimizeFromRect; // +0x128
}
+ (id)getPresentingVC;
+ (id)getPresentingVCInMainScene:(BOOL)arg1;
+ (BOOL)checkIsEnableToPresentInMainScene:(BOOL)arg1 scene:(unsigned long long)arg2 liveId:(unsigned long long)arg3;
+ (unsigned long long)isPresentingControllerEnableToPresent:(id)arg1;
+ (CGRect)calculateMinimizeLiveFrameInScreenWithMinimizeFrame:(CGRect)arg1 contentFrame:(CGRect)arg2;
+ (CGSize)getLiveMinimizeSizeWithOriginalSize:(CGSize)arg1;
+ (CGSize)getLiveMinimizeSizeWithStyle:(long long)arg1;
- (id)initWithLogicControllerDelegate:(id)arg1 useCommonMinimizeWindow:(BOOL)arg2 useVideoContentMinimizeStyle:(BOOL)arg3;
- (void)dealloc;
- (void)registerExtension;
- (void)initNotifications;
- (void)createReporter;
- (void)updateMinimizeWindowWithLiveView:(id)arg1;
- (BOOL)isCurrentTransitionStateValid;
- (BOOL)isIndicatorEnd;
- (void)endTransition;
- (void)clearStates;
- (void)setCurrTransitionState:(long long)arg1;
- (void)changeLogicControllerDelegate:(id)arg1;
- (BOOL)presentViewControllerAnimated:(BOOL)arg1;
- (BOOL)morphPresentWithAnimation;
- (BOOL)extendWithAnimation;
- (BOOL)fadeInWithAnimation;
- (BOOL)presentAnimated:(BOOL)arg1 animationType:(long long)arg2;
- (void)restartLiveWithController:(id)arg1 navigation:(id)arg2;
- (void)collapseWithAnimation:(id /* block */)arg1;
- (void)collapseAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)ensureEndCollapseTransitionAfterDelay;
- (BOOL)checkNeedInvokeCollapse;
- (BOOL)checkNeedInvokeCollapseAfterAnchorPreviewRotateEnd;
- (BOOL)inner_checkNeedInvokeCollapse;
- (void)invokeCollapseWithAnimation;
- (void)showLiveInMinimizedWindow;
- (void)dismissLiveMinimizedWindow;
- (void)removeLiveMinimizeTask;
- (void)closeCurrentLiveAndRemoveMinimizeTaskWithCompletion:(id /* block */)arg1;
- (void)stopLiveAndRemoveMinimizeTask;
- (void)attachStopStateDisplayController:(id)arg1;
- (void)deleteViewController:(id)arg1;
- (BOOL)checkNeedPreRotateOrientation;
- (BOOL)isPreviousSupportLandscape;
- (void)extendFromCollapseWithAnimation;
- (void)extendFromCollapseAnimated:(BOOL)arg1;
- (void)extendFromCollapseAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)prepareExtendFromCollapseByMaximize;
- (void)prepareExtendFromCollapseByRotate;
- (BOOL)checkIsMaximizePrepareExtendFromCollapse;
- (BOOL)checkIsRotatePrepareExtendFromCollapse;
- (void)ensureEndExtendFromCollapseTransitionAfterDelay;
- (void)invokeExtendFromCollapse;
- (void)innerExtendFromCollapse;
- (void)primitiveExtendFromCollapse;
- (void)extendFromCollapseUsePIPAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)extendFromCollapseForPreviousPortraitAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)clearNavigationControllerToOnlyLive:(id)arg1;
- (void)restoreMinimizeWindowForExtendFail;
- (void)restoreOrientationForPortrait;
- (void)checkExtendFromCollapseFinish;
- (void)extendFromCollapseForPreviousLandscape:(id /* block */)arg1;
- (void)restoreOrientationForLandScape;
- (long long)getImageOrientation;
- (void)quitWithAnimation:(id /* block */)arg1;
- (void)quitWithoutAnimation:(id /* block */)arg1;
- (void)quitAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissTopControllerWithoutQuitingAnimated:(BOOL)arg1;
- (void)quitWithoutNavigation;
- (void)quitWithoutDismiss;
- (void)collapseWithAnimationDidStop;
- (void)quitWithAnimationDidStop;
- (void)minimizeInteractiveWillEnd;
- (void)preHandleForMinimizeInteractive;
- (void)minimizeInteractiveDidEnd;
- (void)restoreStatusBarColor;
- (void)changeStatusBarColor;
- (BOOL)checkIsEnableToPresentLiveViewControllerInMainScene:(BOOL)arg1 skippingPresentingVcCheck:(BOOL)arg2 scene:(unsigned long long)arg3;
- (BOOL)presentLiveViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)presentLiveViewControllerWithExistingNavigationAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)presentNavigationController:(id)arg1 animated:(BOOL)arg2 skipPresentingVcCheck:(BOOL)arg3 addEdgePanGesture:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)dismissControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)presentTargetViewControllerWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateIsShowHomePageBottomPlayerLiveView:(BOOL)arg1;
- (void)popHomepageWithAnimated:(BOOL)arg1;
- (void)pushHomePageWithTransition;
- (void)popHomepageWithTransition;
- (void)popHomepageWithTransitionWithCompletion:(id /* block */)arg1;
- (void)addScreenEdgePanGestureRecognizer:(id)arg1;
- (void)attachToLivePivotViewController:(id)arg1;
- (void)updateCurrentTransitionState:(long long)arg1;
- (void)showLiveViewControllerWithDismissWindow:(BOOL)arg1;
- (void)prepareDisposeMinimizeWindowByMaximize;
- (void)invokeDisposeMinimizeWindow;
- (void)ensureEndDisposeMinimizeWindowTransitionAfterDelay;
- (BOOL)checkIsMaximizePrepareDisposeMinimizeWindow;
- (void)restoreMinimizeWindowForDisposeFail;
- (id)getMinimizeTaskFloatingView;
- (id)getHandleCollectionViewGestureTarget;
- (SEL)getHandleCollectionViewGestureSel;
- (id)getHandlePopDownToTopGestureTarget;
- (SEL)getHandlePopDownToTopGestureSEL;
- (id)snapshotSmallLiveView:(id)arg1 frame:(CGRect)arg2;
- (void)bindEnterSqaureGesture:(id)arg1 isPop:(BOOL)arg2;
- (void)unboundEnterSqaureGesture:(id)arg1 isPop:(BOOL)arg2;
- (BOOL)isControllerDelegatePrimitive;
- (void)popHomepageIfNeed:(id /* block */)arg1;
- (id)liveTaskId;
- (BOOL)enableUsePIPMinimizeWindow;
- (BOOL)isShowMinimizeWindowInPIP;
- (BOOL)usePIPMinimizeWindow;
- (BOOL)useCustomPIP;
- (double)mostPIPDelayDuration;
- (BOOL)isLivePlaying;
- (id)minizationInteractiveLogic;
- (id)morphInteractiveDismissController;
- (id)edgeGestureRecognizer;
- (void)setupRequireFailureGestureForPivotCollection:(id)arg1;
- (id)minimizeLiveContainerView;
- (id)minimizeContainerRootView;
- (id)localAudioModeBtn;
- (void)onAudioModeButtonClicked;
- (void)changeCurrContentPlayType;
- (void)onCloseButtonClicked;
- (void)closeMinimizeWindow;
- (void)setIndicatorState:(unsigned long long)arg1;
- (void)setIndicatorStateFlag:(unsigned long long)arg1;
- (void)clearIndicatorStateFlag:(unsigned long long)arg1;
- (BOOL)isShowWindowOverLiveVC;
- (BOOL)enableUseMinimizeContainerRootView;
- (BOOL)isWaitingRotatePortraitToExtend;
- (BOOL)isExtendingFromCollapse;
- (BOOL)isCurrentShowPauseButton;
- (id)finderLiveTask;
- (id)enterSqaureTrasitionController;
- (id)exitSqaureTrasitionController;
- (id)getLiveContentSnapShotImageForBusiness:(long long)arg1;
- (BOOL)isActivateMinimizeAreaAfterMinimizationInteractive;
- (BOOL)isLastInteractiveWithFullScreen;
- (void)onMinimizationInteractiveDidBegin:(BOOL)arg1;
- (BOOL)minimizationInteractiveShouldBegin;
- (BOOL)minimizationInteractiveShouldInvoke;
- (void)onMinimizationInteractiveWillEnd:(BOOL)arg1;
- (void)onMinimizationInteractiveDidEnd:(BOOL)arg1;
- (void)onMinimizationInteractiveQuitDidEnd;
- (BOOL)isLiveSupportHorizontalFullScreenSlideToClose;
- (BOOL)isLiveSupportVerticalFullScreenSlideToClose;
- (id)prevailingGestureRecognizerBetweenGestureRecognizer:(id)arg1 andPanMinimizationGestureRecognizer:(id)arg2;
- (void)takeBottomPlayerLiveViewSnapshot;
- (void)updateEnterSqaureSpecialTransition:(BOOL)arg1;
- (void)onWillEnterSquareTransitionHandler:(BOOL)arg1;
- (void)notifyWillEnterSquareTransition:(BOOL)arg1;
- (id)reconstructForExitContext:(id)arg1;
- (id)reconstructForEnterContext:(id)arg1;
- (id)getSnapshotLiveViewVideoContainer;
- (void)onEnterSqaureTransitionControllerBegin:(id)arg1 isPop:(BOOL)arg2 isGesturePanEnter:(BOOL)arg3;
- (void)onEnterSqaureTransitionControllerEnd:(id)arg1 context:(id)arg2 isComplete:(BOOL)arg3 isInteracting:(BOOL)arg4 isPop:(BOOL)arg5;
- (BOOL)reAttachLiveViewToHomePageBottomPlayer;
- (void)attachLiveViewToHomePageBottomPlayerFromCurrentContext;
- (void)attachIndicatorViewToHomePageBottomPlayerCurrentContext;
- (void)attachLiveViewToHomePageBottomPlayer:(id)arg1;
- (void)attachIndicatorViewToHomePageBottomPlayer:(id)arg1;
- (BOOL)canEnterSquare;
- (CGRect)bottomPlayerViewSrcFrame;
- (id)getCurrPresentingViewController;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (long long)requestCurrentTransitionState;
- (CGRect)requestMinimizeFrame;
- (CGRect)requestMinimizeLiveFrameInScreen;
- (long long)requestPreviousOrientation;
- (id)requestSnapshotImage;
- (CGRect)requestMinimizeFromRect;
- (CGRect)requestMaximizeToRect;
- (id)getExtendTransitionContainerBackView;
- (id)getIgnoreExtendLiveSceneInfo:(id)arg1;
- (BOOL)isViewControllerMustIgnoreExtendLive:(id)arg1;
- (void)transferConfigScenes;
- (id)convertSceneInfo:(id)arg1;
- (CGRect)minimizeWindowFrame;
- (id)getContainerInfo:(BOOL)arg1;
- (id)getContainerInfo;
- (id)getMinimizeTaskDataForSizeChanged;
- (id)getMinimizeTaskData;
- (void)updateForbidReplaceTagForMinimizeTaskData:(id)arg1;
- (void)updateMinimizeLiveLocalAudioModeBtn;
- (void)updateLiveMinimizeContentPlayType:(long long)arg1;
- (void)updateMinimizeContainerRootViewButtonShowForAudience;
- (void)updateMinimizeContainerRootViewButtonEnableForAudience;
- (id)getMinimizeTaskKey;
- (void)updateMinimizeViewFromSize:(CGSize)arg1 toSize:(CGSize)arg2;
- (BOOL)canUseGlobalMinimization;
- (id)getCurrentMinimizeTaskFloatingView;
- (void)removeMinimizeTask;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onContainerSizeDidChange:(id)arg1 fromSize:(CGSize)arg2 toSize:(CGSize)arg3;
- (void)onOutContentTask:(id)arg1 replacedByAnotherTaskData:(id)arg2;
- (void)minimizeWindowWillHide:(BOOL)arg1;
- (void)onMMLiveMinimizeWindowClicked;
- (long long)onMMLiveMinimizeWindowRequestPreviousOrientation;
- (BOOL)isMinimizeTaskPlaying:(id)arg1;
- (void)displayIndicators;
- (void)hideIndicators;
- (void)displayCloseButton;
- (void)adjustCloseButtonFrame;
- (void)hideCloseButton;
- (void)updateMinimizeLiveContainerViewSize;
- (CGSize)getLiveMinimizeSize;
- (void)adjustBottomPlayerSubviewsSize:(id)arg1;
- (double)getLiveViewHeightPerWidthPercent;
- (CGSize)getMinimizeLiveViewSizeForBusiness:(long long)arg1;
- (void)attachLiveViewToMinimizeContainer;
- (BOOL)reAttachLiveViewToMinimizeContainer;
- (void)adjustMinimizeDisplayViewFrameForBusiness:(long long)arg1;
- (void)adjustMinimizeHomepageDisplayViewFrameInContext:(id)arg1;
- (void)adjustFrameForDisplayView:(id)arg1 withBusiness:(long long)arg2;
- (void)adjustMinimizeLiveContainerSize;
- (void)dismissLiveViewFromMinimizeContainer;
- (BOOL)isMinimizeTaskMgrContainerLive;
- (void)absorbToWindow;
- (void)foldToWindow;
- (void)showLiveView;
- (void)dismissLiveViewController;
- (void)dismissLiveViewControllerFromInteractiveQuit:(BOOL)arg1;
- (void)onLiveViewMainVideoViewFrameChanged:(id)arg1 newVideoViewFrame:(CGRect)arg2;
- (void)onLiveViewConnectMicViewFrameChanged:(id)arg1 newConnectMicViewFrame:(CGRect)arg2;
- (void)setMinimizeFrame:(CGRect)arg1;
- (void)onLiveViewControllerWillAppear:(id)arg1;
- (void)onLiveTask:(id)arg1 localAudioModeStateChangedTo:(unsigned long long)arg2;
- (void)onLiveTask:(id)arg1 audienceConnectingMicStatusChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 isAudienceLocalAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3;
- (void)onLiveTask:(id)arg1 isPureAudioModeChangedTo:(BOOL)arg2 isPureAudioDisplayModeValueChanged:(BOOL)arg3 showTip:(BOOL)arg4;
- (void)onLiveTask:(id)arg1 livePlayStatusForAudienceChanged:(long long)arg2;
- (void)onLiveTask:(id)arg1 livePausedForPaidLiveTrialTimeupChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 liveClosed:(BOOL)arg2;
- (void)onMMLiveWillStart;
- (void)onExtendFromCollapseAnimationWillStartWithLiveTask:(id)arg1;
- (void)onDismissMinimizeWindowDidEnd:(id)arg1;
- (void)onLiveReplayViewPlayerFrameChanged:(id)arg1 liveTaskId:(id)arg2 newPlayerFrame:(CGRect)arg3;
- (void)onOlympicLiveView:(id)arg1 liveTaskId:(id)arg2 showLiveStreamChange:(BOOL)arg3;
- (void)handleForMinimizeSrcViewFrameChanged;
- (void)handleForBottomPlayerSrcViewFrameChanged;
- (void)updateMinimizeUIForSrcViewFrameChanged;
- (void)updateHomepagePlayerViewForSrcViewFrameChanged;
- (void)reportForStartMinimizeWindowIfNeed;
- (void)reportForStartMinimizeWindowFrom:(unsigned long long)arg1;
- (void)reportForStopMinimizeWindow;
- (void)reportDismissLiveMinimizedWindowOverLiveVC;
- (void)clearMinimizeWindowLastReportDatas;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)onMiniAudioContentViewPlayTypeButtonClicked:(long long)arg1;
- (void)onMiniAudioContentSizeChangeTo:(CGSize)arg1 anime:(BOOL)arg2;
- (void)sizeRecoverToBase:(CGSize)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)changeLivePlayPauseStateByMinimizeWindow:(BOOL)arg1;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)attachTransitionTargetViewController:(id)arg1;
- (void)configEnterHomepageTransitionAnimated:(BOOL)arg1;
- (id)audienceLogReporter;
- (void)transferToPrimitiveIfNeed:(id /* block */)arg1;
- (void)updateHasShiftIntoList:(BOOL)arg1;
- (BOOL)primitiveOpenSwitch;
- (id)prevailingMorphInteractiveDismissTransitionGestureRecognizerBetweenGestureRecognizer:(id)arg1 andInteractivePanGestureRecognizer:(id)arg2;
- (void)onMorphInteractiveDismissTransitionStart:(unsigned long long)arg1;
- (void)onMorphInteractiveDismissTransitionEnd:(unsigned long long)arg1;
- (void)onMorphInteractiveDismissTransitionCancel:(unsigned long long)arg1;
- (BOOL)shouldBeginMorphInteractiveDismissTransitionFromTopToBottom;
- (BOOL)shouldBeginMorphInteractiveDismissTransitionFromBottomToTop;
- (BOOL)shouldBeginMorphInteractiveDismissTransitionFromLeftToRight;
- (BOOL)shouldBeginMorphInteractiveDismissTransitionFromEdge;
- (id)liveContainerDelegate;
- (void)setLiveContainerDelegate:(id)arg1;
- (BOOL)hasStartQuitAnimation;
- (void)setHasStartQuitAnimation:(BOOL)arg1;
- (long long)currTransitionState;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (BOOL)supportEdgePanGesture;
- (void)setSupportEdgePanGesture:(BOOL)arg1;
- (BOOL)showNetworkFailIndicatorView;
- (void)setShowNetworkFailIndicatorView:(BOOL)arg1;
- (BOOL)isMinimizeModeInPIP;
- (void)setIsMinimizeModeInPIP:(BOOL)arg1;
- (BOOL)isShowHomePageBottomPlayerLiveView;
- (void)setIsShowHomePageBottomPlayerLiveView:(BOOL)arg1;
- (id)targetViewController;
- (void)setTargetViewController:(id)arg1;
- (BOOL)isEnterSquareTransitionSpecialState;
- (void)setIsEnterSquareTransitionSpecialState:(BOOL)arg1;
- (BOOL)isInHomepagePopTransition;
- (void)setIsInHomepagePopTransition:(BOOL)arg1;
- (CGRect)minimizeFrame;
- (CGRect)minimizeFromRect;
- (void)setMinimizeFromRect:(CGRect)arg1;
- (id)snapShotImage;
- (void)setSnapShotImage:(id)arg1;
- (id)logicControllerDelegate;
- (void)setLogicControllerDelegate:(id)arg1;
- (id)minimizeWindow;
- (void)setMinimizeWindow:(id)arg1;
- (BOOL)isCollapsing;
- (void)setIsCollapsing:(BOOL)arg1;
- (BOOL)isExtending;
- (void)setIsExtending:(BOOL)arg1;
- (id)currTransitionStateInfo;
- (void)setCurrTransitionStateInfo:(id)arg1;
- (id)nextTransitionStateInfo;
- (void)setNextTransitionStateInfo:(id)arg1;
- (id)iphoneExtendIgnoreVCArray;
- (void)setIphoneExtendIgnoreVCArray:(id)arg1;
- (id)ipadExtendIgnoreVCArray;
- (void)setIpadExtendIgnoreVCArray:(id)arg1;
- (BOOL)isFinishExtendFromCollapse;
- (void)setIsFinishExtendFromCollapse:(BOOL)arg1;
- (BOOL)isFinishRotateForExtend;
- (void)setIsFinishRotateForExtend:(BOOL)arg1;
- (BOOL)useCommonMinimizeWindow;
- (void)setUseCommonMinimizeWindow:(BOOL)arg1;
- (BOOL)useVideoContentMinimizeStyle;
- (void)setUseVideoContentMinimizeStyle:(BOOL)arg1;
- (id)minimizeTaskData;
- (void)setMinimizeTaskData:(id)arg1;
- (BOOL)isMinimizeMode;
- (void)setIsMinimizeMode:(BOOL)arg1;
- (unsigned long long)lastMinimizeModeOpenType;
- (void)setLastMinimizeModeOpenType:(unsigned long long)arg1;
- (void)setMinizationInteractiveLogic:(id)arg1;
- (void)setMorphInteractiveDismissController:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void)setMinimizeContainerRootView:(id)arg1;
- (void)setMinimizeLiveContainerView:(id)arg1;
- (void)setLocalAudioModeBtn:(id)arg1;
- (unsigned long long)indicatorState;
- (id)audienceMinimizeReporter;
- (void)setAudienceMinimizeReporter:(id)arg1;
- (void)setEnterSqaureTrasitionController:(id)arg1;
- (void)setExitSqaureTrasitionController:(id)arg1;
- (BOOL)isShowBottomPlayer;
- (void)setIsShowBottomPlayer:(BOOL)arg1;
- (id)bottomPlayerLiveViewSnapshot;
- (void)setBottomPlayerLiveViewSnapshot:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (BOOL)isBoundEnterSqaureGesture;
- (void)setIsBoundEnterSqaureGesture:(BOOL)arg1;
- (BOOL)isBoundExitSqaureGesture;
- (void)setIsBoundExitSqaureGesture:(BOOL)arg1;
- (BOOL)enterHomepageTransitionAnimated;
- (void)setEnterHomepageTransitionAnimated:(BOOL)arg1;
- (BOOL)isTransferingToPrimitive;
- (void)setIsTransferingToPrimitive:(BOOL)arg1;
- (BOOL)hasShiftIntoList;
- (void)setHasShiftIntoList:(BOOL)arg1;
- (CGSize)customSize;
- (void)setCustomSize:(CGSize)arg1;
- (CGSize)originalScaleSize;
- (void)setOriginalScaleSize:(CGSize)arg1;
- (BOOL)useCustomSize;
- (void)setUseCustomSize:(BOOL)arg1;
- (void).cxx_destruct;
@end
