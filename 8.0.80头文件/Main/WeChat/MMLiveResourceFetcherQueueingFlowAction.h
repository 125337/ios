@interface MMLiveResourceFetcherQueueingFlowAction : MMLiveFlowLinearDelegatingActionBase <MMLiveResourceFetcherTaskExt>
{
    unsigned long long _concurrencyLimit; // +0x8
    unsigned long long _currentExecutingCount; // +0x10
    MMLiveQueue * _pendingTasks; // +0x18
    NSMutableDictionary * _pendingTasksLookup; // +0x20
}
+ (id)createWithConcurrencyLimit:(unsigned long long)arg1;
- (id)initWithConcurrencyLimit:(unsigned long long)arg1;
- (id)init;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)onResourceFetcherTaskPriorityChanged:(id)arg1 previousPriority:(struct)arg2;
- (void)onResourceFetcherTaskPriorityBatchChanged;
- (void)invokeTaskWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)enqueueTask:(id)arg1;
- (void)dequeueTask;
- (unsigned long long)concurrencyLimit;
- (void)setConcurrencyLimit:(unsigned long long)arg1;
- (unsigned long long)currentExecutingCount;
- (void)setCurrentExecutingCount:(unsigned long long)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (id)pendingTasksLookup;
- (void)setPendingTasksLookup:(id)arg1;
- (void).cxx_destruct;
@end
