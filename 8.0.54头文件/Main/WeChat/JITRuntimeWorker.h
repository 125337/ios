@interface JITRuntimeWorker : NSObject
{
    BOOL _threadStopped; // +0x8
    int _workerId; // +0xc
    NSThread * _thread; // +0x10
    JITRuntime * _runtime; // +0x18
    id /* block */ _finishBlock; // +0x20
}
- (id)initWithId:(int)arg1;
- (void)setup:(id)arg1 finishBlock:(id /* block */)arg2;
- (void)destroy;
- (BOOL)runCodeInWorkerThread:(id /* block */)arg1;
- (BOOL)runCodeInWorkerThreadSync:(id /* block */)arg1;
- (void)realRunCodeInWorkerThread:(id /* block */)arg1;
- (BOOL)runCodeInWorkerThreadImpl:(id /* block */)arg1 sync:(BOOL)arg2;
- (void)runThread:(id)arg1;
- (int)workerId;
- (id)thread;
- (void)setThread:(id)arg1;
- (BOOL)threadStopped;
- (void)setThreadStopped:(BOOL)arg1;
- (id)runtime;
- (void)setRuntime:(id)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

