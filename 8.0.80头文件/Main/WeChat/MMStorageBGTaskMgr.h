@interface MMStorageBGTaskMgr : MMUserService <MMServiceProtocol>
{
    BOOL cancelled; // +0x8
    NSObject<OS_dispatch_queue> * _taskQueue; // +0x10
    NSRecursiveLock * _lock; // +0x18
    NSMutableDictionary * _registry; // +0x20
    MMStorageBGTaskItem * _currentTask; // +0x28
    id /* block */ _debugCB; // +0x30
}
+ (void)registerBackgroundTask;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)registerTaskWithName:(id)arg1 priority:(int)arg2 earliestStart:(long long)arg3 launchBlock:(id /* block */)arg4 cancelBlock:(id /* block */)arg5;
- (void)cancelTaskWithName:(id)arg1;
- (void)setDebugCallback:(id /* block */)arg1;
- (void)submitTaskRequest;
- (void)handleBGTask:(id)arg1;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)registry;
- (void)setRegistry:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id /* block */)debugCB;
- (void)setDebugCB:(id /* block */)arg1;
- (void).cxx_destruct;
@end
