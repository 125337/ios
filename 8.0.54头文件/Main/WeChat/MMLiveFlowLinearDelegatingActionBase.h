@interface MMLiveFlowLinearDelegatingActionBase : MMLiveFlowDelegatingActionBase
- (void)continueWithActionClass:(Class)arg1;
- (void)continueWithActionInstance:(id)arg1;
- (void)continueWithActionFactory:(id /* block */)arg1;
- (void)invokeDownstreamWithInput:(id)arg1 flowInvocationContext:(id)arg2 currentActionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
@end

