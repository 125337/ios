@interface MMFinderLiveHistoryMgr : MMUserService <MMServiceProtocol>
{
    NSArray * _dataItems; // +0x8
    long long _expireWatchHistoryDuration; // +0x10
    NSMutableSet * _dataItemsSet; // +0x18
    unsigned long long _capacity; // +0x20
}
- (BOOL)addLiveHistoryDataItem:(id)arg1;
- (void)trimCount;
- (void)removeLiveHistoryDataItem:(id)arg1;
- (void)updateHistoryItem:(id)arg1;
- (void)checkAvailableHistoryLive:(id /* block */)arg1;
- (void)removeAllLiveHistoryDataItems;
- (id)dataItems;
- (id)dataItemsSet;
- (long long)expireWatchHistoryDuration;
- (unsigned long long)capacity;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)clearDataWithLiveId:(unsigned long long)arg1;
- (void)setDataItems:(id)arg1;
- (void)setExpireWatchHistoryDuration:(long long)arg1;
- (void)setDataItemsSet:(id)arg1;
- (void)setCapacity:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
