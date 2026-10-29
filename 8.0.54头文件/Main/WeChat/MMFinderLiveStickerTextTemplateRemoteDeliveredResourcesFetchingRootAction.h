@interface MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction : MMLiveFlowLinearDelegatingActionBase <MMLiveStorageCleanupExt>
{
    NSMutableDictionary * _refreshEntries; // +0x8
}
- (id)init;
- (void)invokeWithInput:(id)arg1 flowInvocationContext:(id)arg2 actionInvocationContext:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)willFinishStorageCleanupInScenario:(unsigned long long)arg1 withContext:(id)arg2;
- (id)refreshEntries;
- (void)setRefreshEntries:(id)arg1;
- (void).cxx_destruct;
@end

