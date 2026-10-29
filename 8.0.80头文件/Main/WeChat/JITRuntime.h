@interface JITRuntime : NSObject <MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreJSStuffDelegate, JITRuntimeViewDelegate>
{
    shared_ptr<magicbrush::MagicBrushCore> _nativeRender; // +0x8
    mutex _nativeRenderMutex; // +0x18
    BOOL _enableThread; // +0x58
    BOOL _enableNativeRender; // +0x59
    BOOL _enableSuspendAllMediaWhenBackground; // +0x5a
    BOOL _enableCmdbufferCanvas; // +0x5b
    BOOL _isBackground; // +0x5c
    BOOL _enableEvaluateWithURL; // +0x5d
    BOOL _hasSetEnabledThread; // +0x5e
    BOOL _jsThreadStopped; // +0x5f
    BOOL _runtimeDestroyed; // +0x60
    BOOL _enableDebug; // +0x61
    int _nativeRenderFrameCaptureMode; // +0x64
    int _mainCanvasType; // +0x68
    JITRuntimeView * _runtimeView; // +0x70
    JITRuntimeView * _powerSavingRuntimeView; // +0x78
    JITRuntimeJsApiHandler * _jsApiHandler; // +0x80
    JITRuntimeNativeBufferMgr * _nativeBufferMgr; // +0x88
    NSString * _baseUrl; // +0x90
    id <JITRuntimeDelegate> _delegate; // +0x98
    id <JITRuntimeDataTransferDelegate> _dataTransferDelegate; // +0xa0
    id <JITRuntimeJsApiHandlerDelegate> _jsApiDelegate; // +0xa8
    id <JITRuntimeNativeRenderDelegate> _nativeRenderDelegate; // +0xb0
    id <JITRuntimeBindingDelegate> _bindingDelegate; // +0xb8
    NSThread * _jsThread; // +0xc0
    unsigned long long _jitRuntimeViewSizeMinifyMode; // +0xc8
    long long _enableParallelShaderCompile; // +0xd0
    JITBindingState * _bindingState; // +0xd8
    NSURLCache * _urlCache; // +0xe0
    NSMutableDictionary * _nativeRenderCanvasMap; // +0xe8
    NSMutableDictionary * _debugResources; // +0xf0
    NSMutableDictionary * _jsapiWorkerMap; // +0xf8
    NSString * _WX_XHR_JSAPI_COMMAND_BUFFER; // +0x100
    NSString * _WX_GET_BUFFER; // +0x108
    NSString * _WX_SUBCONTEXT_FRAME; // +0x110
    NSString * _WX_MAGICBRUSH_JS; // +0x118
    NSString * _WX_WORKER_LIB; // +0x120
}
+ (id)resourceBundle;
+ (id)getBundleData:(id)arg1;
- (void)createWorker:(id)arg1 callback:(id /* block */)arg2;
- (BOOL)destroyWorker:(id)arg1;
- (void)cleanupWorkers;
- (BOOL)runCodeInWorker:(int)arg1 runCodeBlock:(id /* block */)arg2;
- (shared_ptr<magicbrush::MagicBrushCore>)nativeRenderForWorker:(int)arg1;
- (id)nativeBufferMgrForWorker:(int)arg1;
- (id)jsApiCallBackResultForWorker:(int)arg1;
- (id)jsApiUseBase64ForWorker:(int)arg1;
- (void)startThreadIfNeeded;
- (void)stopThread;
- (void)realRunCodeInJsThread:(id /* block */)arg1;
- (BOOL)runCodeInJsThreadImpl:(id /* block */)arg1 sync:(BOOL)arg2;
- (void)runThread:(id)arg1;
- (void)startNativeRenderIfNeeded;
- (void)destroyNativeRender;
- (id)requestScreenCanvasDelegateFor:(shared_ptr<magicbrush::MagicBrushCore>)arg1 workerId:(int)arg2;
- (void)onScreenCanvasCreated:(int)arg1 externalId:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasGotContext:(int)arg1 contextType:(int)arg2;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onLoadData:(id)arg1 withCallback:(id /* block */)arg2;
- (id)onLoadDataSync:(id)arg1;
- (void)onJsEventSend:(id)arg1 data:(id)arg2;
- (shared_ptr<magicbrush::MagicBrushCore>)nativeRender;
- (void)setNativeRender:(shared_ptr<magicbrush::MagicBrushCore>)arg1;
- (id)initWithBaseUrl:(id)arg1;
- (void)dealloc;
- (void)destroyRuntime;
- (void)onRuntimeDestroy;
- (BOOL)runCodeInJsThread:(id /* block */)arg1;
- (BOOL)runCodeInJsThreadSync:(id /* block */)arg1;
- (id)createRuntimeViewWithFrame:(CGRect)arg1 config:(id)arg2;
- (id)createPowerSavingRuntimeViewWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)usePowerSavingRuntimeView:(BOOL)arg1;
- (id)loadHTMLString:(id)arg1;
- (id)loadPowerSavingHTMLString:(id)arg1;
- (id)loadData:(id)arg1 MIMEType:(id)arg2;
- (void)loadCommonHTML:(BOOL)arg1;
- (void)evaluate:(id)arg1 handler:(id /* block */)arg2;
- (void)evaluate:(id)arg1 handler:(id /* block */)arg2 jitRuntimeView:(id)arg3;
- (void)evaluate:(id)arg1 pendingIfNotLoaded:(BOOL)arg2 handler:(id /* block */)arg3 jitRuntimeView:(id)arg4;
- (void)evaluateInvoker:(id)arg1 pendingIfNotLoaded:(BOOL)arg2 jitRuntimeView:(id)arg3;
- (void)setSyncJsApi:(id)arg1 fsPrefix:(id)arg2;
- (void)evaluate:(id)arg1 pendingIfNotLoaded:(BOOL)arg2 handler:(id /* block */)arg3;
- (void)evaluateInvoker:(id)arg1 pendingIfNotLoaded:(BOOL)arg2;
- (void)setJsApiDelegate:(id)arg1;
- (void)notifyBackgroundState:(BOOL)arg1;
- (void)onLoad:(id)arg1;
- (void)onTerminate;
- (void)onPostMessage:(id)arg1 body:(id)arg2;
- (void)onPrompt:(id)arg1 defaultText:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onAlertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onXHRRequest:(id)arg1;
- (void)realOnXHRRequest:(id)arg1;
- (void)setEnableNativeRender:(BOOL)arg1;
- (void)setEnableThread:(BOOL)arg1;
- (void)setDebugResourceData:(id)arg1 forResourceName:(id)arg2;
- (id)debugResourceDataForName:(id)arg1;
- (void)fixLongPressLoupe;
- (void)jitTriggerGC;
- (void)jitSimulateFullGC;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateLowMemory;
- (void)jitDumpGCHeap;
- (unsigned int)getJITLiteMode;
- (void)downloadImageWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadImageWithURL:(id)arg1 headers:(id)arg2 completion:(id /* block */)arg3;
- (void)clearImageCache;
- (id)bindingState;
- (void)setNativeRenderCanvasStyle:(int)arg1 x:(float)arg2 y:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(int)arg6;
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (id)powerSavingRuntimeView;
- (void)setPowerSavingRuntimeView:(id)arg1;
- (id)jsApiHandler;
- (void)setJsApiHandler:(id)arg1;
- (id)nativeBufferMgr;
- (void)setNativeBufferMgr:(id)arg1;
- (id)baseUrl;
- (void)setBaseUrl:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataTransferDelegate;
- (void)setDataTransferDelegate:(id)arg1;
- (id)jsApiDelegate;
- (id)nativeRenderDelegate;
- (void)setNativeRenderDelegate:(id)arg1;
- (id)bindingDelegate;
- (void)setBindingDelegate:(id)arg1;
- (id)jsThread;
- (void)setJsThread:(id)arg1;
- (BOOL)enableThread;
- (int)nativeRenderFrameCaptureMode;
- (void)setNativeRenderFrameCaptureMode:(int)arg1;
- (BOOL)enableNativeRender;
- (unsigned long long)jitRuntimeViewSizeMinifyMode;
- (void)setJitRuntimeViewSizeMinifyMode:(unsigned long long)arg1;
- (BOOL)enableSuspendAllMediaWhenBackground;
- (void)setEnableSuspendAllMediaWhenBackground:(BOOL)arg1;
- (long long)enableParallelShaderCompile;
- (void)setEnableParallelShaderCompile:(long long)arg1;
- (BOOL)enableCmdbufferCanvas;
- (void)setEnableCmdbufferCanvas:(BOOL)arg1;
- (int)mainCanvasType;
- (void)setMainCanvasType:(int)arg1;
- (BOOL)isBackground;
- (void)setIsBackground:(BOOL)arg1;
- (BOOL)enableEvaluateWithURL;
- (void)setEnableEvaluateWithURL:(BOOL)arg1;
- (void)setBindingState:(id)arg1;
- (id)urlCache;
- (void)setUrlCache:(id)arg1;
- (BOOL)hasSetEnabledThread;
- (void)setHasSetEnabledThread:(BOOL)arg1;
- (BOOL)jsThreadStopped;
- (void)setJsThreadStopped:(BOOL)arg1;
- (BOOL)runtimeDestroyed;
- (void)setRuntimeDestroyed:(BOOL)arg1;
- (id)nativeRenderCanvasMap;
- (void)setNativeRenderCanvasMap:(id)arg1;
- (BOOL)enableDebug;
- (void)setEnableDebug:(BOOL)arg1;
- (id)debugResources;
- (void)setDebugResources:(id)arg1;
- (id)jsapiWorkerMap;
- (void)setJsapiWorkerMap:(id)arg1;
- (id)WX_XHR_JSAPI_COMMAND_BUFFER;
- (void)setWX_XHR_JSAPI_COMMAND_BUFFER:(id)arg1;
- (id)WX_GET_BUFFER;
- (void)setWX_GET_BUFFER:(id)arg1;
- (id)WX_SUBCONTEXT_FRAME;
- (void)setWX_SUBCONTEXT_FRAME:(id)arg1;
- (id)WX_MAGICBRUSH_JS;
- (void)setWX_MAGICBRUSH_JS:(id)arg1;
- (id)WX_WORKER_LIB;
- (void)setWX_WORKER_LIB:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
