@interface WCFinderInPictureKeepMgr : MMUserService <IMinimizeTaskDelegateInterface, IVOIPWindowExt, ILiveTaskMgrExt, MultiTalkMgrExt, WCFinderMinimizeExt, MMServiceProtocol, MinimizationTransitionControllerDelegate>
{
    UIViewController<WCFinderInPictureProtocol> * _vcContext; // +0x8
    UIViewController<WCFinderInPictureProtocol> * _cache; // +0x10
    UIView * _inPictureCacheView; // +0x18
}
+ (void)inPictureFromVC:(id)arg1 mediaCell:(id)arg2 contentVM:(id)arg3 silencePlay:(BOOL)arg4;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)cachePlayerVC:(id)arg1 forKey:(id)arg2;
- (id)cachedPlayerVCForKey:(id)arg1;
- (void)removeVC:(id)arg1;
- (id)taskDataForVC:(id)arg1;
- (BOOL)isInPicture;
- (BOOL)isInPicturePlaying;
- (BOOL)isInPictureForVC:(id)arg1;
- (void)removeTaskFor:(id)arg1;
- (void)closeInPicture;
- (BOOL)resolveExternalConflicts;
- (BOOL)setInPictureMute:(BOOL)arg1;
- (void)finderFeedListMediaDidEndPlay;
- (void)finderFeedListMediaWillStarPlay;
- (id)taskData:(id)arg1 animated:(BOOL)arg2;
- (id)customMaximizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (id)customMinimizeTransitionForTaskData:(id)arg1 transitionContext:(id)arg2;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (BOOL)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (id)currentMinimizationTaskBizName;
- (id)currentMinimizationTaskBizKey;
- (void)minimizationInteractivePopToMinimizeTask:(BOOL)arg1;
- (BOOL)minimizationInteractivePopGestureRecognizerShouldBegin;
- (BOOL)shouldBlockMinimizationEntryInInteractivePop;
- (BOOL)isMinizing:(id)arg1;
- (void)inPictureVC:(id)arg1 animated:(BOOL)arg2;
- (void)updateMinizedVC:(id)arg1;
- (void)dismissVCAndUpdateMinimieInfoIfNeed:(id)arg1;
- (void)onRecoverTaskData:(id)arg1;
- (void)onEnterRecentUsedTask:(id)arg1;
- (BOOL)videoPlayCompleted;
- (void)updateVcContextUsedRecord;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onBeginMultiTalk;
- (void)onVoipWindowDidAppear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)BeginInterruption;
- (void)onFinderWillMinimizeFloatingView;
- (id)vcContext;
- (void)setVcContext:(id)arg1;
- (id)cache;
- (void)setCache:(id)arg1;
- (id)inPictureCacheView;
- (void)setInPictureCacheView:(id)arg1;
- (void).cxx_destruct;
@end

