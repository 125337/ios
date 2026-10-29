@interface MBJITRuntime : MBRuntime <JITRuntimeDelegate, JITRuntimeJsApiHandlerDelegate, JITRuntimeDataTransferDelegate, JITRuntimeNativeRenderDelegate, MagicBrushCoreScreenCanvasDelegate>
{
    BOOL _isWKTerminated; // +0x8
    BOOL _enableJitNativeRender; // +0x9
    JITRuntime * _jitRuntime; // +0x10
    JITRuntimeView * _runtimeView; // +0x18
    NSMutableDictionary * _dicHandlers; // +0x20
    NSMutableDictionary * _extJsApiCallbackResults; // +0x28
    NSMutableSet * _extJsApiAsyncCallbacks; // +0x30
    NSString * _fsScheme; // +0x38
    NSString * _COMMON_LIB_PATH; // +0x40
    NSMutableDictionary * _mbViewSet; // +0x48
    NSMutableDictionary * _windowDelegateSet; // +0x50
    NSString * _proxyRequestScheme; // +0x58
    NSString * _proxyResultScheme; // +0x60
    NSMutableDictionary * _proxyPendingDict; // +0x68
}
- (id)init;
- (void)mb_applyJITDebugResources;
- (id)createView:(CGRect)arg1 config:(id)arg2;
- (void)destroyRuntime;
- (void)pause;
- (void)resume;
- (id)createObject;
- (id)createObject:(id)arg1;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2;
- (void)evaluateScript:(id)arg1 sourceURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)onEventFinish:(id)arg1 param:(id)arg2;
- (void)endWithResult:(unsigned long long)arg1 result:(id)arg2;
- (void)onLoad:(id)arg1 jitRuntimeView:(id)arg2;
- (id)collectLibs;
- (void)onTerminate;
- (void)onBatchReport:(id)arg1;
- (void)onProfilerFileGenerated:(id)arg1 type:(id)arg2;
- (void)onScreenCanvasCreated:(int)arg1 externalId:(int)arg2;
- (void)onScreenCanvasStyleChange:(int)arg1 top:(float)arg2 left:(float)arg3 width:(float)arg4 height:(float)arg5 zIndex:(unsigned int)arg6;
- (void)onScreenCanvasSetTouchableRects:(int)arg1 left:(const float *)arg2 top:(const float *)arg3 width:(const float *)arg4 height:(const float *)arg5 count:(unsigned int)arg6;
- (void)onScreenCanvasRemove:(int)arg1;
- (void)onScreenCanvasFirstFrameRendered:(int)arg1;
- (id)getCanvasView:(int)arg1;
- (id)createViewInCanvas:(int)arg1;
- (void)invokeJsApiCallback:(unsigned int)arg1 workerId:(unsigned int)arg2 result:(id)arg3 completion:(id /* block */)arg4;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3 workerId:(unsigned int)arg4;
- (void)onAlertMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)onXHRRequest:(id)arg1;
- (long long)proxyTaskIdFromPath:(id)arg1 scheme:(id)arg2;
- (void)handleProxyRequest:(id)arg1;
- (void)fulfillProxy:(long long)arg1 data:(id)arg2 mime:(id)arg3;
- (void)handleProxyResult:(id)arg1;
- (id)createJSObject:(id)arg1;
- (void)runCodeInJsThread:(id /* block */)arg1;
- (void)runCodeInJsThreadSync:(id /* block */)arg1;
- (id)getFileData:(id)arg1;
- (CGRect)getFrame;
- (id)onRequestScreenCanvasDelegateFor:(shared_ptr<magicbrush::MagicBrushCore>)arg1 workerId:(int)arg2;
- (id)jitRuntime;
- (void)setJitRuntime:(id)arg1;
- (id)runtimeView;
- (void)setRuntimeView:(id)arg1;
- (id)dicHandlers;
- (void)setDicHandlers:(id)arg1;
- (BOOL)isWKTerminated;
- (void)setIsWKTerminated:(BOOL)arg1;
- (id)extJsApiCallbackResults;
- (void)setExtJsApiCallbackResults:(id)arg1;
- (id)extJsApiAsyncCallbacks;
- (void)setExtJsApiAsyncCallbacks:(id)arg1;
- (id)fsScheme;
- (void)setFsScheme:(id)arg1;
- (id)COMMON_LIB_PATH;
- (void)setCOMMON_LIB_PATH:(id)arg1;
- (BOOL)enableJitNativeRender;
- (void)setEnableJitNativeRender:(BOOL)arg1;
- (id)mbViewSet;
- (void)setMbViewSet:(id)arg1;
- (id)windowDelegateSet;
- (void)setWindowDelegateSet:(id)arg1;
- (id)proxyRequestScheme;
- (void)setProxyRequestScheme:(id)arg1;
- (id)proxyResultScheme;
- (void)setProxyResultScheme:(id)arg1;
- (id)proxyPendingDict;
- (void)setProxyPendingDict:(id)arg1;
- (void).cxx_destruct;
@end
