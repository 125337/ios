@interface MMLiveResourceFetcherDownloadingFlowAction : MMLiveFlowTerminalActionBase
{
    BOOL _useProprietaryProtocol; // +0x8
    BOOL _reachedTerminalState; // +0x9
    MMLiveResourceFetcherTask * _task; // +0x10
    MMLiveFlowInvocationContext * _flowInvocationContext; // +0x18
    MMLiveFlowActionInvocationContext * _actionInvocationContext; // +0x20
    NSString * _internalTaskId; // +0x28
    id /* block */ _completionBlock; // +0x30
}
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)OnCdnDownload:(id)arg1;
- (void)cancelDownloadWithCancelationToken:(id)arg1;
- (id)task;
- (void)setTask:(id)arg1;
- (id)flowInvocationContext;
- (void)setFlowInvocationContext:(id)arg1;
- (id)actionInvocationContext;
- (void)setActionInvocationContext:(id)arg1;
- (id)internalTaskId;
- (void)setInternalTaskId:(id)arg1;
- (BOOL)useProprietaryProtocol;
- (void)setUseProprietaryProtocol:(BOOL)arg1;
- (BOOL)reachedTerminalState;
- (void)setReachedTerminalState:(BOOL)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
