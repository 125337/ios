@interface WAJSWorkFlow : WAJSNativeBufferBase <WXFileLoaderDelegate>
{
    BOOL _runningApi; // +0x8
    unsigned int _workerId; // +0xc
    unsigned int _subContextId; // +0x10
    NSString * _libWorkerType; // +0x18
    WAJSCoreService * _service; // +0x20
    NSArray * _apiList; // +0x28
    NSThread * _thread; // +0x30
    NSMutableDictionary * _timerObjs; // +0x38
    NSString * _lastJSError; // +0x40
    WasmAdaptor * _wasmAdaptor; // +0x48
    NSMutableDictionary * _subContexts; // +0x50
}
+ (id)getBundle;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3;
- (id)init:(id)arg1 workerId:(unsigned int)arg2 service:(id)arg3 isLibFile:(BOOL)arg4 isPreload:(BOOL)arg5;
- (void)runThread:(id)arg1;
- (void)sendErrorEvent:(id)arg1 stack:(id)arg2 contextId:(unsigned int)arg3;
- (void)initJSContext:(id)arg1 isLibFile:(BOOL)arg2 isPreload:(BOOL)arg3;
- (void)setUpWorkerContext;
- (void)sendExceptionError:(id)arg1 toContext:(id)arg2;
- (unsigned int)getContextId:(id)arg1;
- (void)loadLibFile:(id)arg1 preloadType:(unsigned int)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendJSInvokerMessage:(id)arg1;
- (void)executeOnWorker:(id)arg1;
- (void)executeBlockOnWorkerImpl:(id /* block */)arg1;
- (void)executeBlockOnWorker:(id /* block */)arg1;
- (void)stopWorker;
- (void)internalStopWorker;
- (void)workThread_reportPubLibCoverageIfNeeded;
- (void)setupTimerBlock:(id)arg1;
- (unsigned int)addTimer:(unsigned int)arg1 withTime:(float)arg2 isRepeat:(BOOL)arg3;
- (void)onTimer:(id)arg1;
- (void)injectTimerBridge;
- (unsigned long long)getJSFootprintMemoryInBytes;
- (id)getFileData:(id)arg1;
- (id)libWorkerType;
- (void)setLibWorkerType:(id)arg1;
- (id)service;
- (void)setService:(id)arg1;
- (unsigned int)workerId;
- (void)setWorkerId:(unsigned int)arg1;
- (id)apiList;
- (void)setApiList:(id)arg1;
- (id)thread;
- (void)setThread:(id)arg1;
- (id)timerObjs;
- (void)setTimerObjs:(id)arg1;
- (id)lastJSError;
- (void)setLastJSError:(id)arg1;
- (BOOL)runningApi;
- (void)setRunningApi:(BOOL)arg1;
- (id)wasmAdaptor;
- (void)setWasmAdaptor:(id)arg1;
- (unsigned int)subContextId;
- (void)setSubContextId:(unsigned int)arg1;
- (id)subContexts;
- (void)setSubContexts:(id)arg1;
- (void).cxx_destruct;
@end
