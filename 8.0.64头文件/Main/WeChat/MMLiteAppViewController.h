@interface MMLiteAppViewController : MMUIViewController <MMWillSnapshotProtocal, WCFinderHalfScreenProtocol, UIGestureRecognizerDelegate, MinimizationTransitionControllerDelegate, WXCustomWebViewControllerProtocol, LiteAppParentViewControllerDelegate, ILiteAppJsApiPluginControllerProtocol>
{
    id <WXCustomWebViewControllerDelegate> m_delegate; // +0x70
    BOOL _forbidRightGesture; // +0x78
    BOOL _isPopGestureEnable; // +0x79
    BOOL _canOverScroll; // +0x7a
    BOOL _forbidAutoresizingMask; // +0x7b
    BOOL _isPageSheetHalfScreen; // +0x7c
    BOOL _isTransparent; // +0x7d
    BOOL _isLiteVcDidAppear; // +0x7e
    BOOL _sizeChangeSnapshot; // +0x7f
    float _halfScreenHeight; // +0x80
    LiteAppViewController * _liteAppView; // +0x88
    LiteAppEmbedViewController * _liteAppEmbedView; // +0x90
    id <UIViewControllerTransitioningDelegate> _preTransitionDelegate; // +0x98
    MMLiteAppViewControllerTransitionMgr * _transitionMgr; // +0xa0
    LiteAppJsApiPluginScheduler * _jsApiPluginScheduler; // +0xa8
    WebViewA8KeyLogicImpl * _m_a8KeyLogicImpl; // +0xb0
    NSMutableDictionary * _extraData; // +0xb8
    MMLiteAppModalTransitionAnimator * _animator; // +0xc0
    id /* block */ _closedCallback; // +0xc8
    id /* block */ _willDisappearCallback; // +0xd0
    id /* block */ _didDisappearCallback; // +0xd8
    id /* block */ _willAppearCallback; // +0xe0
    id /* block */ _didAppearCallback; // +0xe8
    id /* block */ _onBodySizeChange; // +0xf0
    MMLiteAppPlatformView * _platformView; // +0xf8
    double _delayTime; // +0x100
    id _host; // +0x108
    long long _storeUiStatusBarStyle; // +0x110
    ScanQRCodeLogicController * _scanQRCodeLogic; // +0x118
    MMUIViewController * _sourceViewController; // +0x120
    MMUIViewController * _targetViewController; // +0x128
    MiniRecTransitionController * _minimizationTransitionController; // +0x130
    MinimizeTaskData * _minimizationTaskData; // +0x138
    MinimizeTaskData * _minimizationTaskDataForFloat; // +0x140
    MMLiteAppJsApiLogicImpl * _liteAppJsApilogicImpl; // +0x148
    MMLiteAppVCView * _customView; // +0x150
    UIPanGestureRecognizer * _halfScreenPanGestureRecognizer; // +0x158
}
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
- (id)localJSAgentPlugin;
- (id)wsPluginScheduler;
- (void)addPopBackInteractivePopGesture;
- (void)handlePanGesture:(id)arg1;
- (void)checkTransition;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)willSnapshot;
- (void)doneSnapshot;
- (id)getHalfContainerView;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 isHalfScreen:(BOOL)arg7 isTransparent:(BOOL)arg8 startReport:(id)arg9 reporter:(id)arg10 useImpeller:(BOOL)arg11;
- (void)reopen:(id)arg1;
- (void)setupEngine;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (id)initForEmbedViewWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 isTransparent:(BOOL)arg7 pipMode:(BOOL)arg8 sizeChangeSnapshot:(BOOL)arg9 startReport:(id)arg10 reporter:(id)arg11 useImpeller:(BOOL)arg12;
- (void)initForPluginScheduler;
- (void)didTakeScreenshot;
- (id)getLiteAppId;
- (unsigned int)getLiteAppUuid;
- (void)publishGlobalEvent:(id)arg1 params:(id)arg2;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (BOOL)shouldSkipNavInteractiveGesture;
- (void)viewDidLoad;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleNavigationBarForMiniAppOnWillDisappearIfNeeded;
- (void)checkTransition;
- (BOOL)useCustomNavibar;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldInteractivePop;
- (BOOL)useTransparentNavibar;
- (id)getInitUrl;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
- (void)doJsApiInitEvent;
- (void)enableWebContentImageLongPressingTag;
- (id)extraInfo;
- (void)forceShowCloseButton;
- (id)getCurrentAppId;
- (unsigned int)getCurrentScene;
- (id)getCurrentUrl;
- (unsigned char)getPermissionWithName:(id)arg1;
- (id)getShareUrl;
- (void)sendEventToJSBridge:(id)arg1 Param:(id)arg2;
- (void)setDelayTime:(double)arg1;
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (void)setWebViewContentSize:(CGSize)arg1;
- (id)m_initUrl;
- (id)m_extraInfo;
- (id)m_a8KeyLogicImpl;
- (id)m_jsLogicImpl;
- (BOOL)m_bOfflinePage;
- (id)webView;
- (BOOL)m_bIsJsapiUploadVideoUploading;
- (void)goToURL:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)stopForcedRotationToPortrait;
- (void)logUseWebviewSchemeToJumpWithUrl:(id)arg1;
- (id)pluginScheduler;
- (id)minimizationTransitionController;
- (void)installMinimizationTransitionController;
- (void)tryUpdateSnapshotForMinimization;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (id)currentMultiContentTaskBizName;
- (id)currentMultiContentTaskBizKey;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (BOOL)navigateBack:(BOOL)arg1;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (void)handlePlatformViewPopGesture;
- (void)updateSize:(CGSize)arg1;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)setNeedAutoReleaseFlutterView:(BOOL)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)captureScreenshotInRect:(CGRect)arg1;
- (void)pauseView;
- (void)resumeView;
- (void)halfScreenViewAppear:(BOOL)arg1;
- (void)halfScreenViewDisappear:(BOOL)arg1;
- (void)setNeedKeepAlive:(BOOL)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)screenCapturedDidChange:(id)arg1;
- (id)getPageConfig;
- (void)setHalfScreenPanGestureRecognizer:(id)arg1;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)setCanOverScroll:(BOOL)arg1;
- (id)scanQRCodeLogic;
- (unsigned long long)getEngineId;
- (void)setHostInfoExtends:(id)arg1;
- (BOOL)getAppConfigDartMode;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)liteAppView;
- (void)setLiteAppView:(id)arg1;
- (id)liteAppEmbedView;
- (void)setLiteAppEmbedView:(id)arg1;
- (id)preTransitionDelegate;
- (void)setPreTransitionDelegate:(id)arg1;
- (id)transitionMgr;
- (void)setTransitionMgr:(id)arg1;
- (id)jsApiPluginScheduler;
- (void)setJsApiPluginScheduler:(id)arg1;
- (void)setM_a8KeyLogicImpl:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (BOOL)forbidRightGesture;
- (void)setForbidRightGesture:(BOOL)arg1;
- (BOOL)isPopGestureEnable;
- (id /* block */)closedCallback;
- (void)setClosedCallback:(id /* block */)arg1;
- (id /* block */)willDisappearCallback;
- (void)setWillDisappearCallback:(id /* block */)arg1;
- (id /* block */)didDisappearCallback;
- (void)setDidDisappearCallback:(id /* block */)arg1;
- (id /* block */)willAppearCallback;
- (void)setWillAppearCallback:(id /* block */)arg1;
- (id /* block */)didAppearCallback;
- (void)setDidAppearCallback:(id /* block */)arg1;
- (id /* block */)onBodySizeChange;
- (void)setOnBodySizeChange:(id /* block */)arg1;
- (BOOL)canOverScroll;
- (id)platformView;
- (void)setPlatformView:(id)arg1;
- (double)delayTime;
- (BOOL)forbidAutoresizingMask;
- (void)setForbidAutoresizingMask:(BOOL)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (long long)storeUiStatusBarStyle;
- (void)setStoreUiStatusBarStyle:(long long)arg1;
- (BOOL)isPageSheetHalfScreen;
- (void)setIsPageSheetHalfScreen:(BOOL)arg1;
- (float)halfScreenHeight;
- (void)setHalfScreenHeight:(float)arg1;
- (void)setScanQRCodeLogic:(id)arg1;
- (id)sourceViewController;
- (void)setSourceViewController:(id)arg1;
- (id)targetViewController;
- (void)setTargetViewController:(id)arg1;
- (void)setMinimizationTransitionController:(id)arg1;
- (id)minimizationTaskData;
- (void)setMinimizationTaskData:(id)arg1;
- (id)minimizationTaskDataForFloat;
- (void)setMinimizationTaskDataForFloat:(id)arg1;
- (id)liteAppJsApilogicImpl;
- (void)setLiteAppJsApilogicImpl:(id)arg1;
- (BOOL)isTransparent;
- (void)setIsTransparent:(BOOL)arg1;
- (BOOL)isLiteVcDidAppear;
- (void)setIsLiteVcDidAppear:(BOOL)arg1;
- (BOOL)sizeChangeSnapshot;
- (void)setSizeChangeSnapshot:(BOOL)arg1;
- (id)customView;
- (void)setCustomView:(id)arg1;
- (id)halfScreenPanGestureRecognizer;
- (void).cxx_destruct;
@end
