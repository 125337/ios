@interface JITRuntime : NSObject <MagicBrushCoreScreenCanvasDelegate, MagicBrushCoreResourceDelegate, MagicBrushCoreJSStuffDelegate, JITRuntimeViewDelegate>
{
    BOOL _enableThread; // +0x8
    BOOL _enableNativeRender; // +0x9
    BOOL _enableNativeRenderInjectStandaloneGameJITJS; // +0xa
    BOOL _enableJITRuntimeViewSizeZero; // +0xb
    BOOL _enableSuspendAllMediaWhenBackground; // +0xc
    BOOL _jitLoaded; // +0xd
    BOOL _hasSetEnabledThread; // +0xe
    BOOL _jsThreadStopped; // +0xf
    BOOL _enableDebug; // +0x10
    int _mainCanvasType; // +0x14
    JITRuntimeView * _runtimeView; // +0x18
    MagicBrushCore * _nativeRender; // +0x20
    JITRuntimeJsApiHandler * _jsApiHandler; // +0x28
    JITRuntimeNativeBufferMgr * _nativeBufferMgr; // +0x30
    NSString * _baseUrl; // +0x38
    id <JITRuntimeDelegate> _delegate; // +0x40
    id <JITRuntimeDataTransferDelegate> _dataTransferDelegate; // +0x48
    id <JITRuntimeJsApiHandlerDelegate> _jsApiDelegate; // +0x50
    id <JITRuntimeNativeRenderDelegate> _nativeRenderDelegate; // +0x58
    id <JITRuntimeBindingDelegate> _bindingDelegate; // +0x60
    unsigned long long _nativeRenderFrameCaptureMode; // +0x68
    long long _enableParallelShaderCompile; // +0x70
    JITBindingState * _bindingState; // +0x78
    NSURLCache * _urlCache; // +0x80
    NSThread * _jsThread; // +0x88
    NSMutableDictionary * _nativeRenderCanvasMap; // +0x90
    NSMutableArray * _prevInvokers; // +0x98
    NSMutableDictionary * _jsapiWorkerMap; // +0xa0
    NSString * _WX_XHR_JSAPI_COMMAND_BUFFER; // +0xa8
    NSString * _WX_GET_BUFFER; // +0xb0
    NSString * _WX_SUBCONTEXT_FRAME; // +0xb8
}
+ (id)getBundleData:(id)arg1;
- (void)createWorker:(id)arg1 callback:(id /* block */)arg2;
- (void)destroyWorker:(id)arg1;
- (void)runCodeInWorker:(int)arg1 runCodeBlock:(id /* block */)arg2;
- (void)startThreadIfNeeded;
- (void)stopThread;
- (BOOL)runCodeInJsThread:(id /* block */)arg1;
- (BOOL)runCodeInJsThreadSync:(id /* block */)arg1;
- (void)realRunCodeInJsThread:(id /* block */)arg1;
- (BOOL)runCodeInJsThreadImpl:(id /* block */)arg1 sync:(BOOL)arg2;
- (void)runThread:(id)arg1;
- (void)startNativeRenderIfNeeded;
- (void)destroyNativeRender;
- (void)onScreenCanvasCreated:(int)arg1;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasGotContext:(int)arg1 contextType:(int)arg2;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onJsEventSend:(id)arg1 data:(id)arg2;
- (id)initWithBaseUrl:(id)arg1;
- (void)dealloc;
- (void)destroyRuntime;
- (void)onRuntimeDestroy;
- (id)createRuntimeViewWithFrame:(CGRect)arg1 config:(id)arg2;
- (id)loadHTMLString:(id)arg1;
- (id)loadData:(id)arg1 MIMEType:(id)arg2;
- (void)loadCommonHTML:(BOOL)arg1;
- (void)evaluate:(id)arg1 handler:(id /* block */)arg2;
- (void)registerSyncJsApi:(id)arg1;
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
- (void)fixLongPressLoupe;
- (void)jitTriggerGC;
- (void)jitSimulateFullGC;
- (void)jitSimulateFullGCWithDeleteAllCode;
- (void)jitSimulateLowMemory;
- (void)jitDumpGCHeap;
- (unsigned int)getJITLiteMode;
- (void)downloadImageWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)clearImageCache;
- (id)bindingState;
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (id)nativeRender;
- (void)setNativeRender:(id)arg1;
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
- (BOOL)enableThread;
- (unsigned long long)nativeRenderFrameCaptureMode;
- (void)setNativeRenderFrameCaptureMode:(unsigned long long)arg1;
- (BOOL)enableNativeRender;
- (BOOL)enableNativeRenderInjectStandaloneGameJITJS;
- (void)setEnableNativeRenderInjectStandaloneGameJITJS:(BOOL)arg1;
- (BOOL)enableJITRuntimeViewSizeZero;
- (void)setEnableJITRuntimeViewSizeZero:(BOOL)arg1;
- (BOOL)enableSuspendAllMediaWhenBackground;
- (void)setEnableSuspendAllMediaWhenBackground:(BOOL)arg1;
- (long long)enableParallelShaderCompile;
- (void)setEnableParallelShaderCompile:(long long)arg1;
- (BOOL)jitLoaded;
- (void)setJitLoaded:(BOOL)arg1;
- (int)mainCanvasType;
- (void)setMainCanvasType:(int)arg1;
- (void)setBindingState:(id)arg1;
- (id)urlCache;
- (void)setUrlCache:(id)arg1;
- (BOOL)hasSetEnabledThread;
- (void)setHasSetEnabledThread:(BOOL)arg1;
- (id)jsThread;
- (void)setJsThread:(id)arg1;
- (BOOL)jsThreadStopped;
- (void)setJsThreadStopped:(BOOL)arg1;
- (id)nativeRenderCanvasMap;
- (void)setNativeRenderCanvasMap:(id)arg1;
- (id)prevInvokers;
- (void)setPrevInvokers:(id)arg1;
- (BOOL)enableDebug;
- (void)setEnableDebug:(BOOL)arg1;
- (id)jsapiWorkerMap;
- (void)setJsapiWorkerMap:(id)arg1;
- (id)WX_XHR_JSAPI_COMMAND_BUFFER;
- (void)setWX_XHR_JSAPI_COMMAND_BUFFER:(id)arg1;
- (id)WX_GET_BUFFER;
- (void)setWX_GET_BUFFER:(id)arg1;
- (id)WX_SUBCONTEXT_FRAME;
- (void)setWX_SUBCONTEXT_FRAME:(id)arg1;
- (void).cxx_destruct;
@end

