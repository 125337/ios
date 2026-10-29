@interface EcsWeShopMgr : MMUserService <EcsWeShopFetchDataTriggerDelegate, MMActionNotifyCommBizExt, EcsWeShopInfoUpdaterDelegate, MMServiceProtocol>
{
    BOOL _isDataLoading; // +0x8
    EcsWeShopDB * _db; // +0x10
    NSObject<OS_dispatch_queue> * _dataQueue; // +0x18
    EcsWeShopFetchDataTrigger * _fetchDataTrigger; // +0x20
    EcsWeShopInfoUpdater * _shopInfoUpdater; // +0x28
}
- (void)updateWeShopInfoWithShopAppId:(id)arg1;
- (void)openWeShopWithLocalId:(long long)arg1 withNavigationController:(id)arg2;
- (long long)getMaxUpdateSeq;
- (id)getLocalItemsWithLastSyncUpdateSeq:(long long)arg1 toUpdateSeq:(long long)arg2;
- (id)getLocalItemForLocalId:(long long)arg1;
- (id)getLocalItemForShopAppId:(id)arg1;
- (id)getJumpInfoDataForLocalId:(long long)arg1;
- (id)init;
- (void)loadDataIfNeeded;
- (void)loadDataIfNeededWithDelayInSeconds:(double)arg1;
- (id)handleUserShopLabelResp:(id)arg1;
- (void)updateFetchDataTimeIntervalIfNeeded:(unsigned int)arg1;
- (void)updateFetchDataTriggerWithTimeInterval:(unsigned int)arg1;
- (void)weShopFetchDataTriggerOnTrigger:(id)arg1;
- (void)checkReinitNextKey;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearMemoryCache:(unsigned long long)arg1 addedUserType:(unsigned long long)arg2;
- (void)onServiceClearMemoryCacheInBackground;
- (void)onServicePauseBackgroundTask:(unsigned long long)arg1;
- (void)onServiceResumeBackgroundTask:(unsigned long long)arg1;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)weShopInfoUpdater:(id)arg1 didUpdateLocalDataWithNeedsUpdateIndexingShopAppIds:(id)arg2;
- (id)shopAppIdsFromShopLabelInfos:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (BOOL)isDataLoading;
- (void)setIsDataLoading:(BOOL)arg1;
- (id)dataQueue;
- (void)setDataQueue:(id)arg1;
- (id)fetchDataTrigger;
- (void)setFetchDataTrigger:(id)arg1;
- (id)shopInfoUpdater;
- (void)setShopInfoUpdater:(id)arg1;
- (void).cxx_destruct;
@end
