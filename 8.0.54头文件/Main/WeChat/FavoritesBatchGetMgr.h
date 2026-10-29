@interface FavoritesBatchGetMgr : MMObject <PBMessageObserverDelegate, INetworkStatusMgrExt>
{
    FavoritesItemDB * _favItemDB; // +0x8
    NSMutableArray * _batchGetArray; // +0x10
    id <FavoritesBatchGetMgrDelegate> _delegate; // +0x18
    BOOL _isGetting; // +0x20
    unsigned int _autoBatchGetCount; // +0x24
    BOOL _hasStartBatchGet; // +0x28
    NSMutableArray * m_batchGetSourceIdFilters; // +0x30
    BOOL m_isGettingBySourceId; // +0x38
    NSObject<OS_dispatch_queue> * m_batchGetBySourceIdQueue; // +0x40
}
- (id)init;
- (void)initDB:(id)arg1;
- (void)dealloc;
- (void)addBatchGetFavoritesItemList:(id)arg1;
- (void)TryStartBatchGet;
- (void)addClientItemAsNewItem:(id)arg1;
- (BOOL)checkConflict:(id)arg1 vs:(id)arg2;
- (void)asyncDoAddNewItemList:(id)arg1;
- (BOOL)tryFixDataStatusInDataList:(id)arg1;
- (void)HandleBatchGetFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)addBatchGetSourceIdFilters:(id)arg1;
- (void)TryStartBatchGetBySourceId;
- (void)handleBatchGetFavoriteItemBySourceIdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (BOOL)shouldBetchGetAll;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

