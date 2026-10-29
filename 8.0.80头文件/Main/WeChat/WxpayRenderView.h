@interface WxpayRenderView : UIView
{
    IHostEventSink * _events; // +0x8
    WxpayVSyncPump * _vsync; // +0x10
    WxpaySceneObservationScheduler * _sceneObservation; // +0x18
    NSObject<OS_dispatch_queue> * _sceneObservationQueue; // +0x20
    shared_ptr<std::atomic<bool>> _presentedFrameSignalPending; // +0x28
    InputStats _observedInputStats; // +0x38
    unsigned long long _touchMoveCallbacks; // +0x118
    unsigned long long _touchMoveSamples; // +0x120
    unsigned long long _touchBegan; // +0x128
    unsigned long long _touchEnded; // +0x130
    unsigned long long _touchCancelled; // +0x138
    long long _lastMoveTimestampNs; // +0x140
    long long _lastUpGapNs; // +0x148
    long long _lastClockOffsetNs; // +0x150
    NSMutableArray * _touchTrace; // +0x158
    long long _maxDownDeliveryAgeUs; // +0x160
    NSMapTable * _downSnapshots; // +0x168
    unsigned int _windowMoves; // +0x170
    unsigned int _cancelLogsWritten; // +0x174
    unordered_map<const void *, int, std::hash<const void *>, std::equal_to<const void *>, std::allocator<std::pair<const void *const, int>>> _pointerIds; // +0x178
    unsigned int _surfaceGen; // +0x1a0
    int _nextPointerId; // +0x1a4
    int _engineId; // +0x1a8
    unsigned int _appUuid; // +0x1ac
    unsigned long long _runtimeToken; // +0x1b0
    unsigned long long _callId; // +0x1b8
    unsigned long long _activePageId; // +0x1c0
    WxpayLaunchPresentation * _launchPresentation; // +0x1c8
    BOOL _shown; // +0x1d0
    BOOL _foreground; // +0x1d1
    BOOL _onScreen; // +0x1d2
    BOOL _childCovered; // +0x1d3
    BOOL _hostOccluded; // +0x1d4
    BOOL _coverSuspended; // +0x1d5
    BOOL _keyboardRequested; // +0x1d6
    unsigned long long _keyboardRestoreGeneration; // +0x1d8
    long long _liteAppVisibilityPublished; // +0x1e0
    BOOL _contentReady; // +0x1e8
    unsigned long long _accessibilityPresentationId; // +0x1f0
    BOOL _storeStartDispatched; // +0x1f8
    BOOL _closed; // +0x1f9
    BOOL _pageCreatedNotified; // +0x1fa
    BOOL _started; // +0x1fb
    BOOL _waitingForViewPreload; // +0x1fc
    NSDictionary * _initialStoreData; // +0x200
    long long _viewEvalSpan; // +0x208
    long long _viewEvalBeganMs; // +0x210
    WxpayKitFrameWindow * _frameWindow; // +0x218
    WxpayFrameStallPolicy * _frameStallPolicy; // +0x220
    BOOL _releasingForTeardown; // +0x228
    BOOL _preloadedViewOwned; // +0x229
    BOOL _preloadedStoreOwned; // +0x22a
    BOOL _keepScreenOn; // +0x22b
    BOOL _screenshotEnabled; // +0x22c
    BOOL _lastDarkMode; // +0x22d
    BOOL _lastBoldText; // +0x22e
    BOOL _lastMultiWindow; // +0x22f
    double _lastFontScale; // +0x230
    double _lastKeyboardInset; // +0x238
    CGRect _keyboardFrameInScreen; // +0x240
    KeyboardAnimation _keyboardHideAnimation; // +0x260
    UIView * _keyboardCurveProbe; // +0x308
    CGRect _hostedFrameInWindow; // +0x310
    CADisplayLink * _hostedKeyboardWatch; // +0x330
    BOOL _hostedKeyboardReported; // +0x338
    BOOL _hostedKeyboardVisible; // +0x339
    double _hostedKeyboardHeight; // +0x340
    double _hostedKeyboardCovered; // +0x348
    NSString * _lastLanguageCode; // +0x350
    NSString * _lastRegionCode; // +0x358
    NSString * _lastReadinessDiagnostic; // +0x360
    NSString * _appID; // +0x368
    NSString * _route; // +0x370
    NSString * _scene; // +0x378
    NSString * _query; // +0x380
    NSString * _sessionId; // +0x388
    NSString * _packagePath; // +0x390
    WxpayTextInputAdapter * _textInput; // +0x398
    WxpayTextSelectionController * _selectionControls; // +0x3a0
    SceneKey _selectionToolbarScene; // +0x3a8
    id <WxpaySecureInputSurface> _secureInputSurface; // +0x3c0
    UIInputView * _secureInputWrapper; // +0x3c8
    WxpayCustomKeyboardView * _customKeyboard; // +0x3d0
    BOOL _keyboardDarkModeDisabled; // +0x3d8
    BOOL _inputAcceptsNewline; // +0x3d9
    UIView * _capturePrivacyOverlay; // +0x3e0
    NSMutableDictionary * _semanticElementsByNodeId; // +0x3e8
    mutex _inspectorMutex; // +0x3f0
    InspectedScene _inspectorScene; // +0x430
    unsigned long long _inspectorToken; // +0x490
    SceneKey _inputScene; // +0x498
    unsigned long long _inputGeneration; // +0x4b0
    unsigned long long _inputSequence; // +0x4b8
    shared_ptr<wxpay_luggage::SelfRenderRuntime> _runtime; // +0x4c0
    WxpayPlatformUiCoordinator * _platformUi; // +0x4d0
    WxpayWebViewHost * _webViews; // +0x4d8
    shared_ptr<wxpay_luggage::SkiaResourceService> _resourceService; // +0x4e0
    shared_ptr<wxpay_luggage::SkiaScenePainter> _painter; // +0x4f0
    WxpayPagEnginePort * _pagViews; // +0x500
    shared_ptr<std::atomic<double>> _pagPixelRatio; // +0x508
    shared_ptr<wxpaykit::LvUiCallbackBridge> _uiCallback; // +0x518
    unique_ptr<(anonymous namespace)::IOSDevToolsHostDelegate, std::default_delete<(anonymous namespace)::IOSDevToolsHostDelegate>> _devToolsDelegate; // +0x528
    shared_ptr<wxpay_luggage::DevToolsHostBinding> _devTools; // +0x530
    UITextField * _devToolsSearchField; // +0x540
    BOOL _embeddedInHostView; // +0x548
    long long _frameBudget; // +0x550
    id <WxpayRenderViewDelegate> _delegate; // +0x558
    id /* block */ _devToolsGuideShownHandler; // +0x560
    id /* block */ _hostedKeyboardHandler; // +0x568
}
+ (Class)layerClass;
+ (void)applyHostFontScale:(double)arg1;
+ (BOOL)prepareHostCallbacksWithError:(id *)arg1;
+ (BOOL)prepareRuntimeWithBaseLibPath:(id)arg1 engineRoot:(id)arg2 error:(id *)arg3;
+ (void)shutdownRuntimeWithCompletion:(id /* block */)arg1;
+ (long long)releaseRuntimeForAccountSwitch;
+ (void)installEngineLog;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)ensureRendererForCall:(unsigned long long)arg1 appId:(id)arg2 scene:(id)arg3;
- (void)preparePayLoadingForCall:(unsigned long long)arg1 appId:(id)arg2 scene:(id)arg3 options:(id)arg4;
- (void)dispatchPayLoadingCommand:(long long)arg1 options:(id)arg2 timeoutMs:(long long)arg3;
- (BOOL)isPayLoadingBlocking;
- (BOOL)startLiteAppWithAppID:(id)arg1 route:(id)arg2 query:(id)arg3 sessionId:(id)arg4 scene:(id)arg5 callId:(unsigned long long)arg6 packagePath:(id)arg7 baseLibPath:(id)arg8 engineRoot:(id)arg9 preloadStore:(BOOL)arg10 preloadView:(BOOL)arg11 storeAliveSeconds:(long long)arg12 launchPresentation:(id)arg13 initialStoreData:(id)arg14 error:(id *)arg15;
- (void)showPreparedLiteApp;
- (void)completeViewPreloadForRequestedAppUuid:(unsigned int)arg1 realAppUuid:(unsigned int)arg2;
- (void)viewPreloadBecameReadyForAppUuid:(unsigned int)arg1 appID:(id)arg2 page:(id)arg3 pageID:(unsigned long long)arg4;
- (void)injectInitialStoreData;
- (void)endViewEvalWithCode:(id)arg1;
- (BOOL)ownsAppID:(id)arg1;
- (BOOL)isOpenInSession:(id)arg1;
- (void)failViewPreloadForAppID:(id)arg1 page:(id)arg2;
- (void)stopLiteApp;
- (double)beginExitPresentation;
- (void)beginSceneExitWithDurationMs:(unsigned int)arg1 motion:(long long)arg2;
- (BOOL)isSceneExiting;
- (BOOL)handleLiteAppBack;
- (BOOL)navigateBackPage;
- (void)showPayLoading:(BOOL)arg1 style:(long long)arg2 option:(id)arg3;
- (void)callPlatformServiceMethod:(id)arg1 pageID:(unsigned long long)arg2 sourceType:(int)arg3 payload:(id)arg4 completion:(id /* block */)arg5;
- (id)platformPayloadForCommand:(int)arg1 paramJSON:(id)arg2;
- (void)reportUnsupportedPlatformCommand:(int)arg1 reason:(id)arg2;
- (void)handlePlatformCommand:(int)arg1 paramJSON:(id)arg2;
- (id)platformCommandResult:(int)arg1 paramJSON:(id)arg2;
- (void)handlePlatformCommand:(int)arg1 paramJSON:(id)arg2 pageID:(unsigned long long)arg3 sourceType:(int)arg4 completion:(id /* block */)arg5;
- (void)onUserDidTakeScreenshot:(id)arg1;
- (void)onScreenCaptureChanged:(id)arg1;
- (void)updateCapturePrivacyOverlay;
- (WindowMetrics)currentMetrics;
- (void)publishKeyboardInsetToEngine;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (CGSize)currentScreenSize;
- (BOOL)isHostedInMultiWindow;
- (id)currentPlatformEnvironment;
- (id)updatePlatformEnvironmentAndNotify:(BOOL)arg1;
- (long long)keyboardInterfaceStyle;
- (void)applyKeyboardAppearance;
- (void)onPlatformEnvironmentChanged:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)hostConfigurationDidChangeWithCauses:(unsigned long long)arg1;
- (void)updateEngineMetricsWithCauses:(unsigned long long)arg1;
- (void)didMoveToWindow;
- (void)onFramePresented;
- (void)requestSceneObservation;
- (void)observeSceneWithTicket:(unsigned long long)arg1;
- (void)applySceneStats:(const Stats *)arg1 semantics:(shared_ptr<wxpay_luggage::SemanticsSnapshot>)arg2 input:(const InputStats *)arg3;
- (void)observeFrameCounters:(const Stats *)arg1;
- (void)resetFramePipeline:(id)arg1;
- (void)reportFrameStall;
- (void)reportSurfaceLost:(id)arg1;
- (void)installDisplayLinkIfNeeded;
- (void)recordTouchTrace:(const PointerEvent *)arg1 deliveryAgeUs:(long long)arg2;
- (void)dispatchTouches:(id)arg1 event:(id)arg2 phase:(unsigned char)arg3 remove:(BOOL)arg4;
- (void)updateInteractionCadence;
- (void)rememberTouchesDown:(id)arg1;
- (void)forgetTouchesDown:(id)arg1;
- (void)logTouchesCancelled:(id)arg1 event:(id)arg2;
- (void)forwardEmbeddedPointer:(int)arg1 phase:(long long)arg2 point:(CGPoint)arg3;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onHostForeground;
- (void)onHostBackground;
- (void)publishLiteAppVisibility;
- (void)syncCoverSuspension;
- (void)restoreKeyboardAfterCover;
- (void)onHostTrimMemory;
- (void)updateLiteAppLifecycleSnapshot:(struct)arg1;
- (void)updateLiteAppWindowSnapshot:(struct)arg1;
- (void)notifyLiteAppScreenshot;
- (void)publishGlobalEvent:(id)arg1 parameter:(id)arg2;
- (void)publishGlobalEvent:(id)arg1 pageId:(unsigned long long)arg2 parameter:(id)arg3;
- (void)publishGlobalEventToAllPages:(id)arg1 parameter:(id)arg2;
- (void)dispatchHostStoreAction:(id)arg1 appId:(id)arg2 paramsJSON:(id)arg3;
- (void)sendStoreResultToPage:(unsigned long long)arg1 callbackId:(int)arg2 type:(id)arg3 resultJSON:(id)arg4;
- (void)notifyLiteAppOccluded:(BOOL)arg1;
- (void)updateLiteAppScreenCaptured:(BOOL)arg1;
- (void)notifyPageCreated:(BOOL)arg1 pageId:(unsigned long long)arg2;
- (long long)returnKeyTypeForAction:(unsigned char)arg1;
- (id)secureInputRequestForTarget:(const void *)arg1;
- (void)handlePlatformTextInputCommand:(const void *)arg1;
- (void)handleSelectionGeometry:(WxpayEditableSelectionGeometry)arg1 scene:(SceneKey)arg2;
- (void)handleSelectionInteraction:(const EditableSelectionInteraction *)arg1;
- (void)handleTextCommandForGeneration:(unsigned long long)arg1 kind:(long long)arg2 payload:(id)arg3;
- (void)onKeyboardFrame:(id)arg1;
- (void)applyKeyboardOcclusion;
- (void)applyKeyboardOcclusionFromNotification:(id)arg1;
- (void)onKeyboardHidden:(id)arg1;
- (KeyboardAnimation)keyboardAnimationForNotification:(id)arg1;
- (void)reportHostedKeyboardVisible:(BOOL)arg1 height:(double)arg2 covered:(double)arg3;
- (void)setHostedKeyboardWatchRunning:(BOOL)arg1;
- (void)onHostedKeyboardWatch:(id)arg1;
- (id)capabilityContextForAppId:(id)arg1 pageId:(unsigned long long)arg2;
- (id)encodedJsApiEnvelope:(id)arg1;
- (id)encodedModuleValue:(id)arg1 data:(id)arg2;
- (void)routeJsApiForAppId:(id)arg1 pageId:(unsigned long long)arg2 method:(id)arg3 paramJSON:(id)arg4 callbackId:(long long)arg5 sourceType:(int)arg6;
- (id)routeDynamicModuleForAppId:(id)arg1 pageId:(unsigned long long)arg2 module:(id)arg3 method:(id)arg4 paramJSON:(id)arg5 callbackId:(long long)arg6 sourceType:(int)arg7;
- (BOOL)routeStoreAction:(id)arg1 dataJSON:(id)arg2 instanceId:(unsigned long long)arg3 callbackId:(int)arg4 destinationAppID:(id)arg5;
- (void)evaluateContentReadiness:(const Stats *)arg1 semantics:(shared_ptr<wxpay_luggage::SemanticsSnapshot>)arg2;
- (void)devToolsSearchFocusChanged:(BOOL)arg1 query:(id)arg2;
- (void)devToolsSearchTextChanged:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)devToolsCopyText:(id)arg1;
- (void)devToolsPassThroughGuideShown;
- (BOOL)configureDevToolsEnabled:(BOOL)arg1 label:(id)arg2 passThroughGuideAvailable:(BOOL)arg3 appUuid:(unsigned long long)arg4;
- (void)invalidateDevTools;
- (BOOL)dispatchSemanticAction:(unsigned int)arg1 node:(unsigned long long)arg2 scene:(SceneKey)arg3 revision:(unsigned long long)arg4;
- (void)rebuildAccessibilityElements:(shared_ptr<wxpay_luggage::SemanticsSnapshot>)arg1;
- (void)setOnScreen:(BOOL)arg1;
- (void)setCoveredByChild:(BOOL)arg1;
- (BOOL)controllerVisible;
- (void)refreshInspectorForeground;
- (BOOL)isSceneOnScreen;
- (void)publishInspectorSceneWithSemantics:(shared_ptr<const wxpay_luggage::SemanticsSnapshot>)arg1;
- (BOOL)inspectScene:(void *)arg1;
- (BOOL)accessibilityPerformEscape;
- (id)diagnosticStats;
- (long long)frameBudget;
- (void)setFrameBudget:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)devToolsGuideShownHandler;
- (void)setDevToolsGuideShownHandler:(id /* block */)arg1;
- (id /* block */)hostedKeyboardHandler;
- (void)setHostedKeyboardHandler:(id /* block */)arg1;
- (BOOL)embeddedInHostView;
- (void)setEmbeddedInHostView:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
