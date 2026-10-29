@interface FavoritesReuploadMgr : MMObject <IFavoritesExt>
{
    MemoryMappedKV * _mmkv; // +0x8
    MemoryMappedKV * _taskMMKV; // +0x10
    MemoryMappedKV * _processedMMKV; // +0x18
    NSMutableSet * _reuploadingFavIds; // +0x20
    NSMutableSet * _editingFavIds; // +0x28
    NSMutableArray * _pendingTaskList; // +0x30
    NSMutableArray * _requestingTaskList; // +0x38
    NSMutableSet * _succeededTaskIds; // +0x40
    BOOL _isRequestingBatchGet; // +0x48
    MemoryMappedKV * _reuploadingMMKV; // +0x50
}
- (id)init;
- (BOOL)isEditingNoteFavId:(unsigned int)arg1;
- (BOOL)isReuploadingFavId:(unsigned int)arg1;
- (BOOL)hasPendingReuploadTask;
- (void)dealloc;
- (id)mmkvKeyForFavId:(unsigned int)arg1;
- (void)saveReuploadFavInfo:(id)arg1;
- (void)removeReuploadFavInfoFromMMKV:(unsigned int)arg1;
- (void)markReuploadingFavId:(unsigned int)arg1 seq:(unsigned int)arg2;
- (void)removeReuploadingFavId:(unsigned int)arg1;
- (void)markProcessedFavId:(unsigned int)arg1 seq:(unsigned int)arg2 status:(unsigned int)arg3;
- (id)processedAckInfoForFavInfo:(id)arg1;
- (void)savePendingTaskListToMMKV;
- (void)restorePendingTaskListFromMMKV;
- (void)addTaskIdsToPending:(id)arg1;
- (void)handleReuploadTaskList:(id)arg1;
- (void)trySendBatchGetRequest;
- (void)handleBatchGetFinish:(id)arg1 success:(BOOL)arg2;
- (void)retryPersistedReuploadTasks;
- (void)reportAckWithFavId:(unsigned int)arg1 status:(unsigned int)arg2 seq:(unsigned int)arg3 favType:(int)arg4 reason:(id)arg5;
- (void)reportTriggerWithSource:(id)arg1 favIdList:(id)arg2;
- (void)reportPendingWithFavId:(unsigned int)arg1 seq:(unsigned int)arg2 favType:(int)arg3 reason:(id)arg4;
- (void)reportFilteredWithFavIdList:(id)arg1 reason:(id)arg2;
- (void)processReuploadFavInfos:(id)arg1 source:(id)arg2;
- (void)addEditingNoteFavId:(unsigned int)arg1;
- (void)removeEditingNoteFavId:(unsigned int)arg1;
- (void)triggerManualReuploadForFavId:(unsigned int)arg1 seq:(unsigned int)arg2;
- (BOOL)isNoteEditingWithFavId:(unsigned int)arg1;
- (unsigned long long)checkAndReuploadFavInfo:(id)arg1 reason:(id *)arg2;
- (BOOL)checkLocalFilesExist:(id)arg1;
- (void)OnUploadFavoritesItemFinish:(id)arg1 ErrCode:(int)arg2;
- (void)sendAckForFavId:(unsigned int)arg1 status:(unsigned int)arg2 seq:(unsigned int)arg3;
- (void)sendAckRequest:(id)arg1;
- (id)reuploadingMMKV;
- (void)setReuploadingMMKV:(id)arg1;
- (void).cxx_destruct;
@end
