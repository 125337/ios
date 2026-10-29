@interface MMLiveResourceFetcherCacheFallbackFlowAction : MMLiveFlowDelegatingActionBase
- (id)initWithCacheFlow:(id)arg1 downloadFlow:(id)arg2;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)dispatchInvocation:(id /* block */)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3;
@end

