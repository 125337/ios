@interface NewABTestMgr : MMUserService <INewABTestLogicExt, MMServiceProtocol>
{
    BOOL _bABTestCacheLoaded; // +0x8
    unsigned int _uiNextUpdateTime; // +0xc
    NSMutableArray * _aryABTestList; // +0x10
}
- (id)getABTestAry;
- (id)getABTestItemWithLayerId:(id)arg1;
- (id)getValueForKey:(id)arg1 withLayerId:(id)arg2;
- (id)getABTestListWithBizId:(id)arg1;
- (void)reportABTestRunning:(id)arg1;
- (void)reportABTestLog:(id)arg1 expId:(id)arg2 logId:(unsigned int)arg3 logExt:(id)arg4;
- (id)pathForNewABTestCache;
- (BOOL)tryLoadNewABTestCache;
- (void)filterExpireExp;
- (BOOL)saveNewABTestCache;
- (void)mergeNewABTestItemFromSvr:(id)arg1;
- (void)handleNewABTestList:(id)arg1;
- (void)onServiceInit;
- (void)getABTestItemsForRequest:(id)arg1;
- (void)onGetABTestItems:(id)arg1 expiredExpids:(id)arg2 isAutoGet:(BOOL)arg3;
- (id)getExpItemsArray;
- (id)aryABTestList;
- (void)setAryABTestList:(id)arg1;
- (unsigned int)uiNextUpdateTime;
- (void)setUiNextUpdateTime:(unsigned int)arg1;
- (BOOL)bABTestCacheLoaded;
- (void)setBABTestCacheLoaded:(BOOL)arg1;
- (void).cxx_destruct;
@end

