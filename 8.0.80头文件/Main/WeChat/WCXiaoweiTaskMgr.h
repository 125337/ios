@interface WCXiaoweiTaskMgr : MMUserService <MMKernelExt, MMActionNotifyCommBizExt, MMServiceProtocol>
{
    BOOL _timeObserverRegistered; // +0x8
    NSMutableDictionary * _taskDict; // +0x10
    WCXiaoweiTaskDatabase * _database; // +0x18
    WCXiaoweiTaskReliableSyncLogic * _syncLogic; // +0x20
    NSMutableDictionary * _virtualTaskState; // +0x28
}
+ (id)taskCenterIdFromDeeplink:(id)arg1;
- (id)init;
- (void)loadTasksFromDatabase;
- (void)dealloc;
- (id)taskDict;
- (id)database;
- (id)virtualTaskState;
- (id)syncLogic;
- (void)registerTimeChangeObserver;
- (BOOL)isXiaoweiTaskEntryEnabled;
- (void)ensureFullSyncIfNeeded;
- (void)triggerSync;
- (void)onServiceAfterInit;
- (void)onServiceClearData;
- (void)manualFetchTaskList;
- (void)onSignificantTimeChange;
- (id)getTaskListOfContact:(id)arg1;
- (void)openVirtualTimedTaskListWithIds:(id)arg1 fromChatUserName:(id)arg2;
- (void)openTaskDetailWithTaskId:(id)arg1 deeplink:(id)arg2 fromChatUserName:(id)arg3;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (void)onAuthOK;
- (void)onInitOK;
- (void)onManulLoginOK;
- (BOOL)insertOrUpdateTaskSync:(id)arg1;
- (BOOL)removeTaskWithIdSync:(id)arg1;
- (void)setTaskDict:(id)arg1;
- (void)setDatabase:(id)arg1;
- (void)setSyncLogic:(id)arg1;
- (BOOL)timeObserverRegistered;
- (void)setTimeObserverRegistered:(BOOL)arg1;
- (void)setVirtualTaskState:(id)arg1;
- (void).cxx_destruct;
@end
