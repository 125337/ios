@interface MMLiveResourceFetcherDownloadDeduplicationFlowAction : MMLiveFlowLinearDelegatingActionBase
{
    NSMutableDictionary * _entries; // +0x8
}
- (id)init;
- (void)onAllInvocationCanceledForDeduplicationEntry:(id)arg1;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)entries;
- (void)setEntries:(id)arg1;
- (void).cxx_destruct;
@end
