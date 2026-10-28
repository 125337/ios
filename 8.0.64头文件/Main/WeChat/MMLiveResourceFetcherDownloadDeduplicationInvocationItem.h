@interface MMLiveResourceFetcherDownloadDeduplicationInvocationItem : NSObject
{
    MMLiveResourceFetcherTask * _task; // +0x8
    MMLiveFlowInvocationContext * _flowInvocationContext; // +0x10
    MMLiveFlowActionInvocationContext * _actionInvocationContext; // +0x18
    id /* block */ _completionBlock; // +0x20
    MMLiveFlowCancelationActionRegistration * _cancelationRegistration; // +0x28
}
- (id)task;
- (void)setTask:(id)arg1;
- (id)flowInvocationContext;
- (void)setFlowInvocationContext:(id)arg1;
- (id)actionInvocationContext;
- (void)setActionInvocationContext:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)cancelationRegistration;
- (void)setCancelationRegistration:(id)arg1;
- (void).cxx_destruct;
@end
