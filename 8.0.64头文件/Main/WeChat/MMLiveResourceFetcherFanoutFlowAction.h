@interface MMLiveResourceFetcherFanoutFlowAction : MMLiveFlowFanoutAction
{
    unsigned long long _pendingBatchesCount; // +0x8
}
- (void)startFetcherTask:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)startFetcherTasks:(id)arg1 batchCancelationToken:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (unsigned long long)pendingBatchesCount;
- (void)setPendingBatchesCount:(unsigned long long)arg1;
@end
