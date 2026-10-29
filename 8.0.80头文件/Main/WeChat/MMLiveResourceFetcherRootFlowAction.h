@interface MMLiveResourceFetcherRootFlowAction : MMLiveFlowLinearDelegatingActionBase
{
    unsigned long long _pendingTasksCount; // +0x8
}
- (void)startFetcherTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)pendingTasksCount;
- (void)setPendingTasksCount:(unsigned long long)arg1;
@end
