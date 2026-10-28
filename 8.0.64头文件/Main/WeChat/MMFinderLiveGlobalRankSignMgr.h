@interface MMFinderLiveGlobalRankSignMgr : MMUserService <MMLiveTaskMgrExt, MMServiceProtocol>
{
    unsigned long long _currAnimatedRankSignCnt; // +0x8
    NSMutableDictionary * _animatingRankSignDict; // +0x10
    NSMutableDictionary * _pendingRankSignDict; // +0x18
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)applyToInvokeAnimation:(id)arg1 maxDuration:(double)arg2 taskId:(id)arg3 callback:(id /* block */)arg4;
- (void)cancelApplyAndInvoke:(id)arg1 taskId:(id)arg2;
- (void)increaseAnimatedRankSignCnt;
- (void)decreaseAnimatedRankSignCnt;
- (BOOL)checkRankSignViewIsAnimating:(id)arg1 taskId:(id)arg2;
- (void)innerApplyToInvokeAnimation:(id)arg1 maxDuration:(double)arg2 taskId:(id)arg3 callback:(id /* block */)arg4;
- (void)tryToInvokeNextAnimationWithTaskId:(id)arg1;
- (BOOL)isAnimatingRankSignListOverMaxLimit:(id)arg1;
- (void)removeRankSignViewFromAnimatingList:(id)arg1 taskId:(id)arg2;
- (void)removeRankSignViewFromPendingList:(id)arg1 taskId:(id)arg2;
- (void)checkCurrentRankSignRecordsValid:(id)arg1;
- (id)getAnimatingRankSignListWithTaskId:(id)arg1 autoCreate:(BOOL)arg2;
- (id)getPendingRankSignListWithTaskId:(id)arg1 autoCreate:(BOOL)arg2;
- (unsigned long long)maxAnimationInvokeCnt;
- (id)animatingRankSignDict;
- (id)pendingRankSignDict;
- (id)currentLiveTask;
- (void)onLiveTaskEnterLive:(id)arg1;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)startMonitor;
- (void)stopMonitor;
- (void)contineMonitor;
- (void)invokeMonitor;
- (unsigned long long)currAnimatedRankSignCnt;
- (void)setCurrAnimatedRankSignCnt:(unsigned long long)arg1;
- (void)setAnimatingRankSignDict:(id)arg1;
- (void)setPendingRankSignDict:(id)arg1;
- (void).cxx_destruct;
@end
