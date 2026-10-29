@interface MinimizeRecMgr : MMUserService <MMServiceProtocol>
{
    id <MinimizeEventRouteDelegate><MinimizeTransitionInterface> _eventRouteDelegate; // +0x8
    WCTDatabase * _db; // +0x10
    WCTTable * _tableUsedRecordsInfo; // +0x18
    WCTTable * _tablePinedRecordsInfo; // +0x20
    NSMutableDictionary * _dicTaskKey2NotifyDelegate; // +0x28
}
+ (id)db_repairConfigPath;
+ (BOOL)__checkRecTaskDataValid:(id)arg1;
- (void)callDeallocInCatagoryDataBase;
- (void)openDB;
- (void)closeDB;
- (void)setupTable;
- (id)setupTableWithName:(id)arg1 tableClass:(Class)arg2;
- (BOOL)db_insertOrUpdateUsedMinimizeTaskData:(id)arg1;
- (BOOL)db_deleteUsedMinimizeTaskData:(id)arg1;
- (BOOL)db_deleteUsedMinimizeTaskDataBeforeCreateTime:(unsigned int)arg1 taskBizName:(id)arg2;
- (id)db_usedMinimizeTaskDataWithTaskKey:(id)arg1;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 limit:(unsigned int)arg2;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 fromCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)db_getUsedMinimizeTaskDataWithBizName:(id)arg1 beforeCreateTime:(unsigned int)arg2;
- (unsigned int)db_pinedMinimizeTaskDataCount;
- (id)db_arrPinedMinimizeRecords;
- (id)db_arrPinedMinimizeRecordsWithLimit:(unsigned int)arg1;
- (id)db_pinedMinimizeTaskDataWithTaskKey:(id)arg1;
- (id)db_pinedMinimizeTaskDataWithBizName:(id)arg1;
- (BOOL)db_insertOrUpdatePinedMinimizeTaskData:(id)arg1;
- (BOOL)db_deletePinedMinimizeTaskDataWithKey:(id)arg1;
- (BOOL)db_deleteMinimizeRecordTaskBeforeCreateTime:(unsigned int)arg1;
- (BOOL)db_batchUpdateMinimizeRecordTaskLastEntryTime:(unsigned int)arg1;
- (BOOL)__insertOrUpdateMinimizeRecordTask:(id)arg1 table:(id)arg2;
- (BOOL)__deleteMinimizeRecordTaskWithTaskKey:(id)arg1 table:(id)arg2;
- (BOOL)__deleteMinimizeRecordTaskBeforeCreateTime:(unsigned int)arg1 table:(id)arg2;
- (id)__getMinimizeRecordTaskSortByCreateTime:(id)arg1 limit:(unsigned int)arg2;
- (id)__getMinimizeRecordTaskWithBizName:(id)arg1 table:(id)arg2 fromCreateTime:(unsigned int)arg3 limit:(unsigned int)arg4;
- (id)__getMinimizeRecordTaskWithBizName:(id)arg1 table:(id)arg2 beforeCreateTime:(unsigned int)arg3;
- (id)__getMinimizeTaskDataWithTaskKey:(id)arg1 table:(id)arg2;
- (long long)minimizeRecWCTTag;
- (id)minimizeRecWillRecoverNotificationName;
- (id)minimizeRecDidRecoverNotificationName;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (void)registerRecoverNotification;
- (void)removeRecoverNotification;
- (id)minimizedTaskRecords;
- (id)minimizedTaskRecordsWithDataChangeDelegate:(id)arg1;
- (unsigned int)minimizeTaskRecordCount;
- (id)fisrtMinimizedTaskRecord;
- (BOOL)updateTaskRecordLastEntryTimeIfNeed:(unsigned int)arg1;
- (BOOL)hasMinimizeTaskRecord:(id)arg1;
- (id)minimizeTaskRecordWithTaskBizName:(id)arg1 TaskBizKey:(id)arg2;
- (id)minimizeTaskRecordWithTaskBizName:(id)arg1;
- (id)minimizeTaskRecordWithTaskKey:(id)arg1;
- (BOOL)tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2;
- (BOOL)tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2 isNotify:(BOOL)arg3;
- (BOOL)__tryAppendNewMinimizePositiveTask:(id)arg1 notifyDelegate:(id)arg2 supposedCreateTime:(unsigned int)arg3 isNotify:(BOOL)arg4;
- (id)tryUpdateNewMinimizeTaskRecordAndModifyCurrentTaskData:(id)arg1;
- (BOOL)isMinimizeTaskRecordForground:(id)arg1;
- (BOOL)removeMinimizeTaskRecordWithKey:(id)arg1;
- (BOOL)removeMinimizeTaskRecordWithKey:(id)arg1 isNotify:(BOOL)arg2;
- (BOOL)callLaunchTaskRecord:(id)arg1 openContext:(id)arg2 enterTaskScene:(unsigned int)arg3;
- (void)callMinimizeTaskDataExposed:(id)arg1;
- (void)callMinimizeTaskDataRemoved:(id)arg1;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceMemoryWarning;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)dealloc;
- (BOOL)addOrUpdateUsedTaskData:(id)arg1 notifyDelegate:(id)arg2;
- (BOOL)addUsedTaskDataToPined:(id)arg1;
- (BOOL)deleteUsedTaskData:(id)arg1 inScene:(unsigned int)arg2;
- (BOOL)deleteUsedTaskDataBeforeFirstTaskCreateTime:(unsigned int)arg1 taskBizName:(id)arg2;
- (id)getRecentUsedRecordWithTaskBizName:(id)arg1 limit:(unsigned int)arg2;
- (BOOL)checkIfTaskValid:(id)arg1;
- (void)callLaunchRecentUsedTaskWithData:(id)arg1 enterScene:(unsigned int)arg2;
- (void)callRemoveRecentUsedTaskWithData:(id)arg1;
- (void)callExposedRecentUsedTaskWithData:(id)arg1;
- (id)notifyDelegateFromTaskData:(id)arg1;
- (BOOL)recoverNotifyDelegate:(id)arg1;
- (id)getNofityDelegateRecoverIfNeed:(id)arg1;
- (BOOL)updateSnapshotImage:(id)arg1 taskBizName:(id)arg2 taskBizKey:(id)arg3;
- (id)taskSnapShotImageWithTaskData:(id)arg1;
- (id)__decodedImageWithTaskData:(id)arg1;
- (id)__rawImageWithTaskData:(id)arg1;
- (BOOL)tryRemoveSnapShotImageForTaskKey:(id)arg1;
- (id)__checkAndReturnLocalTaskDataForTaskKey:(id)arg1;
- (void)__deleteTaskSnaphotImageForTaskKey:(id)arg1;
- (void)__asyncSaveSnapShotImage:(id)arg1 forTaskKey:(id)arg2 completion:(id /* block */)arg3;
- (id)eventRouteDelegate;
- (void)setEventRouteDelegate:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)tableUsedRecordsInfo;
- (void)setTableUsedRecordsInfo:(id)arg1;
- (id)tablePinedRecordsInfo;
- (void)setTablePinedRecordsInfo:(id)arg1;
- (id)dicTaskKey2NotifyDelegate;
- (void)setDicTaskKey2NotifyDelegate:(id)arg1;
- (void).cxx_destruct;
@end

