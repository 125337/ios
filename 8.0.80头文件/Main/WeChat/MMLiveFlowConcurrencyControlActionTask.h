@interface MMLiveFlowConcurrencyControlActionTask : NSObject
{
    id _input; // +0x8
    MMLiveFlowInvocationContext * _flowInvocationContext; // +0x10
    MMLiveFlowActionInvocationContext * _actionInvocationContext; // +0x18
    id /* block */ _completionBlock; // +0x20
}
- (id)input;
- (void)setInput:(id)arg1;
- (id)flowInvocationContext;
- (void)setFlowInvocationContext:(id)arg1;
- (id)actionInvocationContext;
- (void)setActionInvocationContext:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
