@interface FlutterViewController : UIViewController <FlutterBinaryMessenger, UIScrollViewDelegate, FlutterViewResponder, FlutterTextureRegistry, FlutterPluginRegistry, UIGestureRecognizerDelegate>
{
    id /* block */ _flutterViewRenderedCallback; // +0x8
    id /* block */ _textScaleFactorDelegate; // +0x10
    id /* block */ _darkModeDelegate; // +0x18
    ViewportMetrics _viewportMetrics; // +0x20
    MouseState _mouseState; // +0xf8
    BOOL _insetsByNative; // +0x118
    BOOL _hideStatusBar; // +0x119
    BOOL _autoReleaseFlutterView; // +0x11a
    BOOL _isInPipMode; // +0x11b
    BOOL _surfaceCreated; // +0x11c
    BOOL _viewOpaque; // +0x11d
    BOOL _displayingFlutterUI; // +0x11e
    BOOL _engineAllowHeadlessExecution; // +0x11f
    BOOL _allowDeliverAppLifecycleInViewControllerLifecycle; // +0x120
    BOOL _disableKeyboardAnim; // +0x121
    BOOL _initialized; // +0x122
    BOOL _engineNeedsLaunch; // +0x123
    BOOL _isHomeIndicatorHidden; // +0x124
    BOOL _isPresentingViewControllerAnimating; // +0x125
    BOOL _flutterPrefersStatusBarHidden; // +0x126
    BOOL _shouldIgnoreViewportMetricsUpdatesDuringRotation; // +0x127
    BOOL _keyboardAnimationIsShowing; // +0x128
    BOOL _isKeyboardInOrTransitioningFromBackground; // +0x129
    BOOL _isVoiceOverRunning; // +0x12a
    UIView * _splashScreenView; // +0x130
    FlutterEngine * _engine; // +0x138
    id /* block */ _viewSafeAreaInsetsDelegate; // +0x140
    UIScrollView * _hostScrollerView; // +0x148
    id /* block */ _onInputAccessViewAdded; // +0x150
    id /* block */ _onInputAccessViewRemoved; // +0x158
    FlutterView * _flutterView; // +0x160
    unsigned long long _orientationPreferences; // +0x168
    long long _statusBarStyle; // +0x170
    NSMutableSet * _ongoingTouches; // +0x178
    UIScrollView * _scrollView; // +0x180
    UIView * _keyboardAnimationView; // +0x188
    SpringAnimation * _keyboardSpringAnimation; // +0x190
    double _targetViewInsetBottom; // +0x198
    double _originalViewInsetBottom; // +0x1a0
    VSyncClient * _keyboardAnimationVSyncClient; // +0x1a8
    TimePoint _keyboardAnimationStartTime; // +0x1b0
    double _scrollInertiaEventStartline; // +0x1b8
    double _scrollInertiaEventAppKitDeadline; // +0x1c0
    VSyncClient * _touchRateCorrectionVSyncClient; // +0x1c8
    UIHoverGestureRecognizer * _hoverGestureRecognizer; // +0x1d0
    UIPanGestureRecognizer * _discreteScrollingPanGestureRecognizer; // +0x1d8
    UIPanGestureRecognizer * _continuousScrollingPanGestureRecognizer; // +0x1e0
    UIPinchGestureRecognizer * _pinchGestureRecognizer; // +0x1e8
    UIRotationGestureRecognizer * _rotationGestureRecognizer; // +0x1f0
    FlutterKeyboardManager * _keyboardManager; // +0x1f8
}
+ (BOOL)automaticallyNotifiesObserversOfDisplayingFlutterUI;
+ (BOOL)accessibilityIsOnOffSwitchLabelsEnabled;
+ (BOOL)isUIAccessibilityIsVoiceOverRunning;
- (BOOL)shouldWrapViewWithSafeArea;
- (id)initWithEngine:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (id)initWithProject:(id)arg1 nibName:(id)arg2 bundle:(id)arg3;
- (id)initWithProject:(id)arg1 initialRoute:(id)arg2 nibName:(id)arg3 bundle:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)awakeFromNib;
- (id)init;
- (void)sharedSetupWithProject:(id)arg1 initialRoute:(id)arg2;
- (BOOL)isViewOpaque;
- (void)setViewOpaque:(BOOL)arg1;
- (void)performCommonViewControllerInitialization;
- (void)setUpNotificationCenterObservers;
- (void)setUpSceneLifecycleNotifications:(id)arg1;
- (void)setUpApplicationLifecycleNotifications:(id)arg1;
- (void)setInitialRoute:(id)arg1;
- (void)setInsetsToFlutterDirect:(CGRect *)arg1;
- (void)popRoute;
- (void)pushRoute:(id)arg1;
- (void)setTextScaleFactorDelegate:(id /* block */)arg1;
- (void)setDarkModeDelegate:(id /* block */)arg1;
- (void)loadView;
- (PointerData)generatePointerDataForFake;
- (void)createAndAttachFlutterView;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)installSplashScreenViewIfNecessary;
- (void)setDisplayingFlutterUI:(BOOL)arg1;
- (void)callViewRenderedCallback;
- (void)removeSplashScreenWithCompletion:(id /* block */)arg1;
- (void)onFirstFrameRendered;
- (void)installFirstFrameCallback;
- (long long)viewIdentifier;
- (BOOL)loadDefaultSplashScreenView;
- (id)splashScreenFromStoryboard:(id)arg1;
- (id)splashScreenFromXib:(id)arg1;
- (void)setSplashScreenView:(id)arg1;
- (void)setFlutterViewDidRenderCallback:(id /* block */)arg1;
- (long long)activationState;
- (BOOL)stateIsActive;
- (BOOL)stateIsBackground;
- (BOOL)isApplicationStateMatching:(long long)arg1 withApplication:(id)arg2;
- (BOOL)isSceneStateMatching:(long long)arg1;
- (void)resetSurfaceUpdateState;
- (void)surfaceUpdated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)addInternalPlugins;
- (void)removeInternalPlugins;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)flushOngoingTouches;
- (void)deregisterNotifications;
- (void)dealloc;
- (void)applicationBecameActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)sceneBecameActive:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneWillDisconnect:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)appOrSceneBecameActive;
- (void)appOrSceneWillResignActive;
- (void)appOrSceneWillTerminate;
- (void)appOrSceneDidEnterBackground;
- (void)appOrSceneWillEnterForeground;
- (void)goToApplicationLifecycle:(id)arg1;
- (void)dispatchTouches:(id)arg1 pointerDataChangeOverride:(long long *)arg2 event:(id)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)forceTouchesCancelled:(id)arg1;
- (void)injectPointerAtLogicalPoint:(CGPoint)arg1 phase:(long long)arg2 pointerId:(long long)arg3;
- (void)createTouchRateCorrectionVSyncClientIfNeeded;
- (void)triggerTouchRateCorrectionIfNeeded:(id)arg1;
- (void)invalidateTouchRateCorrectionVSyncClient;
- (void)updateViewportMetricsIfNeeded;
- (void)viewDidLayoutSubviews;
- (BOOL)waitForFirstFrame:(double)arg1;
- (void)viewSafeAreaInsetsDidChange;
- (void)setViewportMetricsSize;
- (void)setViewportMetricsPaddings;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)handleKeyboardNotification:(id)arg1;
- (BOOL)shouldIgnoreKeyboardNotification:(id)arg1;
- (BOOL)isKeyboardNotificationForDifferentView:(id)arg1;
- (long long)calculateKeyboardAttachMode:(id)arg1;
- (double)calculateMultitaskingAdjustment:(CGRect)arg1 keyboardFrame:(CGRect)arg2;
- (double)calculateKeyboardInset:(CGRect)arg1 keyboardMode:(long long)arg2;
- (void)startKeyBoardAnimation:(double)arg1;
- (void)hideKeyboardImmediately;
- (void)setUpKeyboardSpringAnimationIfNeeded:(id)arg1;
- (void)handleKeyboardAnimationCallbackWithTargetTime:(TimePoint)arg1;
- (void)setUpKeyboardAnimationVsyncClient:(id /* block */)arg1;
- (void)invalidateKeyboardAnimationVSyncClient;
- (void)removeKeyboardAnimationView;
- (void)ensureViewportMetricsIsCorrect;
- (void)handlePressEvent:(id)arg1 nextAction:(id /* block */)arg2;
- (void)sendDeepLinkToFramework:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)superPressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)superPressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)superPressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)superPressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onOrientationPreferencesUpdated:(id)arg1;
- (void)requestGeometryUpdateForWindowScenes:(id)arg1;
- (void)performOrientationUpdate:(unsigned long long)arg1;
- (void)onHideHomeIndicatorNotification:(id)arg1;
- (void)onShowHomeIndicatorNotification:(id)arg1;
- (void)setIsHomeIndicatorHidden:(BOOL)arg1;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onAccessibilityStatusChanged:(id)arg1;
- (int)accessibilityFlags;
- (BOOL)accessibilityPerformEscape;
- (void)traitCollectionDidChange:(id)arg1;
- (void)onUserSettingsChanged:(id)arg1;
- (double)textScaleFactor;
- (BOOL)supportsShowingSystemContextMenu;
- (id)brightnessMode;
- (id)contrastMode;
- (long long)preferredStatusBarStyle;
- (void)onPreferredStatusBarStyleUpdated:(id)arg1;
- (void)setPrefersStatusBarHidden:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (id)platformViewsController;
- (id)binaryMessenger;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(id /* block */)arg3;
- (id)makeBackgroundTaskQueue;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2 taskQueue:(id)arg3;
- (void)cleanUpConnection:(long long)arg1;
- (long long)registerTexture:(id)arg1;
- (void)unregisterTexture:(long long)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (id)lookupKeyForAsset:(id)arg1;
- (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
- (id)pluginRegistry;
- (id)registrarForPlugin:(id)arg1;
- (BOOL)hasPlugin:(id)arg1;
- (id)valuePublishedByPlugin:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (BOOL)isPresentingViewController;
- (PointerData)updateMousePointerDataFrom:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;
- (void)hoverEvent:(id)arg1;
- (void)discreteScrollEvent:(id)arg1;
- (void)continuousScrollEvent:(id)arg1;
- (void)pinchEvent:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)restorationPlugin;
- (id)textInputPlugin;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)setNeedAutoReleaseFlutterView:(BOOL)arg1;
- (void)setFontShapeUseCoreText:(BOOL)arg1;
- (void)setUseCoreTextShape:(BOOL)arg1;
- (void)setAllowDeliverAppLifecycleInViewControllerLifecycle:(BOOL)arg1;
- (void)setPipMode:(BOOL)arg1;
- (BOOL)getPipMode;
- (BOOL)isDisplayingFlutterUI;
- (id)splashScreenView;
- (id)engine;
- (BOOL)engineAllowHeadlessExecution;
- (BOOL)allowDeliverAppLifecycleInViewControllerLifecycle;
- (BOOL)disableKeyboardAnim;
- (void)setDisableKeyboardAnim:(BOOL)arg1;
- (id /* block */)viewSafeAreaInsetsDelegate;
- (void)setViewSafeAreaInsetsDelegate:(id /* block */)arg1;
- (id)hostScrollerView;
- (void)setHostScrollerView:(id)arg1;
- (id /* block */)onInputAccessViewAdded;
- (void)setOnInputAccessViewAdded:(id /* block */)arg1;
- (id /* block */)onInputAccessViewRemoved;
- (void)setOnInputAccessViewRemoved:(id /* block */)arg1;
- (id)flutterView;
- (void)setFlutterView:(id)arg1;
- (id /* block */)flutterViewRenderedCallback;
- (void)setFlutterViewRenderedCallback:(id /* block */)arg1;
- (unsigned long long)orientationPreferences;
- (void)setOrientationPreferences:(unsigned long long)arg1;
- (long long)statusBarStyle;
- (void)setStatusBarStyle:(long long)arg1;
- (BOOL)initialized;
- (void)setInitialized:(BOOL)arg1;
- (BOOL)engineNeedsLaunch;
- (void)setEngineNeedsLaunch:(BOOL)arg1;
- (BOOL)isHomeIndicatorHidden;
- (BOOL)isPresentingViewControllerAnimating;
- (void)setIsPresentingViewControllerAnimating:(BOOL)arg1;
- (BOOL)flutterPrefersStatusBarHidden;
- (void)setFlutterPrefersStatusBarHidden:(BOOL)arg1;
- (id)ongoingTouches;
- (void)setOngoingTouches:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)keyboardAnimationView;
- (void)setKeyboardAnimationView:(id)arg1;
- (id)keyboardSpringAnimation;
- (void)setKeyboardSpringAnimation:(id)arg1;
- (BOOL)shouldIgnoreViewportMetricsUpdatesDuringRotation;
- (void)setShouldIgnoreViewportMetricsUpdatesDuringRotation:(BOOL)arg1;
- (double)targetViewInsetBottom;
- (void)setTargetViewInsetBottom:(double)arg1;
- (double)originalViewInsetBottom;
- (void)setOriginalViewInsetBottom:(double)arg1;
- (id)keyboardAnimationVSyncClient;
- (void)setKeyboardAnimationVSyncClient:(id)arg1;
- (BOOL)keyboardAnimationIsShowing;
- (void)setKeyboardAnimationIsShowing:(BOOL)arg1;
- (TimePoint)keyboardAnimationStartTime;
- (void)setKeyboardAnimationStartTime:(TimePoint)arg1;
- (BOOL)isKeyboardInOrTransitioningFromBackground;
- (void)setIsKeyboardInOrTransitioningFromBackground:(BOOL)arg1;
- (double)scrollInertiaEventStartline;
- (void)setScrollInertiaEventStartline:(double)arg1;
- (double)scrollInertiaEventAppKitDeadline;
- (void)setScrollInertiaEventAppKitDeadline:(double)arg1;
- (id)touchRateCorrectionVSyncClient;
- (void)setTouchRateCorrectionVSyncClient:(id)arg1;
- (id)hoverGestureRecognizer;
- (void)setHoverGestureRecognizer:(id)arg1;
- (id)discreteScrollingPanGestureRecognizer;
- (void)setDiscreteScrollingPanGestureRecognizer:(id)arg1;
- (id)continuousScrollingPanGestureRecognizer;
- (void)setContinuousScrollingPanGestureRecognizer:(id)arg1;
- (id)pinchGestureRecognizer;
- (void)setPinchGestureRecognizer:(id)arg1;
- (id)rotationGestureRecognizer;
- (void)setRotationGestureRecognizer:(id)arg1;
- (BOOL)isVoiceOverRunning;
- (id)keyboardManager;
- (void)setKeyboardManager:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
