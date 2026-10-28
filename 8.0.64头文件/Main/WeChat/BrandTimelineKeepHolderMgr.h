@interface BrandTimelineKeepHolderMgr : MMUserService <IMinimizeTaskDelegateInterface, MMServiceProtocol>
{
    OrderedDictionary * _cachedWebVCDict; // +0x8
}
- (id)minimizeTaskDataWithContact:(id)arg1 msgWrap:(id)arg2 andReaderWrap:(id)arg3;
- (id)minimizeTaskDataWithContact:(id)arg1 msgWrap:(id)arg2 andReaderWrap:(id)arg3 andTaskBizName:(id)arg4;
- (id)minimizeTaskDataWithContact:(id)arg1 recMsgData:(id)arg2 accountData:(id)arg3 appMsg:(id)arg4;
- (BOOL)tryAddMinimizeTaskAndMinimize:(id)arg1;
- (BOOL)tryUpdateMinimizeTaskSnapshotWithWebVC:(id)arg1 setVCCache:(BOOL)arg2;
- (BOOL)tryRemoveMinimizWithWebVC:(id)arg1;
- (id)getBizNameFromWebVC:(id)arg1;
- (BOOL)isTimelineBizName:(id)arg1;
- (void)doMinimizeAnimationWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(CGRect)arg3;
- (void)doMinimizeAnimationWithTaskData:(id)arg1 animationView:(id)arg2 fromViewFrame:(CGRect)arg3 completion:(id /* block */)arg4;
- (BOOL)isViewControllerMinimized:(id)arg1;
- (BOOL)isViewControllerCached:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (void)onMinimizedTaskItemExposed:(id)arg1;
- (void)safeSetWebVCToCache:(id)arg1 forKey:(id)arg2;
- (void)removeWebVCInCacheWithTaskKey:(id)arg1;
- (BOOL)shouldRecoverWebVCInCache:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)cachedWebVCDict;
- (void)setCachedWebVCDict:(id)arg1;
- (void).cxx_destruct;
@end
