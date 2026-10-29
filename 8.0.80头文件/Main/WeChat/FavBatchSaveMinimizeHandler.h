@interface FavBatchSaveMinimizeHandler : MMUserService <FavBatchSaveTaskMgrObserver, IMinimizeTaskDelegateInterface, MinimizeTaskStateInfoDelegate, MMServiceProtocol>
{
    BOOL _hasReportedCloseClick; // +0x8
    FavBatchSaveTaskMgr * _taskManager; // +0x10
    NSDictionary * _reportParams; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)dealloc;
- (void)favBatchSaveTaskMgr:(id)arg1 didUpdateSnapshot:(id)arg2;
- (void)onCloseBtnClicked:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)updateMinimizeTaskForSnapshot:(id)arg1;
- (id)buildMinimizeTaskData;
- (void)removeMinimizeTask;
- (BOOL)isFavBatchSaveTask:(id)arg1;
- (void)openFavoritesPage;
- (id)taskManager;
- (void)setTaskManager:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (BOOL)hasReportedCloseClick;
- (void)setHasReportedCloseClick:(BOOL)arg1;
- (void).cxx_destruct;
@end
