@interface MMWebJSContext : NSObject <WXWASMLogDelegate, WXFileLoaderDelegate>
{
    BOOL _isWasmInit; // +0x8
    JSContext * _jsContext; // +0x10
    NSObject<OS_dispatch_queue> * _workQueue; // +0x18
    NSThread * _subThread; // +0x20
    id <MMWebJSContextWasmDelegate> _wasmDelegate; // +0x28
    MMWebJsTimerHandler * _timerHandler; // +0x30
    WasmAdaptor * _wasmAdaptor; // +0x38
    id /* block */ _exceptionHandler; // +0x40
}
- (id)initWithJVM:(id)arg1 name:(id)arg2;
- (id)initWithJVM:(id)arg1 name:(id)arg2 workQueue:(id)arg3;
- (void)dealloc;
- (id)name;
- (id)description;
- (void)setWorkQueue:(id)arg1;
- (void)setSubThread:(id)arg1;
- (id)evaluateScript:(id)arg1;
- (id)evaluateScript:(id)arg1 withSourceURL:(id)arg2;
- (void)setExceptionHandler:(id /* block */)arg1;
- (void)enableWasm;
- (void)releaseWasm;
- (void)invalidAllTimers;
- (void)addExceptionHandler;
- (void)addConsoleLogHandler;
- (void)addTimerhandler;
- (void)logError:(id)arg1 target:(long long)arg2;
- (void)logInfo:(id)arg1 target:(long long)arg2;
- (void)logWarning:(id)arg1 target:(long long)arg2;
- (void)logDebug:(id)arg1 target:(long long)arg2;
- (id)getFileData:(id)arg1;
- (id)jsContext;
- (void)setJsContext:(id)arg1;
- (id)workQueue;
- (id)subThread;
- (id)wasmDelegate;
- (void)setWasmDelegate:(id)arg1;
- (id)timerHandler;
- (void)setTimerHandler:(id)arg1;
- (id)wasmAdaptor;
- (void)setWasmAdaptor:(id)arg1;
- (BOOL)isWasmInit;
- (void)setIsWasmInit:(BOOL)arg1;
- (id /* block */)exceptionHandler;
- (void).cxx_destruct;
@end

