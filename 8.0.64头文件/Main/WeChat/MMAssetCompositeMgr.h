@interface MMAssetCompositeMgr : MMUserService <MMServiceProtocol>
{
    NSString * _username; // +0x8
    long long _currentMgrState; // +0x10
    OrderedDictionary * _taskListMap; // +0x18
    id <MMAssetCompositeTaskProtocol> _currentTask; // +0x20
}
+ (id)genErrorForCode:(long long)arg1;
+ (void)saveBackupAsset:(id)arg1 andCrop:(BOOL)arg2 forTimeRange:(struct)arg3 withMaxSizeMB:(long long)arg4 resultBlock:(id /* block */)arg5;
+ (void)_saveBackupAssetByCopyWithAVAsset:(id)arg1 assetUrl:(id)arg2 maxSizeLimitMB:(long long)arg3 resultBlock:(id /* block */)arg4;
+ (void)_saveBackupAssetByExportWithAVAsset:(id)arg1 assetUrl:(id)arg2 timeRange:(struct)arg3 resultBlock:(id /* block */)arg4;
+ (BOOL)deleteBackupAssetFileForShortName:(id)arg1;
+ (long long)getAssetBackupDirSizeByte;
+ (id)findBackupAssetFilePathForShortName:(id)arg1;
+ (unsigned long long)preGetAssetBackupDirSize;
+ (unsigned long long)deleteAssetBackupDir;
+ (id)_getAssetBackupDirPath;
+ (id)_convertBackupAssetFilePathFromShortName:(id)arg1;
+ (id)_ensureBackupAssetFilePathForShortName:(id)arg1 withError:(id *)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)_clear;
- (BOOL)addTask:(id)arg1;
- (BOOL)_addTask:(id)arg1;
- (void)removeTaskOfId:(id)arg1;
- (id)getCacheTaskFromTaskID:(id)arg1;
- (long long)getTaskQueueCount;
- (id)getQueueTaskIDs;
- (void)_enqueue;
- (id)_popFirstTask;
- (id)_detachTaskOfId:(id)arg1;
- (void)_NEWSTATE_onTaskPending:(id)arg1;
- (void)_NEWSTATE_onTaskInterrupted:(id)arg1;
- (void)_NEWSTATE_onTaskDetached:(id)arg1;
- (void)_NEWSTATE_onTaskPicked:(id)arg1;
- (void)_NEWSTATE_onTask:(id)arg1 finishedWithResult:(id)arg2 compositeSession:(id)arg3;
- (void)_NEWSTATE_onTaskQueueIdle;
- (Class)_findCompositorClassForTask:(id)arg1;
- (void)_updateState:(long long)arg1;
- (BOOL)_isNewStateValid:(long long)arg1;
- (BOOL)_isWorking;
- (BOOL)_isDestroyed;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)currentMgrState;
- (void)setCurrentMgrState:(long long)arg1;
- (id)taskListMap;
- (void)setTaskListMap:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (void).cxx_destruct;
@end
