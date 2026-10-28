@interface MMLiveResourceFetcherCacheWritebackFlowAction : MMLiveFlowLinearDelegatingActionBase
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)computeAndSaveDigestForTask:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
- (void)saveDigest:(id)arg1 withType:(unsigned long long)arg2 forTask:(id)arg3 flowInvocationContext:(id)arg4 actionInvocationContext:(id)arg5;
@end
