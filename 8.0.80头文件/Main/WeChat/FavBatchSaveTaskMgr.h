@interface FavBatchSaveTaskMgr : MMUserService <FavDataBatchSaveLogicDelegate, MMServiceProtocol>
{
    BOOL _serviceActive; // +0x8
    BOOL _cancellationRequested; // +0x9
    BOOL _completionDelivered; // +0xa
    BOOL _floatingWindowSuppressed; // +0xb
    FavBatchSaveTaskSnapshot * _currentSnapshot; // +0x10
    FavDataBatchSaveLogic * _batchSaveLogic; // +0x18
    NSHashTable * _observers; // +0x20
}
- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isTaskRunning;
- (BOOL)startBatchSaveWithItems:(id)arg1;
- (BOOL)startBatchSaveWithItems:(id)arg1 reportParams:(id)arg2;
- (void)cancelCurrentTask;
- (void)acknowledgeFailedSnapshotIfNeeded;
- (void)acknowledgeInterruptedSnapshotIfNeeded;
- (void)setFloatingWindowSuppressed:(BOOL)arg1;
- (BOOL)isFloatingWindowSuppressed;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)onFavDataBatchSaveProgress:(long long)arg1 totalCount:(long long)arg2;
- (void)onFavBatchSaveFailReasonChanged:(long long)arg1;
- (void)onFavDataBatchSaveComplete:(BOOL)arg1 savedCount:(long long)arg2 totalCount:(long long)arg3;
- (void)onFavDataBatchSaveComplete:(BOOL)arg1 savedCount:(long long)arg2 totalCount:(long long)arg3 failureReason:(long long)arg4;
- (void)onFavDataBatchSaveCancelledWithSavedCount:(long long)arg1 totalCount:(long long)arg2;
- (id)snapshotWithState:(unsigned long long)arg1 totalCount:(long long)arg2 successCount:(long long)arg3 failureReason:(long long)arg4;
- (id)snapshotWithState:(unsigned long long)arg1 totalCount:(long long)arg2 successCount:(long long)arg3 failureReason:(long long)arg4 reportParams:(id)arg5;
- (long long)normalizedFailureReason:(long long)arg1 hasFailure:(BOOL)arg2;
- (void)finishTaskWithState:(unsigned long long)arg1 successCount:(long long)arg2 failureReason:(long long)arg3;
- (void)notifyObservers;
- (void)recoverInterruptedTaskIfNeeded;
- (void)persistRunningSnapshot;
- (id)JSONStringForReportParams:(id)arg1;
- (id)reportParamsForJSONString:(id)arg1;
- (void)clearPersistedSnapshot;
- (id)taskMMKV;
- (id)currentSnapshot;
- (void)setCurrentSnapshot:(id)arg1;
- (id)batchSaveLogic;
- (void)setBatchSaveLogic:(id)arg1;
- (id)observers;
- (void)setObservers:(id)arg1;
- (BOOL)serviceActive;
- (void)setServiceActive:(BOOL)arg1;
- (BOOL)cancellationRequested;
- (void)setCancellationRequested:(BOOL)arg1;
- (BOOL)completionDelivered;
- (void)setCompletionDelivered:(BOOL)arg1;
- (BOOL)floatingWindowSuppressed;
- (void).cxx_destruct;
@end
