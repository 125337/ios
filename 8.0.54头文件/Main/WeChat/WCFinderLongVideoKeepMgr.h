@interface WCFinderLongVideoKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MultiTalkMgrExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>
{
    WCFinderLongVideoPlayViewController * _vcContext; // +0x8
    NSMutableDictionary * _caches; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayerVC:(id)arg1 forKey:(id)arg2;
- (id)cachedPlayerVCForKey:(id)arg1;
- (void)removeVC:(id)arg1;
- (id)taskDataForVC:(id)arg1;
- (id)minimizeKey;
- (id)taskDataWithType:(unsigned long long)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (void)updateSnapShotWithVC:(id)arg1;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (BOOL)isMinizing:(id)arg1;
- (void)minizeVC:(id)arg1;
- (void)updateMinizedVC:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (id)shareListViewControllerWithMegaVideo:(id)arg1;
- (BOOL)videoPlayCompleted;
- (void)updateVcContextUsedRecord;
- (id)vcContext;
- (void)setVcContext:(id)arg1;
- (id)caches;
- (void)setCaches:(id)arg1;
- (void).cxx_destruct;
@end

