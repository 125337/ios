@interface EcsWeShopDB : NSObject
{
    NSString * _path; // +0x8
    WCTDatabase * _database; // +0x10
    WCTTable * _weshopItemTable; // +0x18
    WCTTable * _weshopItemExtTable; // +0x20
}
- (void)dealloc;
- (id)initWithPath:(id)arg1;
- (BOOL)open;
- (void)close;
- (BOOL)createTables;
- (long long)getMaxUpdateSeq;
- (id)getShopHistoryNextKey;
- (BOOL)runTransaction:(id /* block */)arg1;
- (BOOL)insertOrUpdateWeShopExtWithShopHistoryNextKey:(id)arg1;
- (BOOL)insertOrUpdateWeShopItemsWithShopLabelInfos:(id)arg1;
- (BOOL)updateWeShopItemsWithShopInfos:(id)arg1;
- (BOOL)updateWeShopItemsJumpInfoWithShopInfos:(id)arg1;
- (id)getLocalItemsWithLastSyncUpdateSeq:(long long)arg1 toUpdateSeq:(long long)arg2;
- (id)getLocalItemForLocalId:(long long)arg1;
- (id)getLocalItemForShopAppId:(id)arg1;
- (id)getJumpInfoDataForLocalId:(long long)arg1;
- (BOOL)insertOrUpdateWeShopItemsWithLimitedShopLabelInfos:(id)arg1 updateSeq:(long long)arg2;
- (BOOL)insertOrUpdateWeShopItemWithShopLabelInfo:(id)arg1 updateSeq:(long long)arg2;
- (BOOL)updateWeShopItemsWithLimitedShopInfos:(id)arg1 updateSeq:(long long)arg2;
- (BOOL)updateWeShopItemWithShopInfo:(id)arg1 updateSeq:(long long)arg2;
- (BOOL)updateWeShopItemJumpInfoWithShopInfo:(id)arg1;
- (void)updateLocalItem:(id)arg1 withShopLabelInfo:(id)arg2 updateSeq:(long long)arg3;
- (void)updateLocalItem:(id)arg1 withShopInfo:(id)arg2 updateSeq:(long long)arg3;
- (id)localItemFromShopLabelInfo:(id)arg1 updateSeq:(long long)arg2;
- (id)localIdsFromLocalItems:(id)arg1;
- (id)shopTagInfoFromShopTagInfos:(id)arg1;
- (void)fillItemUpdateProperties:(void *)arg1;
- (void)fillItemMainProperties:(void *)arg1;
- (void)fillItemUpdateShopInfoProperties:(void *)arg1;
- (BOOL)batchModifyInWeShopTablesWithDataItems:(id)arg1 block:(id /* block */)arg2;
- (id)getOrCreateTable:(id)arg1 withClass:(Class)arg2;
- (id)path;
- (void)setPath:(id)arg1;
- (id)database;
- (void)setDatabase:(id)arg1;
- (id)weshopItemTable;
- (void)setWeshopItemTable:(id)arg1;
- (id)weshopItemExtTable;
- (void)setWeshopItemExtTable:(id)arg1;
- (void).cxx_destruct;
@end
