@interface JITRuntimeWorker : NSObject
{
    shared_ptr<magicbrush::MagicBrushCore> _workerNativeRender; // +0x8
    mutex _workerNativeRenderMutex; // +0x18
    BOOL _threadStopped; // +0x58
    BOOL _workerDestroyed; // +0x59
    int _workerId; // +0x5c
    JITRuntimeNativeBufferMgr * _nativeBufferMgr; // +0x60
    NSThread * _thread; // +0x68
    JITRuntime * _runtime; // +0x70
    id /* block */ _finishBlock; // +0x78
    JITRuntimeWorkerWindowDelegate * _workerWindowDelegate; // +0x80
    NSMutableDictionary * _jsApiCallBackResult; // +0x88
    NSMutableDictionary * _jsApiUseBase64; // +0x90
}
- (shared_ptr<magicbrush::MagicBrushCore>)workerNativeRender;
- (void)setWorkerNativeRender:(shared_ptr<magicbrush::MagicBrushCore>)arg1;
- (id)initWithId:(int)arg1;
- (void)setup:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)destroy;
- (BOOL)runCodeInWorkerThread:(id /* block */)arg1;
- (BOOL)runCodeInWorkerThreadSync:(id /* block */)arg1;
- (void)realRunCodeInWorkerThread:(id /* block */)arg1;
- (BOOL)runCodeInWorkerThreadImpl:(id /* block */)arg1 sync:(BOOL)arg2;
- (void)runThread:(id)arg1;
- (void)ensureWorkerNativeRender;
- (void)doSetupWorkerNativeRender;
- (int)workerId;
- (id)nativeBufferMgr;
- (void)setNativeBufferMgr:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)threadStopped;
- (void)setThreadStopped:(BOOL)arg1;
- (BOOL)workerDestroyed;
- (void)setWorkerDestroyed:(BOOL)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id)workerWindowDelegate;
- (void)setWorkerWindowDelegate:(id)arg1;
- (id)jsApiCallBackResult;
- (void)setJsApiCallBackResult:(id)arg1;
- (id)jsApiUseBase64;
- (void)setJsApiUseBase64:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
