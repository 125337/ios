@interface MBJITRuntime : MBRuntime <JITRuntimeDelegate, JITRuntimeJsApiHandlerDelegate, JITRuntimeDataTransferDelegate>
{
    BOOL _isWKTerminated; // +0x8
    JITRuntime * _jitRuntime; // +0x10
    JITRuntimeView * _runtimeView; // +0x18
    NSMutableDictionary * _dicHandlers; // +0x20
    NSMutableDictionary * _extJsApiCallbackResults; // +0x28
    NSMutableSet * _extJsApiAsyncCallbacks; // +0x30
    NSString * _fsScheme; // +0x38
}
- (id)init;
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
- (void)noitfyCanvasCreated:(unsigned int)arg1;
- (void)onLoad:(id)arg1;
- (void)injectLibs;
- (void)onTerminate;
- (void)invokeJsApiCallback:(unsigned int)arg1 result:(id)arg2 completion:(id /* block */)arg3;
- (void)processInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (void)onXHRRequest:(id)arg1;
- (void)endWithHandler:(id)arg1 result:(id)arg2 callback:(id)arg3;
- (id)createJSObject:(id)arg1;
- (void)runCodeInJsThread:(id /* block */)arg1;
- (void)runCodeInJsThreadSync:(id /* block */)arg1;
- (id)getFileData:(id)arg1;
- (CGRect)getFrame;
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
- (void).cxx_destruct;
@end
