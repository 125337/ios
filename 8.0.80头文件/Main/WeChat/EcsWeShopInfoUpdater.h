@interface EcsWeShopInfoUpdater : NSObject
{
    id <EcsWeShopInfoUpdaterDelegate> _delegate; // +0x8
    EcsWeShopDB * _db; // +0x10
    NSObject<OS_dispatch_queue> * _dataQueue; // +0x18
    NSMutableDictionary * _updateItemsMap; // +0x20
}
- (id)initWithDB:(id)arg1 dataQueue:(id)arg2;
- (void)updateWeShopInfoWithShopAppId:(id)arg1;
- (void)updateIfNeeded;
- (id)updateWithShopAppIds:(id)arg1;
- (id)itemForShopAppId:(id)arg1;
- (void)creatNewAndSetItemWithShopAppId:(id)arg1;
- (id)getAllItemsToUpdate;
- (id)shopAppIdsFromUpdateItems:(id)arg1;
- (id)shopAppIdsFromShopInfos:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1 forUpdateItem:(id)arg2;
- (BOOL)needsUpdateIndexingWithShopInfo:(id)arg1 localItem:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)dataQueue;
- (void)setDataQueue:(id)arg1;
- (id)updateItemsMap;
- (void)setUpdateItemsMap:(id)arg1;
- (void).cxx_destruct;
@end
