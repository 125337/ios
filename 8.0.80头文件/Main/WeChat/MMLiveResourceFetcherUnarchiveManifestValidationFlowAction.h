@interface MMLiveResourceFetcherUnarchiveManifestValidationFlowAction : MMLiveFlowLinearDelegatingActionBase
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)renewStorageLeaseForFileAtPath:(id)arg1 fetcherTask:(id)arg2 flowInvocationContext:(id)arg3 actionInvocationContext:(id)arg4;
@end
