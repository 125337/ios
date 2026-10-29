@interface FavoritesBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    FavoritesItemDB * _favItemDB; // +0x8
    NSMutableArray * _batchDelArray; // +0x10
    NSMutableArray * _failArray; // +0x18
    NSMutableArray * m_batchDelSourceIdFilters; // +0x20
    NSMutableArray * m_batchDelFailedFilters; // +0x28
    id <FavoritesBatchDelMgrDelegate> _delegate; // +0x30
    BOOL _isDeling; // +0x38
    BOOL m_isDelingBySourceId; // +0x39
    NSMutableArray * m_batchDelSourceIdTasks; // +0x40
    NSMutableDictionary * m_pendingSourceIdTasks; // +0x48
    BOOL m_isDelingBySourceIdWithScene; // +0x50
}
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)loadBatchDelQueue;
- (void)dealloc;
- (void)addBatchDelFavoritesItemList:(id)arg1;
- (void)TryStartBatchDel;
- (void)HandleBatchDelFavItemResp:(id)arg1 Event:(unsigned int)arg2;
- (void)addBatchDelSourceIdFilters:(id)arg1;
- (void)tryStartBatchDelBySourceId;
- (void)handleBatchDelFavItemBySourceIdResp:(id)arg1 Event:(unsigned int)arg2;
- (void)addBatchDelSourceIdFilter:(id)arg1 scene:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)tryStartBatchDelBySourceIdWithScene;
- (void)handleBatchDelBySourceIdWithSceneResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkFailQueue;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
