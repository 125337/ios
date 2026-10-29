@interface FlutterEngine : NSObject <FlutterIndirectScribbleDelegate, FlutterUndoManagerDelegate, FlutterTextInputDelegate, FlutterBinaryMessenger, FlutterTextureRegistry, FlutterViewEngineDelegate, FlutterPluginRegistry>
{
    shared_ptr<flutter::ThreadHost> _threadHost; // +0x8
    unique_ptr<flutter::Shell, std::default_delete<flutter::Shell>> _shell; // +0x18
    int _renderingApi; // +0x20
    shared_ptr<flutter::SamplingProfiler> _profiler; // +0x28
    FlutterBinaryMessengerRelay * _binaryMessenger; // +0x38
    FlutterTextureRegistryRelay * _textureRegistry; // +0x40
    id /* block */ _localeDelegate; // +0x48
    id /* block */ _anrReportCallback; // +0x50
    id /* block */ _onReportSlowRunnerCallback; // +0x58
    BOOL _disallowDeliverAppLifecycleInViewControllerLifecycle; // +0x60
    id /* block */ _requestPreRenderFinishedCallback; // +0x68
    id /* block */ _preRenderOffscreenCallback; // +0x70
    BOOL _preRenderOffscreenActive; // +0x78
    BOOL _enablePreRenderMetalLayer; // +0x79
    long long _maxFlutterMetalLayerBufferCount; // +0x80
    long long _qosChangeCallbackToken; // +0x88
    FlutterPreAttachTimingRecorder * _preAttachTimingRecorder; // +0x90
    BOOL _isGpuDisabled; // +0x98
    BOOL _allowHeadlessExecution; // +0x99
    BOOL _restorationEnabled; // +0x9a
    BOOL _enableEmbedderAPI; // +0x9b
    id <FlutterEngineDelegate> _engineDelegate; // +0xa0
    FlutterViewController * _viewController; // +0xa8
    FlutterMethodChannel * _localizationChannel; // +0xb0
    FlutterMethodChannel * _navigationChannel; // +0xb8
    FlutterMethodChannel * _restorationChannel; // +0xc0
    FlutterMethodChannel * _platformChannel; // +0xc8
    FlutterMethodChannel * _textInputChannel; // +0xd0
    FlutterBasicMessageChannel * _lifecycleChannel; // +0xd8
    FlutterBasicMessageChannel * _systemChannel; // +0xe0
    FlutterBasicMessageChannel * _settingsChannel; // +0xe8
    FlutterBasicMessageChannel * _keyEventChannel; // +0xf0
    FlutterBasicMessageChannel * _skiaChannel; // +0xf8
    FlutterBasicMessageChannel * _statChannel; // +0x100
    NSString * _isolateId; // +0x108
    FlutterDartProject * _dartProject; // +0x110
    NSString * _labelPrefix; // +0x118
    FlutterPlatformViewsController * _platformViewsController; // +0x120
    NSMutableDictionary * _pluginPublications; // +0x128
    NSMutableDictionary * _registrars; // +0x130
    NSString * _initialRoute; // +0x138
    id <NSObject> _flutterViewControllerWillDeallocObserver; // +0x140
    FlutterDartVMServicePublisher * _publisher; // +0x148
    FlutterConnectionCollection * _connections; // +0x150
    long long _nextTextureId; // +0x158
    FlutterPlatformPlugin * _platformPlugin; // +0x160
    FlutterTextInputPlugin * _textInputPlugin; // +0x168
    FlutterUndoManagerPlugin * _undoManagerPlugin; // +0x170
    FlutterSpellCheckPlugin * _spellCheckPlugin; // +0x178
    FlutterRestorationPlugin * _restorationPlugin; // +0x180
    FlutterMethodChannel * _platformViewsChannel; // +0x188
    FlutterMethodChannel * _undoManagerChannel; // +0x190
    FlutterMethodChannel * _scribbleChannel; // +0x198
    FlutterMethodChannel * _spellCheckChannel; // +0x1a0
    FlutterMethodChannel * _screenshotChannel; // +0x1a8
    struct _embedderAPI; // +0x1b0
}
+ (id)engineForIdentifier:(long long)arg1;
+ (BOOL)isProfilerEnabled;
+ (id)generateThreadLabel:(id)arg1;
+ (id)getDartSdkHash;
+ (void)setIgnoreThreadLoggingCallback:(void * *)arg1;
+ (void)setLookupSharedObjectCallback:(void * *)arg1;
+ (void)setMaxFlutterMetalLayerCount:(int)arg1;
+ (void)setMetalLayerReusePoolEnabled:(BOOL)arg1;
+ (void)setPerformanceQosLevel:(long long)arg1;
+ (long long)getPerformanceQosLevel;
+ (void)setAppForegroundState:(long long)arg1;
- (long long)engineIdentifier;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(BOOL)arg3;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(BOOL)arg3 restorationEnabled:(BOOL)arg4;
- (void)setUpLifecycleNotifications:(id)arg1;
- (void)recreatePlatformViewsController;
- (int)platformViewsRenderingAPI;
- (void)preCreateThreadMerger:(BOOL)arg1;
- (void)setDisableSemantics:(BOOL)arg1;
- (void)setFontShapeUseCoreText:(BOOL)arg1;
- (void)setUseCoreTextShape:(BOOL)arg1;
- (void)setAllowDeliverAppLifecycleInViewControllerLifecycle:(BOOL)arg1;
- (void)releaseInUIThread;
- (void)dealloc;
- (void *)shell;
- (void)updateViewportMetrics:(ViewportMetrics)arg1;
- (void)updateFlutterViewportMetrics:(struct)arg1;
- (void)dispatchPointerDataPacket:(unique_ptr<flutter::PointerDataPacket, std::default_delete<flutter::PointerDataPacket>>)arg1;
- (void)installFirstFrameCallback:(id /* block */)arg1;
- (void)enableSemantics:(BOOL)arg1 withFlags:(long long)arg2;
- (void)notifyViewCreated;
- (void)notifyViewDestroyed;
- (void *)platformView;
- (RefPtr<fml::TaskRunner>)platformTaskRunner;
- (RefPtr<fml::TaskRunner>)uiTaskRunner;
- (RefPtr<fml::TaskRunner>)rasterTaskRunner;
- (void)sendKeyEvent:(const struct *)arg1 callback:(void * *)arg2 userData:(void *)arg3;
- (void)ensureSemanticsEnabled;
- (void)setViewController:(id)arg1;
- (void)attachView;
- (void)setFlutterViewControllerWillDeallocObserver:(id)arg1;
- (void)notifyViewControllerDeallocated;
- (void)destroyContext:(BOOL)arg1;
- (void)markFlutterViewDraw;
- (void)releaseGPUResource;
- (void)checkLeak;
- (void)swapMemToFile:(id)arg1 reuseMmap:(BOOL)arg2 report:(BOOL)arg3;
- (void)swapMemFromFile:(id)arg1 reuseMmap:(BOOL)arg2 report:(BOOL)arg3;
- (id)vmServiceUrl;
- (void)resetChannels;
- (void)startProfiler;
- (void)setUpChannels;
- (void)maybeSetupPlatformViewChannels;
- (Screenshot)screenshot:(int)arg1 base64Encode:(BOOL)arg2;
- (void)launchEngine:(id)arg1 libraryURI:(id)arg2 entrypointArgs:(id)arg3;
- (void)setUpShell:(unique_ptr<flutter::Shell, std::default_delete<flutter::Shell>>)arg1 withVMServicePublication:(BOOL)arg2;
- (BOOL)createShell:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (void)updateDisplays;
- (BOOL)run;
- (BOOL)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2;
- (BOOL)runWithEntrypoint:(id)arg1;
- (BOOL)runWithEntrypoint:(id)arg1 initialRoute:(id)arg2;
- (BOOL)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3;
- (BOOL)runWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (void)notifyLowMemory;
- (void)reportMemoryUsage;
- (void)setAnrReportCallback:(id /* block */)arg1;
- (void)setSlowRunnerReportCallback:(id /* block */)arg1;
- (void)onReportAnr:(id)arg1 duration:(long long)arg2 phase:(id)arg3;
- (void)onReportSlowRunner:(id)arg1 duration:(long long)arg2 stackTraces:(id)arg3 phase:(id)arg4;
- (void)flutterTextInputView:(id)arg1 showKeyBoardWithConfig:(id)arg2;
- (void)flutterTextInputView:(id)arg1 hideKeyBoardWithConfig:(id)arg2;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3 withTag:(id)arg4;
- (void)flutterTextInputView:(id)arg1 updateEditingClient:(int)arg2 withDelta:(id)arg3;
- (void)flutterTextInputView:(id)arg1 updateFloatingCursor:(long long)arg2 withClient:(int)arg3 withPosition:(id)arg4;
- (void)flutterTextInputView:(id)arg1 performAction:(long long)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(id)arg1 showAutocorrectionPromptRectForStart:(unsigned long long)arg2 end:(unsigned long long)arg3 withClient:(int)arg4;
- (id)flutterTextInputView:(id)arg1 createNativeKeyboardView:(id)arg2;
- (void)flutterTextInputView:(id)arg1 willDismissEditMenuWithTextInputClient:(int)arg2;
- (void)flutterTextInputView:(id)arg1 shareSelectedText:(id)arg2;
- (void)flutterTextInputView:(id)arg1 searchWebWithSelectedText:(id)arg2;
- (void)flutterTextInputView:(id)arg1 lookUpSelectedText:(id)arg2;
- (void)flutterTextInputView:(id)arg1 showToolbar:(int)arg2;
- (void)flutterTextInputPlugin:(id)arg1 focusElement:(id)arg2 atPoint:(CGPoint)arg3 result:(id /* block */)arg4;
- (void)flutterTextInputPlugin:(id)arg1 requestElementsInRect:(CGRect)arg2 result:(id /* block */)arg3;
- (void)flutterTextInputViewScribbleInteractionBegan:(id)arg1;
- (void)flutterTextInputViewScribbleInteractionFinished:(id)arg1;
- (void)flutterTextInputView:(id)arg1 insertTextPlaceholderWithSize:(CGSize)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(id)arg1 removeTextPlaceholder:(int)arg2;
- (void)flutterTextInputView:(id)arg1 didResignFirstResponderWithTextInputClient:(int)arg2;
- (void)handleUndoWithDirection:(long long)arg1;
- (id)activeTextInputView;
- (id)undoManager;
- (Screenshot)takeScreenshot:(int)arg1 asBase64Encoded:(BOOL)arg2;
- (void)flutterViewAccessibilityDidCall;
- (id)binaryMessenger;
- (id)textureRegistry;
- (void)setBinaryMessenger:(id)arg1;
- (void)sendOnChannel:(id)arg1 message:(id)arg2;
- (void)sendOnChannel:(id)arg1 message:(id)arg2 binaryReply:(id /* block */)arg3;
- (id)makeBackgroundTaskQueue;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2;
- (long long)setMessageHandlerOnChannel:(id)arg1 binaryMessageHandler:(id /* block */)arg2 taskQueue:(id)arg3;
- (void)cleanUpConnection:(long long)arg1;
- (shared_ptr<flutter::PlatformMessageHandler>)platformMessageRouter;
- (void)setSharePlatformMessageRouter:(const void *)arg1;
- (long long)registerTexture:(id)arg1;
- (void)unregisterTexture:(long long)arg1;
- (void)textureFrameAvailable:(long long)arg1;
- (id)lookupKeyForAsset:(id)arg1;
- (id)lookupKeyForAsset:(id)arg1 fromPackage:(id)arg2;
- (id)pluginRegistry;
- (id)registrarForPlugin:(id)arg1;
- (BOOL)hasPlugin:(id)arg1;
- (id)valuePublishedByPlugin:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)flutterWillEnterForeground:(id)arg1;
- (void)flutterDidEnterBackground:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (void)setIsGpuDisabled:(BOOL)arg1;
- (void)setLocaleDelegate:(id /* block */)arg1;
- (void)onLocaleUpdated:(id)arg1;
- (void)waitForFirstFrameSync:(double)arg1 callback:(id /* block */)arg2;
- (void)waitForFirstFrame:(double)arg1 callback:(id /* block */)arg2;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(BOOL)arg5;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(BOOL)arg5 isolatedFontCollection:(BOOL)arg6;
- (const void *)threadHost;
- (id)project;
- (long long)uiTaskRunnerPtr;
- (void)callRequestPreRenderFinishedCallback;
- (void)requestPreRender:(id /* block */)arg1;
- (BOOL)enablePreRenderMetalLayer;
- (void)setEnablePreRenderMetalLayer:(BOOL)arg1;
- (long long)maxFlutterMetalLayerBufferCount;
- (void)setMaxFlutterMetalLayerBufferCount:(long long)arg1;
- (void)requestPreRenderWithOffscreenFrame:(CGSize)arg1 callback:(id /* block */)arg2;
- (void)requestPreRenderWithOffscreenFrame:(CGSize)arg1 timeoutMs:(long long)arg2 callback:(id /* block */)arg3;
- (void)_fireOffscreenPreRenderCallback:(BOOL)arg1;
- (void)removePreRenderCallback;
- (void)installPerformanceQosCallback;
- (void)removePerformanceQosCallback;
- (void)prewarmPlatformViewOverlays:(unsigned long long)arg1;
- (weak_ptr<flutter::VsyncWaiter>)getVsyncWaiter;
- (id)preAttachTimingRecorder;
- (void)recordStartupTiming:(id)arg1;
- (void)recordStartupTimingWithTimestamp:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)startStartupTimingDuration:(id)arg1;
- (void)endStartupTimingDuration:(id)arg1;
- (void)recordStartupTimingWithDelta:(id)arg1 deltaNanos:(long long)arg2;
- (void)transferPreAttachTimingToNative;
- (id)engineDelegate;
- (void)setEngineDelegate:(id)arg1;
- (id)viewController;
- (id)localizationChannel;
- (void)setLocalizationChannel:(id)arg1;
- (id)navigationChannel;
- (void)setNavigationChannel:(id)arg1;
- (id)restorationChannel;
- (void)setRestorationChannel:(id)arg1;
- (id)platformChannel;
- (void)setPlatformChannel:(id)arg1;
- (id)textInputChannel;
- (void)setTextInputChannel:(id)arg1;
- (id)lifecycleChannel;
- (void)setLifecycleChannel:(id)arg1;
- (id)systemChannel;
- (void)setSystemChannel:(id)arg1;
- (id)settingsChannel;
- (void)setSettingsChannel:(id)arg1;
- (id)keyEventChannel;
- (void)setKeyEventChannel:(id)arg1;
- (id)skiaChannel;
- (void)setSkiaChannel:(id)arg1;
- (id)statChannel;
- (void)setStatChannel:(id)arg1;
- (id)isolateId;
- (void)setIsolateId:(id)arg1;
- (BOOL)isGpuDisabled;
- (id)dartProject;
- (id)labelPrefix;
- (BOOL)allowHeadlessExecution;
- (BOOL)restorationEnabled;
- (id)platformViewsController;
- (void)setPlatformViewsController:(id)arg1;
- (id)pluginPublications;
- (id)registrars;
- (id)initialRoute;
- (void)setInitialRoute:(id)arg1;
- (id)flutterViewControllerWillDeallocObserver;
- (id)publisher;
- (void)setPublisher:(id)arg1;
- (id)connections;
- (void)setConnections:(id)arg1;
- (long long)nextTextureId;
- (void)setNextTextureId:(long long)arg1;
- (id)platformPlugin;
- (void)setPlatformPlugin:(id)arg1;
- (id)textInputPlugin;
- (void)setTextInputPlugin:(id)arg1;
- (id)undoManagerPlugin;
- (void)setUndoManagerPlugin:(id)arg1;
- (id)spellCheckPlugin;
- (void)setSpellCheckPlugin:(id)arg1;
- (id)restorationPlugin;
- (void)setRestorationPlugin:(id)arg1;
- (id)platformViewsChannel;
- (void)setPlatformViewsChannel:(id)arg1;
- (id)undoManagerChannel;
- (void)setUndoManagerChannel:(id)arg1;
- (id)scribbleChannel;
- (void)setScribbleChannel:(id)arg1;
- (id)spellCheckChannel;
- (void)setSpellCheckChannel:(id)arg1;
- (id)screenshotChannel;
- (void)setScreenshotChannel:(id)arg1;
- (BOOL)enableEmbedderAPI;
- (void)setEnableEmbedderAPI:(BOOL)arg1;
- (struct *)embedderAPI;
- (void)setEmbedderAPI:(struct *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
