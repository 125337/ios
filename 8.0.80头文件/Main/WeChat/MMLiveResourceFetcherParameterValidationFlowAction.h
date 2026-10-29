@interface MMLiveResourceFetcherParameterValidationFlowAction : MMLiveFlowLinearDelegatingActionBase
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (BOOL)uriValid:(id)arg1;
@end
