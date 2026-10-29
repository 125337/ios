@interface MMFlutterViewController : MMUIViewController <LiteAppWidgetParentViewControllerDelegate, WXCustomWebViewControllerProtocol, ILiteAppJsApiPluginControllerProtocol, MMFlutterEdgeGestureDelegate, UIScrollViewDelegate, MMWillSnapshotProtocal>
{
    NSString * _engineGroupId; // +0x68
    MMFlutterEdgeGesture * _screenEdgePanGesture; // +0x70
    BOOL _isFirstShow; // +0x78
    BOOL _hasAppeared; // +0x79
    BOOL _usePlatformNav; // +0x7a
    BOOL _navigationBackEnable; // +0x7b
    BOOL _popOrDismissWithAnimation; // +0x7c
    BOOL _swipeEnable; // +0x7d
    BOOL _autoReleaseFlutterView; // +0x7e
    BOOL _ignoreSafeAreaBottom; // +0x7f
    BOOL _enablePageState; // +0x80
    BOOL _isAttachFlutterView; // +0x81
    BOOL _isHideStatusBar; // +0x82
    BOOL _m_isPresent; // +0x83
    BOOL _isSnapshoting; // +0x84
    BOOL _m_enableModifyNavBar; // +0x85
    BOOL _m_isAddLifeclcyeObserver; // +0x86
    int _curAddedView; // +0x88
    int _transitionMode; // +0x8c
    NSObject<MMFlutterViewControllerDelegate> * _delegate; // +0x90
    MMFlutterInstance * _flutterInstance; // +0x98
    NSObject<MMFlutterViewControllerAnimatedTransitioning> * _transitionManager; // +0xa0
    MMFlutterEngine * _engine; // +0xa8
    FlutterViewController * _flutterVC; // +0xb0
    NSString * _engineId; // +0xb8
    FlutterPageStateDispacher * _pageStateDispatcher; // +0xc0
    MMFlutterRoute * _route; // +0xc8
    FlutterActionBarHelper * _actionBarHelper; // +0xd0
    MMFlutterHybridNavPageState * _pageState; // +0xd8
    UIImageView * _snapshotView; // +0xe0
    UIView * _currentAddedView; // +0xe8
    id /* block */ _onViewFrameChange; // +0xf0
    unsigned long long _transitionStartTime; // +0xf8
    unsigned long long _transitionEndTime; // +0x100
    id _transitionDelegate; // +0x108
    id /* block */ _safeAreaInsetsDelegate; // +0x110
}
- (void)initForPluginScheduler:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)liteAppInit:(id)arg1 appUuid:(unsigned int)arg2;
- (void)liteAppDestroy:(id)arg1 appUuid:(unsigned int)arg2;
- (void)setFlagsConfig:(unsigned int)arg1 flags:(int)arg2;
- (void)setHomeIndicatorAutoHidden:(unsigned int)arg1 hidden:(BOOL)arg2;
- (void)setPageOrientation:(unsigned int)arg1 pageOrientation:(int)arg2 landScapeOrientation:(unsigned long long)arg3;
- (void)setStatusBarHidden:(unsigned int)arg1 hidden:(BOOL)arg2;
- (void)setViewWillDisappearBlock:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)setDarkModeDidChangeBlock:(unsigned int)arg1 block:(id /* block */)arg2;
- (BOOL)forbidRightGesture;
- (void)setIsPopGestureEnable:(BOOL)arg1;
- (void)onCheckSumFail:(id)arg1;
- (void)onCheckBaseLibSumFail:(id)arg1;
- (void)onCheckLiteAppVersionError:(id)arg1 errorCode:(unsigned int)arg2;
- (void)setTitleBackgroundColor:(unsigned long long)arg1 darkMode:(BOOL)arg2 pageId:(unsigned long long)arg3;
- (void)onBodySizeChange:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (void)setForbidRightGestureEnable:(BOOL)arg1;
- (void)setCanOverScroll:(BOOL)arg1;
- (void)onLayoutComplete:(id)arg1 appUuid:(unsigned int)arg2 pageId:(unsigned long long)arg3 width:(float)arg4 height:(float)arg5;
- (id)getLiteAppId;
- (unsigned int)getLiteAppUuid;
- (void)publishGlobalEvent:(id)arg1 params:(id)arg2;
- (id)jsApiPluginScheduler;
- (long long)storeUiStatusBarStyle;
- (void)setStoreUiStatusBarStyle:(long long)arg1;
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
- (void)setDisableWebAlertView:(BOOL)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 failHandleBlock:(id /* block */)arg2;
- (id)getInitUrl;
- (BOOL)allowFayByImage;
- (BOOL)allowImagePreview;
- (BOOL)allowScanQRCodeByImage;
- (BOOL)allowShareByImage;
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
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)isViewDidAppear;
- (id)entranceGMsgID;
- (id)extraData;
- (id)initWithFlutterInstance:(id)arg1;
- (void)setUsePlatformNav:(BOOL)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (BOOL)shouldInteractiveDismiss;
- (void)setDelegate:(id)arg1;
- (void)setNavigationBackEnable:(BOOL)arg1;
- (BOOL)shouldInteractivePop;
- (void)setSwipeEnable:(BOOL)arg1;
- (void)setEnablePageState:(BOOL)arg1;
- (void)requestPreload;
- (void)requestPreRender:(id /* block */)arg1;
- (void)requestPreRender:(id /* block */)arg1 timeOutInMs:(long long)arg2;
- (BOOL)shouldUpdatePageStateWhenPreRenderStart;
- (void)loadView;
- (void)viewDidLoad;
- (void)updateSnapshot;
- (void)hideSnapshot;
- (void)willSnapshot;
- (void)doneSnapshot;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)addPlugins:(id)arg1;
- (void)loadFlutter;
- (void)loadFlutterView;
- (void)setProxyUIScrollView:(id)arg1;
- (void)checkAddView:(id /* block */)arg1;
- (void)checkRemoveView;
- (void)didKeyboardFrameChange:(id)arg1;
- (void)clearAttachedUIScrollerView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)enableModifyNavBar:(BOOL)arg1;
- (BOOL)shouldUseCoreText;
- (void)traceTransitionAnimation:(id)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)onWillPushOtherViewController;
- (id)mainScreenIfViewLoaded;
- (id)windowSceneIfViewLoaded;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (BOOL)isDestoryVMWhenDealloc;
- (void)dealloc;
- (void)mmFlutterViewControllerHandleScreenEdgePanGesture:(id)arg1;
- (void)checkEdgeGesture;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onTouchesBegan;
- (void)onTouchesEnded;
- (void)handleScreenEdgePanGesture:(id)arg1;
- (void)setupApplicationLifecycleObservers;
- (void)removeApplicationLifecycleObservers;
- (BOOL)isTopInCurrentNavController;
- (void)applicationBecameActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)delegate;
- (id)flutterInstance;
- (void)setFlutterInstance:(id)arg1;
- (id)transitionManager;
- (void)setTransitionManager:(id)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)flutterVC;
- (void)setFlutterVC:(id)arg1;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (BOOL)usePlatformNav;
- (BOOL)navigationBackEnable;
- (BOOL)popOrDismissWithAnimation;
- (void)setPopOrDismissWithAnimation:(BOOL)arg1;
- (BOOL)swipeEnable;
- (BOOL)autoReleaseFlutterView;
- (void)setAutoReleaseFlutterView:(BOOL)arg1;
- (BOOL)ignoreSafeAreaBottom;
- (void)setIgnoreSafeAreaBottom:(BOOL)arg1;
- (BOOL)enablePageState;
- (id)pageStateDispatcher;
- (void)setPageStateDispatcher:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;
- (id)actionBarHelper;
- (void)setActionBarHelper:(id)arg1;
- (id)pageState;
- (void)setPageState:(id)arg1;
- (id)snapshotView;
- (void)setSnapshotView:(id)arg1;
- (BOOL)isAttachFlutterView;
- (void)setIsAttachFlutterView:(BOOL)arg1;
- (BOOL)isHideStatusBar;
- (void)setIsHideStatusBar:(BOOL)arg1;
- (BOOL)m_isPresent;
- (void)setM_isPresent:(BOOL)arg1;
- (BOOL)isSnapshoting;
- (void)setIsSnapshoting:(BOOL)arg1;
- (BOOL)m_enableModifyNavBar;
- (void)setM_enableModifyNavBar:(BOOL)arg1;
- (id)currentAddedView;
- (void)setCurrentAddedView:(id)arg1;
- (id /* block */)onViewFrameChange;
- (void)setOnViewFrameChange:(id /* block */)arg1;
- (int)curAddedView;
- (void)setCurAddedView:(int)arg1;
- (BOOL)m_isAddLifeclcyeObserver;
- (void)setM_isAddLifeclcyeObserver:(BOOL)arg1;
- (unsigned long long)transitionStartTime;
- (void)setTransitionStartTime:(unsigned long long)arg1;
- (unsigned long long)transitionEndTime;
- (void)setTransitionEndTime:(unsigned long long)arg1;
- (int)transitionMode;
- (void)setTransitionMode:(int)arg1;
- (id)transitionDelegate;
- (void)setTransitionDelegate:(id)arg1;
- (id /* block */)safeAreaInsetsDelegate;
- (void)setSafeAreaInsetsDelegate:(id /* block */)arg1;
- (void).cxx_destruct;
@end

