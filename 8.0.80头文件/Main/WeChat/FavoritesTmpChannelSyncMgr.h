@interface FavoritesTmpChannelSyncMgr : MMObject
{
    FavoritesItemDB * _favItemDB; // +0x8
    MemoryMappedKV * _taskMMKV; // +0x10
    MemoryMappedKV * _doneVersionMMKV; // +0x18
    MemoryMappedKV * _runningMMKV; // +0x20
    NSMutableArray * _pendingTasks; // +0x28
    NSMutableDictionary * _pendingUpgrades; // +0x30
    ReSyncFavMsg * _runningTask; // +0x38
    NSData * _runningKeyBuffer; // +0x40
    FavSyncClientStorageMgr * _runningStorageMgr; // +0x48
    BOOL _isSendingReq; // +0x50
    unsigned int _syncSelector; // +0x54
    NSObject<OS_dispatch_queue> * _handleCmdListQueue; // +0x58
    id <FavoritesSyncMgrDelegate> _delegate; // +0x60
    BOOL _recoveryBlocked; // +0x68
}
- (id)init;
- (void)initDB:(id)arg1;
- (void)stopForFavoritesRecovery;
- (void)loadPendingTasks;
- (void)savePendingTasks;
- (unsigned int)doneReSyncVersionForTaskId:(unsigned int)arg1;
- (void)saveDoneReSyncVersion:(unsigned int)arg1 forTaskId:(unsigned int)arg2;
- (id)runKeyPrefixForTask:(id)arg1;
- (id)runKeyBufKeyForTask:(id)arg1;
- (id)runStorageKeyForTask:(id)arg1;
- (void)clearRunStorageForTask:(id)arg1;
- (id)loadRunKeyBufferForTask:(id)arg1;
- (void)saveRunKeyBuffer:(id)arg1 forTask:(id)arg2;
- (id)createStorageMgrForTask:(id)arg1;
- (unsigned int)getDoneReSyncVersionForTaskId:(unsigned int)arg1;
- (BOOL)triggerManualReSyncForTaskId:(unsigned int)arg1 version:(unsigned int)arg2;
- (void)clearAllRecordsForDebug;
- (void)handleReSyncFavMsgList:(id)arg1;
- (BOOL)addPendingTask:(id)arg1;
- (BOOL)applyPendingUpgrades;
- (void)startNextTaskIfNeeded;
- (void)reportResyncTriggerWithTask:(id)arg1;
- (void)sendSyncRequestWithSelector:(unsigned int)arg1;
- (void)handleFavSyncResp:(id)arg1;
- (void)asyncHandleRespCmdList:(id)arg1 Response:(id)arg2;
- (BOOL)applyRespCmdList:(id)arg1;
- (void)finishRunningTask;
- (void)stopRunningTask;
- (id)abortRunningTask;
- (id)pendingTaskForTaskId:(unsigned int)arg1;
- (id)copyTask:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)recoveryBlocked;
- (void)setRecoveryBlocked:(BOOL)arg1;
- (void).cxx_destruct;
@end
