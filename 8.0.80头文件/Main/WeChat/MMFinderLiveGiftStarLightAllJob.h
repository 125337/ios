@interface MMFinderLiveGiftStarLightAllJob : NSObject
{
    NSArray * _unlockInfos; // +0x8
    NSArray * _items; // +0x10
    NSArray * _wrappedItems; // +0x18
    NSArray * _orders; // +0x20
    unsigned long long _index; // +0x28
    unsigned long long _failCount; // +0x30
    FinderLiveBatchRewardOrder * _currentOrder; // +0x38
}
- (id)unlockInfos;
- (void)setUnlockInfos:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)wrappedItems;
- (void)setWrappedItems:(id)arg1;
- (id)orders;
- (void)setOrders:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)failCount;
- (void)setFailCount:(unsigned long long)arg1;
- (id)currentOrder;
- (void)setCurrentOrder:(id)arg1;
- (void).cxx_destruct;
@end
