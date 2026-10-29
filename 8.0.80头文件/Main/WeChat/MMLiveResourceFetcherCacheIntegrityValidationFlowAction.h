@interface MMLiveResourceFetcherCacheIntegrityValidationFlowAction : MMLiveFlowLinearDelegatingActionBase
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)validateFileForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (BOOL)validateFileForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 withDigestType:(unsigned long long)arg4 expectedDigest:(id)arg5;
@end
