@interface MMServiceLaunchManager : MMUserService <MMServiceProtocol>
{
    NSMutableDictionary * m_phaseTasks; // +0x8
    NSMutableArray * m_pendingTasks; // +0x10
    NSRecursiveLock * m_lock; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerTaskWithPhase:(long long)arg1 name:(id)arg2 execution:(id /* block */)arg3;
- (void)registerServicesWithPhase:(long long)arg1 serviceClasses:(id)arg2;
- (void)delayExecuteTask:(id)arg1;
- (void)registerDeferredTaskWithDelay:(double)arg1 name:(id)arg2 execution:(id /* block */)arg3;
- (double)executeTask:(id)arg1;
- (void)executeHighPhaseTasks;
- (void)executeNormalPhaseTasksWithTimeout:(double)arg1;
- (void)executeNormalPhaseTasks;
- (void)executeNextBatch;
- (void)cancelPendingTasks;
- (void).cxx_destruct;
@end
