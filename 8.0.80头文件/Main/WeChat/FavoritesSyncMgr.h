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
    BOOL _isRunningAddOrModCgi; // +0x38
    BOOL _hasCheckInvalidSeq; // +0x39
    BOOL _recoveryBlocked; // +0x3a
    unsigned long long _cgiStartTimestamp; // +0x40
    id /* block */ _delayedBlock; // +0x48
    FavSyncClientStorageMgr * _clientStorageMgr; // +0x50
}
- (BOOL)saveSyncKeyBuffer;
- (void)loadSyncKeyBuffer;
- (id)getClientStorageMgr;
- (void)clearClientStorageForDebug;
- (BOOL)stopForFavoritesRecovery;
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (BOOL)resetSyncValue:(int)arg1;
- (void)setRunningAddOrModCgi:(BOOL)arg1;
- (void)cancelDelayedTask;
- (void)SyncByNotify:(unsigned int)arg1;
- (void)aysncHandleFavoritesSyncRespCmdList:(id)arg1 Response:(id)arg2;
- (void)HandleFavoritesSyncResp:(id)arg1 Event:(unsigned int)arg2;
- (void)checkInvalidSeq:(unsigned int)arg1 serverKeyBuffer:(id)arg2;
- (void)pinTopFavInChat:(unsigned int)arg1 onTop:(BOOL)arg2;
- (void)HandlePinTopFavInChatResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)willEnterForeground:(id)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isRunningAddOrModCgi;
- (void)setIsRunningAddOrModCgi:(BOOL)arg1;
- (unsigned long long)cgiStartTimestamp;
- (void)setCgiStartTimestamp:(unsigned long long)arg1;
- (id /* block */)delayedBlock;
- (void)setDelayedBlock:(id /* block */)arg1;
- (BOOL)hasCheckInvalidSeq;
- (void)setHasCheckInvalidSeq:(BOOL)arg1;
- (id)clientStorageMgr;
- (void)setClientStorageMgr:(id)arg1;
- (BOOL)recoveryBlocked;
- (void)setRecoveryBlocked:(BOOL)arg1;
- (void).cxx_destruct;
@end
