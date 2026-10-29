@interface WeNoteMinimizeKeeperMgr : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol, IMinimizeTaskDelegateInterface>
{
    NSRecursiveLock * _lock; // +0x8
    OrderedDictionary * _vcDic; // +0x10
}
- (id)viewControllerForBizTaskKey:(id)arg1;
- (void)minimizeViewController:(id)arg1 ofTaskData:(id)arg2;
- (void)updateMinimizedViewController:(id)arg1 ofTaskData:(id)arg2;
- (BOOL)tryRemoveMinimizeTaskForBizKey:(id)arg1;
- (void)tryRemoveRecentHistoryForBizKey:(id)arg1;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(unsigned long long)arg2 weNoteVC:(id)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)presentMinimizeViewController:(id)arg1 key:(id)arg2 openContext:(id)arg3;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (BOOL)onDirectToNoteViewControllerWithMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3 bFromUsedTask:(BOOL)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onMemoryWarning:(id)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)vcDic;
- (void)setVcDic:(id)arg1;
- (void).cxx_destruct;
@end
