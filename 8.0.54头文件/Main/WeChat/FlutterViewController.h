@interface FlutterViewController : UIViewController <FlutterBinaryMessenger, UIScrollViewDelegate, FlutterViewResponder, FlutterTextureRegistry, FlutterPluginRegistry, UIGestureRecognizerDelegate>
{
    unique_ptr<fml::WeakNSObjectFactory<FlutterViewController>, std::default_delete<fml::WeakNSObjectFactory<FlutterViewController>>> _weakFactory; // +0x8
    scoped_nsobject<FlutterEngine> _engine; // +0x10
    scoped_nsobject<FlutterView> _flutterView; // +0x18
    scoped_nsobject<UIView> _splashScreenView; // +0x20
    ScopedTypeRef<void (^)(), fml::internal::ScopedBlockTraits<void (^)()>> _flutterViewRenderedCallback; // +0x28
    ScopedTypeRef<double (^)(), fml::internal::ScopedBlockTraits<double (^)()>> _textScaleFactorDelegate; // +0x30
    ScopedTypeRef<bool (^)(), fml::internal::ScopedBlockTraits<bool (^)()>> _darkModeDelegate; // +0x38
    unsigned long long _orientationPreferences; // +0x40
    long long _statusBarStyle; // +0x48
    ViewportMetrics _viewportMetrics; // +0x50
    BOOL _initialized; // +0x120
    BOOL _viewOpaque; // +0x121
    BOOL _engineNeedsLaunch; // +0x122
    BOOL _insetsByNative; // +0x123
    BOOL _hideStatusBar; // +0x124
    scoped_nsobject<NSMutableSet<NSNumber *>> _ongoingTouches; // +0x128
    scoped_nsobject<UIScrollView> _scrollView; // +0x130
    scoped_nsobject<UIView> _keyboardAnimationView; // +0x138
    scoped_nsobject<SpringAnimation> _keyboardSpringAnimation; // +0x140
    MouseState _mouseState; // +0x148
    double _scrollInertiaEventStartline; // +0x168
    double _scrollInertiaEventAppKitDeadline; // +0x170
    BOOL _autoReleaseFlutterView; // +0x178
    BOOL _isInPipMode; // +0x179
    BOOL _displayingFlutterUI; // +0x17a
    BOOL _flutterPrefersStatusBarHidden; // +0x17b
    BOOL _engineAllowHeadlessExecution; // +0x17c
    BOOL _allowDeliverAppLifecycleInViewControllerLifecycle; // +0x17d
    BOOL _disableKeyboardAnim; // +0x17e
    BOOL _isHomeIndicatorHidden; // +0x17f
    BOOL _isPresentingViewControllerAnimating; // +0x180
    BOOL _shouldIgnoreViewportMetricsUpdatesDuringRotation; // +0x181
    BOOL _keyboardAnimationIsShowing; // +0x182
    BOOL _isKeyboardInOrTransitioningFromBackground; // +0x183
    BOOL _isVoiceOverRunning; // +0x184
    id /* block */ _viewSafeAreaInsetsDelegate; // +0x188
    UIScrollView * _hostScrollerView; // +0x190
    id /* block */ _onInputAccessViewAdded; // +0x198
    id /* block */ _onInputAccessViewRemoved; // +0x1a0
    double _targetViewInsetBottom; // +0x1a8
    double _originalViewInsetBottom; // +0x1b0
    VSyncClient * _keyboardAnimationVSyncClient; // +0x1b8
    TimePoint _keyboardAnimationStartTime; // +0x1c0
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
- (id)engine;
- (WeakNSObject<FlutterViewController>)getWeakNSObject;
- (void)setUpNotificationCenterObservers;
- (void)showStatusBar;
- (void)hideStatusBar;
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
- (void)removeSplashScreenView:(id /* block */)arg1;
- (void)installFirstFrameCallback;
- (long long)viewIdentifier;
- (id)splashScreenView;
- (id)keyboardAnimationView;
- (id)keyboardSpringAnimation;
- (BOOL)loadDefaultSplashScreenView;
- (id)splashScreenFromStoryboard:(id)arg1;
- (id)splashScreenFromXib:(id)arg1;
- (void)setSplashScreenView:(id)arg1;
- (void)setFlutterViewDidRenderCallback:(id /* block */)arg1;
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
- (void)setUpKeyboardSpringAnimationIfNeeded:(id)arg1;
- (void)setUpKeyboardAnimationVsyncClient:(id /* block */)arg1;
- (void)invalidateKeyboardAnimationVSyncClient;
- (void)removeKeyboardAnimationView;
- (void)ensureViewportMetricsIsCorrect;
- (void)handlePressEvent:(id)arg1 nextAction:(id /* block */)arg2;
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
- (BOOL)isAlwaysUse24HourFormat;
- (id)brightnessMode;
- (id)contrastMode;
- (long long)preferredStatusBarStyle;
- (void)onPreferredStatusBarStyleUpdated:(id)arg1;
- (void)setPrefersStatusBarHidden:(BOOL)arg1;
- (BOOL)prefersStatusBarHidden;
- (id)flutterView;
- (void *)platformViewsController;
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
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (void)setNeedAutoReleaseFlutterView:(BOOL)arg1;
- (void)setFontShapeUseCoreText:(BOOL)arg1;
- (void)setUseCoreTextShape:(BOOL)arg1;
- (void)setAllowDeliverAppLifecycleInViewControllerLifecycle:(BOOL)arg1;
- (void)setPipMode:(BOOL)arg1;
- (BOOL)getPipMode;
- (BOOL)isDisplayingFlutterUI;
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
- (BOOL)isHomeIndicatorHidden;
- (BOOL)isPresentingViewControllerAnimating;
- (void)setIsPresentingViewControllerAnimating:(BOOL)arg1;
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

