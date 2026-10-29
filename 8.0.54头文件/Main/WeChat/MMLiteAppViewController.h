@interface MMLiteAppViewController : MMUIViewController <MMWillSnapshotProtocal, UIGestureRecognizerDelegate, WXCustomWebViewControllerProtocol, LiteAppParentViewControllerDelegate, ILiteAppJsApiPluginControllerProtocol>
{
    id <WXCustomWebViewControllerDelegate> m_delegate; // +0x68
    BOOL _forbidRightGesture; // +0x70
    BOOL _isPopGestureEnable; // +0x71
    BOOL _canOverScroll; // +0x72
    BOOL _forbidAutoresizingMask; // +0x73
    BOOL _isTransparent; // +0x74
    BOOL _isLiteVcDidAppear; // +0x75
    BOOL _sizeChangeSnapshot; // +0x76
    LiteAppViewController * _liteAppView; // +0x78
    LiteAppEmbedViewController * _liteAppEmbedView; // +0x80
    id <UIViewControllerTransitioningDelegate> _preTransitionDelegate; // +0x88
    MMLiteAppViewControllerTransitionMgr * _transitionMgr; // +0x90
    LiteAppJsApiPluginScheduler * _jsApiPluginScheduler; // +0x98
    WebViewA8KeyLogicImpl * _m_a8KeyLogicImpl; // +0xa0
    NSMutableDictionary * _extraData; // +0xa8
    MMLiteAppModalTransitionAnimator * _animator; // +0xb0
    id /* block */ _closedCallback; // +0xb8
    id /* block */ _willDisappearCallback; // +0xc0
    id /* block */ _didDisappearCallback; // +0xc8
    id /* block */ _willAppearCallback; // +0xd0
    id /* block */ _didAppearCallback; // +0xd8
    id /* block */ _onBodySizeChange; // +0xe0
    MMLiteAppPlatformView * _platformView; // +0xe8
    double _delayTime; // +0xf0
    id _host; // +0xf8
    id <LiteAppLifeCycleCallbackDelegate> _lifeCycleDelegate; // +0x100
    long long _storeUiStatusBarStyle; // +0x108
    MMLiteAppJsApiLogicImpl * _liteAppJsApilogicImpl; // +0x110
    MMLiteAppVCView * _customView; // +0x118
    UIPanGestureRecognizer * _halfScreenPanGestureRecognizer; // +0x120
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
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 startReport:(id)arg7 reporter:(id)arg8;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 signatureKey:(id)arg5 openWithNewTab:(BOOL)arg6 isHalfScreen:(BOOL)arg7 isTransparent:(BOOL)arg8 startReport:(id)arg9 reporter:(id)arg10;
- (id)initWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 openWithNewTab:(BOOL)arg7 isHalfScreen:(BOOL)arg8 isTransparent:(BOOL)arg9 startReport:(id)arg10 reporter:(id)arg11;
- (void)reopen:(id)arg1;
- (void)setupEngine;
- (id)reporter;
- (id)getStore;
- (void)setStore:(id)arg1;
- (void)setSource:(id)arg1 enableActions:(id)arg2 enableViews:(id)arg3;
- (id)initForEmbedViewWithParams:(id)arg1 path:(id)arg2 page:(id)arg3 query:(id)arg4 referrerInfo:(id)arg5 signatureKey:(id)arg6 isTransparent:(BOOL)arg7 pipMode:(BOOL)arg8 sizeChangeSnapshot:(BOOL)arg9 startReport:(id)arg10 reporter:(id)arg11;
- (void)initForPluginScheduler;
- (void)didTakeScreenshot;
- (id)getLiteAppId;
- (unsigned int)getLiteAppUuid;
- (void)publishGlobalEventToPage:(unsigned long long)arg1 event:(id)arg2 params:(id)arg3;
- (void)publishGlobalEvent:(id)arg1 params:(id)arg2;
- (void)publishNodeEvent:(int)arg1 event:(id)arg2 params:(id)arg3;
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
- (void)handleNavigationBarForMiniAppOnWillDisappearIfNeeded;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)checkTransition;
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
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (void)handlePlatformViewPopGesture;
- (void)updateSize:(CGSize)arg1;
- (void)setContentOffset:(double)arg1;
- (void)disableScroll:(BOOL)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (id)captureScreenshotInRect:(CGRect)arg1;
- (void)pauseView;
- (void)resumeView;
- (void)setNeedKeepAlive:(BOOL)arg1;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)screenCapturedDidChange:(id)arg1;
- (id)getPageConfig;
- (void)setHalfScreenPanGestureRecognizer:(id)arg1;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
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
- (void)setCanOverScroll:(BOOL)arg1;
- (id)platformView;
- (void)setPlatformView:(id)arg1;
- (double)delayTime;
- (BOOL)forbidAutoresizingMask;
- (void)setForbidAutoresizingMask:(BOOL)arg1;
- (id)host;
- (void)setHost:(id)arg1;
- (id)lifeCycleDelegate;
- (void)setLifeCycleDelegate:(id)arg1;
- (long long)storeUiStatusBarStyle;
- (void)setStoreUiStatusBarStyle:(long long)arg1;
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

