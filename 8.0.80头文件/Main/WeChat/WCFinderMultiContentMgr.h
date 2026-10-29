@interface WCFinderMultiContentMgr : MMUserService <WCFinderFeedListTransitionHelperDelegate, IMinimizeTaskDelegateInterface, MMImageLoaderObserver, MinimizeTaskPlayCtrlDelegate, WCFinderFeedListTransitionHelperExt, WCFinderZoomAnimatorBehavior, MMServiceProtocol>
{
    NSMutableDictionary * _dictTaskDatas; // +0x8
    NSMutableDictionary * _dictCacheVcs; // +0x10
}
- (id)createAnimation:(BOOL)arg1 forVC:(id)arg2;
- (id)contentVMFromVC:(id)arg1;
- (id)keepHoldDelegateFromVC:(id)arg1;
- (void)onTransitionTriggerMininize:(id)arg1 userInfo:(id)arg2 giveUpClose:(BOOL *)arg3;
- (void)onTransitionHelperWillClousureFromVC:(id)arg1 toVC:(id)arg2 userInfo:(id)arg3;
- (void)onTransitionHelperDoClosureForVC:(id)arg1 userInfo:(id)arg2;
- (id)zoomAnimator:(id)arg1 chooseWithOther:(id /* block */)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (void)onAnimatorAnimationWillStart:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)generateOneTaskDataWithContentVM:(id)arg1 generateType:(unsigned long long)arg2;
- (void)addMinimizeTaskWithContentVM:(id)arg1 coverImage:(id)arg2 snapShotView:(id)arg3 animationStartFrame:(CGRect)arg4 fromViewControler:(id)arg5 generateType:(unsigned long long)arg6 sender:(id)arg7 completion:(id /* block */)arg8;
- (void)tryAddMinimizeTask:(id)arg1 minimizeAction:(id /* block */)arg2;
- (void)updateSnapShotWithImage:(id)arg1 taskData:(id)arg2;
- (void)removeMinimizeTaskWithKey:(id)arg1;
- (BOOL)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)generateOneShareVCWithMinimizeKey:(id)arg1 nonceId:(id)arg2 startPlayVideoTime:(double)arg3;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (id)dictTaskDatas;
- (void)setDictTaskDatas:(id)arg1;
- (id)dictCacheVcs;
- (void)setDictCacheVcs:(id)arg1;
- (void).cxx_destruct;
@end
