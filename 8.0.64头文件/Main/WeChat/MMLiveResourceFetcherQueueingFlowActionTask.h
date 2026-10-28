@interface MMLiveResourceFetcherQueueingFlowActionTask : NSObject
{
    MMLiveResourceFetcherTask * _fetcherTask; // +0x8
    MMLiveFlowInvocationContext * _flowInvocationContext; // +0x10
    MMLiveFlowActionInvocationContext * _actionInvocationContext; // +0x18
    id /* block */ _completionBlock; // +0x20
    MMLiveFlowCancelationActionRegistration * _cancelationActionRegistration; // +0x28
}
- (id)fetcherTask;
- (void)setFetcherTask:(id)arg1;
- (id)flowInvocationContext;
- (void)setFlowInvocationContext:(id)arg1;
- (id)actionInvocationContext;
- (void)setActionInvocationContext:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)cancelationActionRegistration;
- (void)setCancelationActionRegistration:(id)arg1;
- (void).cxx_destruct;
@end
