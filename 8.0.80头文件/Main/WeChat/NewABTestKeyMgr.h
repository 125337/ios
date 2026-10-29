@interface NewABTestKeyMgr : MMUserService <MMServiceProtocol, INewABTestLogicExt>
{
    NSMutableDictionary * cachedABTestItems; // +0x8
    BOOL _bABTestCacheLoaded; // +0x10
}
- (void)onServiceInit;
- (id)getTestValueWithoutReportForKey:(id)arg1;
- (id)getTestValueWithAutoReportForKey:(id)arg1;
- (id)getTestValueWithKey:(id)arg1 reportABTestRunning:(BOOL)arg2;
- (void)filterExpsUsingBlock:(id /* block */)arg1;
- (id)getExpItemsArray;
- (void)reportABTestRunning:(id)arg1;
- (BOOL)tryLoadNewABTestCache;
- (id)pathForNewABTestCache;
- (BOOL)saveNewABTestCache;
- (void)handleNewABTestList:(id)arg1;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)onGetABTestExpKeyItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(BOOL)arg3;
- (id)cachedABTestItems;
- (void)setCachedABTestItems:(id)arg1;
- (BOOL)bABTestCacheLoaded;
- (void)setBABTestCacheLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end
