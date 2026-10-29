@interface FavoritesSyncMgr : MMObject <PBMessageObserverDelegate, CNetworkStatusExt>
{
    NSData * _syncKeyBuffer; // +0x8
    FavoritesItemDB * _favItemDB; // +0x10
    id <FavoritesSyncMgrDelegate> _delegate; // +0x18
    BOOL _isSendingReq; // +0x20
    int _syncSelector; // +0x24
    int _needSyncSelector; // +0x28
    BOOL _hasUpdateInfo; // +0x2c
    NSObject<OS_dispatch_queue> * m_handleCmdListQueue; // +0x30
}
- (BOOL)saveSyncKeyBuffer;
- (void)loadSyncKeyBuffer;
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (BOOL)resetSyncValue:(int)arg1;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)arg1 Response:(id)arg2;
- (void)HandleFavoritesSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

