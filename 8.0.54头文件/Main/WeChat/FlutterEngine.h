@interface FlutterEngine : NSObject <FlutterIndirectScribbleDelegate, FlutterUndoManagerDelegate, FlutterTextInputDelegate, FlutterBinaryMessenger, FlutterTextureRegistry, FlutterViewEngineDelegate, FlutterPluginRegistry>
{
    scoped_nsobject<FlutterDartProject> _dartProject; // +0x8
    shared_ptr<flutter::ThreadHost> _threadHost; // +0x10
    unique_ptr<flutter::Shell, std::default_delete<flutter::Shell>> _shell; // +0x20
    NSString * _labelPrefix; // +0x28
    unique_ptr<fml::WeakNSObjectFactory<FlutterEngine>, std::default_delete<fml::WeakNSObjectFactory<FlutterEngine>>> _weakFactory; // +0x30
    WeakNSObject<FlutterViewController> _viewController; // +0x38
    scoped_nsobject<FlutterDartVMServicePublisher> _publisher; // +0x48
    shared_ptr<flutter::FlutterPlatformViewsController> _platformViewsController; // +0x50
    int _renderingApi; // +0x60
    shared_ptr<flutter::ProfilerMetricsIOS> _profiler_metrics; // +0x68
    shared_ptr<flutter::SamplingProfiler> _profiler; // +0x78
    scoped_nsobject<FlutterPlatformPlugin> _platformPlugin; // +0x88
    scoped_nsobject<FlutterTextInputPlugin> _textInputPlugin; // +0x90
    scoped_nsobject<FlutterUndoManagerPlugin> _undoManagerPlugin; // +0x98
    scoped_nsobject<FlutterSpellCheckPlugin> _spellCheckPlugin; // +0xa0
    scoped_nsobject<FlutterRestorationPlugin> _restorationPlugin; // +0xa8
    scoped_nsobject<FlutterMethodChannel> _localizationChannel; // +0xb0
    scoped_nsobject<FlutterMethodChannel> _navigationChannel; // +0xb8
    scoped_nsobject<FlutterMethodChannel> _restorationChannel; // +0xc0
    scoped_nsobject<FlutterMethodChannel> _platformChannel; // +0xc8
    scoped_nsobject<FlutterMethodChannel> _platformViewsChannel; // +0xd0
    scoped_nsobject<FlutterMethodChannel> _textInputChannel; // +0xd8
    scoped_nsobject<FlutterMethodChannel> _undoManagerChannel; // +0xe0
    scoped_nsobject<FlutterMethodChannel> _scribbleChannel; // +0xe8
    scoped_nsobject<FlutterMethodChannel> _spellCheckChannel; // +0xf0
    scoped_nsobject<FlutterBasicMessageChannel> _lifecycleChannel; // +0xf8
    scoped_nsobject<FlutterBasicMessageChannel> _systemChannel; // +0x100
    scoped_nsobject<FlutterBasicMessageChannel> _settingsChannel; // +0x108
    scoped_nsobject<FlutterBasicMessageChannel> _keyEventChannel; // +0x110
    scoped_nsobject<FlutterMethodChannel> _screenshotChannel; // +0x118
    ScopedTypeRef<NSString *(^)(), fml::internal::ScopedBlockTraits<NSString *(^)()>> _localeDelegate; // +0x120
    vector<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>, std::allocator<fml::ScopedTypeRef<void (^)(NSData *), fml::internal::ScopedBlockTraits<void (^)(NSData *)>>>> _dataReportHandlers; // +0x128
    scoped_nsobject<FlutterBasicMessageChannel> _skiaChannel; // +0x140
    scoped_nsobject<FlutterBasicMessageChannel> _statChannel; // +0x148
    id /* block */ _anrReportCallback; // +0x150
    id /* block */ _onReportSlowRunnerCallback; // +0x158
    long long _nextTextureId; // +0x160
    BOOL _allowHeadlessExecution; // +0x168
    BOOL _restorationEnabled; // +0x169
    FlutterBinaryMessengerRelay * _binaryMessenger; // +0x170
    FlutterTextureRegistryRelay * _textureRegistry; // +0x178
    unique_ptr<flutter::ConnectionCollection, std::default_delete<flutter::ConnectionCollection>> _connections; // +0x180
    BOOL _disallowDeliverAppLifecycleInViewControllerLifecycle; // +0x188
    ScopedTypeRef<void (^)(), fml::internal::ScopedBlockTraits<void (^)()>> _requestPreRenderFinishedCallback; // +0x190
    BOOL _isGpuDisabled; // +0x198
    BOOL _enableEmbedderAPI; // +0x199
    id <FlutterEngineDelegate> _engineDelegate; // +0x1a0
    NSString * _isolateId; // +0x1a8
    NSMutableDictionary * _pluginPublications; // +0x1b0
    NSMutableDictionary * _registrars; // +0x1b8
    NSString * _initialRoute; // +0x1c0
    id <NSObject> _flutterViewControllerWillDeallocObserver; // +0x1c8
    struct _embedderAPI; // +0x1d0
}
+ (BOOL)isProfilerEnabled;
+ (id)generateThreadLabel:(id)arg1;
+ (ThreadHost)makeThreadHost:(id)arg1 settings:(void *)arg2;
+ (id)getDartSdkHash;
+ (void)setIgnoreThreadLoggingCallback:(void * *)arg1;
+ (void)setLookupSharedObjectCallback:(void * *)arg1;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(BOOL)arg3;
- (id)initWithName:(id)arg1 project:(id)arg2 allowHeadlessExecution:(BOOL)arg3 restorationEnabled:(BOOL)arg4;
- (void)setUpSceneLifecycleNotifications:(id)arg1;
- (void)setUpApplicationLifecycleNotifications:(id)arg1;
- (void)recreatePlatformViewController;
- (int)platformViewsRenderingAPI;
- (void)preCreateThreadMerger;
- (void)setDisableSemantics:(BOOL)arg1;
- (void)setFontShapeUseCoreText:(BOOL)arg1;
- (void)setUseCoreTextShape:(BOOL)arg1;
- (void)setAllowDeliverAppLifecycleInViewControllerLifecycle:(BOOL)arg1;
- (void)releaseInUIThread;
- (void)dealloc;
- (void *)shell;
- (WeakNSObject<FlutterEngine>)getWeakNSObject;
- (void)updateViewportMetrics:(ViewportMetrics)arg1;
- (void)updateFlutterViewportMetrics:(struct)arg1;
- (void)dispatchPointerDataPacket:(unique_ptr<flutter::PointerDataPacket, std::default_delete<flutter::PointerDataPacket>>)arg1;
- (WeakPtr<flutter::PlatformView>)platformView;
- (void *)iosPlatformView;
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
- (id)viewController;
- (id)platformPlugin;
- (void *)platformViewsController;
- (id)textInputPlugin;
- (id)undoManagerPlugin;
- (id)restorationPlugin;
- (id)localizationChannel;
- (id)navigationChannel;
- (id)restorationChannel;
- (id)platformChannel;
- (id)textInputChannel;
- (id)undoManagerChannel;
- (id)scribbleChannel;
- (id)spellCheckChannel;
- (id)lifecycleChannel;
- (id)systemChannel;
- (id)settingsChannel;
- (id)keyEventChannel;
- (id)skiaChannel;
- (id)statChannel;
- (id)observatoryUrl;
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
- (void)addDataReportHandler:(id /* block */)arg1;
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
- (void)flutterTextInputView:(id)arg1 showToolbar:(int)arg2;
- (void)flutterTextInputPlugin:(id)arg1 focusElement:(id)arg2 atPoint:(CGPoint)arg3 result:(id /* block */)arg4;
- (void)flutterTextInputPlugin:(id)arg1 requestElementsInRect:(CGRect)arg2 result:(id /* block */)arg3;
- (void)flutterTextInputViewScribbleInteractionBegan:(id)arg1;
- (void)flutterTextInputViewScribbleInteractionFinished:(id)arg1;
- (void)flutterTextInputView:(id)arg1 insertTextPlaceholderWithSize:(CGSize)arg2 withClient:(int)arg3;
- (void)flutterTextInputView:(id)arg1 removeTextPlaceholder:(int)arg2;
- (void)flutterTextInputView:(id)arg1 didResignFirstResponderWithTextInputClient:(int)arg2;
- (void)flutterUndoManagerPlugin:(id)arg1 handleUndoWithDirection:(long long)arg2;
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
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)flutterWillEnterForeground:(id)arg1;
- (void)flutterDidEnterBackground:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (void)setIsGpuDisabled:(BOOL)arg1;
- (void)setLocaleDelegate:(id /* block */)arg1;
- (void)onLocaleUpdated:(id)arg1;
- (void)waitForFirstFrame:(double)arg1 callback:(id /* block */)arg2;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4;
- (id)spawnWithEntrypoint:(id)arg1 libraryURI:(id)arg2 initialRoute:(id)arg3 entrypointArgs:(id)arg4 sharedIsolateMode:(BOOL)arg5;
- (const void *)threadHost;
- (id)project;
- (BOOL)isUsingImpeller;
- (long long)uiTaskRunnerPtr;
- (void)callRequestPreRenderFinishedCallback;
- (void)requestPreRender:(id /* block */)arg1;
- (id)engineDelegate;
- (void)setEngineDelegate:(id)arg1;
- (id)isolateId;
- (void)setIsolateId:(id)arg1;
- (BOOL)isGpuDisabled;
- (id)pluginPublications;
- (id)registrars;
- (id)initialRoute;
- (void)setInitialRoute:(id)arg1;
- (id)flutterViewControllerWillDeallocObserver;
- (BOOL)enableEmbedderAPI;
- (void)setEnableEmbedderAPI:(BOOL)arg1;
- (struct *)embedderAPI;
- (void)setEmbedderAPI:(struct *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

