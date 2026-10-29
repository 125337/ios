@interface MMFinderLiveGiftAttackRenderLogic : NSObject <MMLiveTaskMgrExt>
{
    BOOL _isOverDelayAfterRenderEnd; // +0x8
    BOOL _isAllTaskRenderEnd; // +0x9
    BOOL _isAllOperationsEnd; // +0xa
    BOOL _isClearingPreEnvRes; // +0xb
    BOOL _isAppActive; // +0xc
    int _currIdentifierNum; // +0x10
    id /* block */ _prepareToPlayCallback; // +0x18
    id /* block */ _willPlayCallback; // +0x20
    id /* block */ _renderEndCallback; // +0x28
    id /* block */ _getRenderWeffectMgrCallback; // +0x30
    id /* block */ _allOperationsEndCallback; // +0x38
    id /* block */ _singleRenderTaskWillStartCallback; // +0x40
    id /* block */ _singleRenderTaskDidFinishCallback; // +0x48
    MMLiveTaskId * _taskId; // +0x50
    NSMutableArray * _pendingTaskList; // +0x58
    NSMutableArray * _runningTaskList; // +0x60
    NSMutableDictionary * _taskDict; // +0x68
    NSMutableDictionary * _recyclingTaskDict; // +0x70
    NSMutableDictionary * _standardRenderScriptIdDict; // +0x78
    NSMutableDictionary * _reusedRenderScriptIdDict; // +0x80
    NSMutableDictionary * _renderTimeRecordDict; // +0x88
    NSMutableDictionary * _attackRecordDict; // +0x90
    NSMutableArray * _operatingScriptList; // +0x98
    long long _currMaxRunningTaskCnt; // +0xa0
    MMWeEffectManager * _renderWeffectManager; // +0xa8
    long long _renderEnv; // +0xb0
    NSMutableArray * _recentRenderFullLoadTimeRangeList; // +0xb8
    unsigned long long _lastMaxSumResuedScriptIdCnt; // +0xc0
}
+ (BOOL)isGiftPlayItemValid:(id)arg1;
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initDefaultData;
- (void)increaseIdentifierNum;
- (void)initNotifications;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)playGiftAttackReward:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelGiftAttackReward:(id)arg1 force:(BOOL)arg2;
- (void)cancelAllGiftAttackRewards;
- (void)clearAllPlayingGiftAttackEffects;
- (BOOL)processLuaScriptJsonMessage:(id)arg1 fromSourceId:(int)arg2;
- (unsigned long long)remainGiftAttackRewardCnt;
- (unsigned long long)remainGiftAttackRunningTaskCnt;
- (unsigned long long)remainGiftAttackRenderTaskCntForAttacker:(id)arg1;
- (unsigned long long)remainGiftAttackRecordCnt;
- (BOOL)isContainGiftAttackRewardWithComboId:(id)arg1;
- (void)onRenderEnviromentDestroy:(long long)arg1 weeffectMgr:(id)arg2;
- (BOOL)checkIsCurrTopPerformanceLevel;
- (BOOL)increasePerformanceLevel;
- (BOOL)decreasePerformanceLevel;
- (BOOL)checkTimeRangeIsFullLoadWithBeginTime:(double)arg1 endTime:(double)arg2;
- (BOOL)currAllOperationsEnd;
- (long long)currRenderEnv;
- (id)currRunningTaskList;
- (BOOL)isUserHasRunningTaskAsAttacker:(id)arg1;
- (BOOL)isUserHasRunningTaskAsRecipientUser:(id)arg1;
- (void)addPlayTaskWithPlayItem:(id)arg1;
- (void)tryStartNextPlayTask;
- (BOOL)checkPlayTaskCanStart:(id)arg1;
- (void)clearPlayTask:(id)arg1;
- (id)getNextPlayTaskToRun;
- (void)cancelGiftAttackPlayTask:(id)arg1 force:(BOOL)arg2;
- (void)onPlayTaskAnimationStop:(id)arg1;
- (id)getAttackTaskListWithComboId:(id)arg1;
- (id)checkPlayTaskPrepareReadyToPlayReward:(id)arg1;
- (id)getPreviousReusableFaceEffectRenderEnableTaskWithAnimationId:(id)arg1 forAttacker:(id)arg2 beforeTask:(id)arg3;
- (id)getPreviousFaceEffectRenderEnableTasksExceptAnimationId:(id)arg1 forAttacker:(id)arg2 beforeTask:(id)arg3;
- (void)cancelAllGiftAttackPlayingRewardsDirectly;
- (void)clearAllRunningTasksDirectly;
- (void)checkAllTasksRenderIsEnd;
- (void)checkAllOperationsIsEnd;
- (BOOL)isCurrAllOperationsEnd;
- (void)startOverDelayCheckAfterRenderEnd;
- (void)cancelOverDelayCheckAfterRenderEnd;
- (void)overDelayAfterRenderEnd;
- (void)addGiftAttackRecordWithPlayItem:(id)arg1 completion:(id /* block */)arg2;
- (void)endGiftAttackRecordWithComboId:(id)arg1 result:(long long)arg2;
- (void)endAllGiftAttackRecordsWithResult:(long long)arg1;
- (void)endAllGiftAttackRunningRecordsWithResult:(long long)arg1;
- (id)getAttackRecordWithComboId:(id)arg1;
- (void)updateRenderWeffectManager:(id)arg1 renderEnv:(long long)arg2;
- (void)changePreEnvResClearState:(BOOL)arg1;
- (BOOL)checkRenderWeffectManagerNeedUpdate:(id)arg1;
- (BOOL)checkRenderEnvNeedUpdate:(long long)arg1;
- (id)inner_getStandardRenderScriptDictWithTargetUser:(id)arg1 autoCreateIfNotExist:(BOOL)arg2;
- (BOOL)prepareStandardRenderScriptWithAnimationId:(id)arg1 targetUser:(id)arg2;
- (BOOL)cacheStandardRenderScript:(long long)arg1 resPath:(id)arg2 forAnimationId:(id)arg3 targetUser:(id)arg4;
- (id)getStandardScriptWithAnimationId:(id)arg1 targetUser:(id)arg2;
- (long long)getRenderTaskStandardScriptState:(id)arg1;
- (id)getReusedRenderScriptIdListWithAnimationId:(id)arg1 autoCreateIfNotExist:(BOOL)arg2;
- (BOOL)tryAddRenderScriptIdToReuse:(long long)arg1 resPath:(id)arg2 forAnimationId:(id)arg3;
- (id)getRenderScriptToReuseWithAnimationId:(id)arg1;
- (void)clearRecentUnUsedAnimationScriptForOverLimitIfNeed;
- (BOOL)tryClearRecentUnUsedAnimationScriptBeforeAnimation:(id)arg1;
- (void)removeScriptListWithClearSrc:(id)arg1;
- (void)removeScriptAndClearSrc:(id)arg1 withWeffectMgr:(id)arg2;
- (void)onScriptsOperatingBegin:(id)arg1;
- (void)onScriptsOperatingEnd:(id)arg1;
- (void)onAllScriptsOperatingEnd;
- (unsigned long long)currCachedRenderScriptCount;
- (BOOL)clearResourcesIfNeeded:(id)arg1;
- (void)clearAllScriptsDirectly;
- (void)clearAllOperatingScriptsResource;
- (id)getRenderTimeRecordForAnimationId:(id)arg1 autoCreateIfNotExist:(BOOL)arg2;
- (void)recordGiftAttackAnimationTime:(id)arg1;
- (void)onGiftAttackAnimationWillStart:(id)arg1;
- (id)getSortedRenderTimeRecordList;
- (BOOL)tryIncreaseCurrMaxRunningTaskCnt;
- (BOOL)tryDecreaseCurrMaxRunningTaskCnt;
- (id)getHighLoadAnimationId;
- (unsigned long long)getCurrMaxRunningTaskCntToLimit;
- (double)getCurrAutoEndDuration;
- (BOOL)tryIncreaseWeEffectFaceTrackFreqToLevel:(long long)arg1;
- (BOOL)isCurrWeEffectFaceTrackFreqPriorToLevel:(long long)arg1;
- (BOOL)tryDecreaseWeEffectFaceTrackFreqToLevel:(long long)arg1;
- (unsigned long long)maxRunningTaskCnt;
- (long long)currMaxRunningTaskCntWithHighLoad;
- (unsigned long long)maxResuedScriptIdCnt;
- (unsigned long long)getMaxResuedScriptIdCntForAnimationId:(id)arg1;
- (unsigned long long)maxSumResuedScriptIdCnt;
- (double)getRecentAverageFootPrintMemoryPercent:(id)arg1;
- (unsigned int)getFaceTrackSkipFrameCntWithLevel:(long long)arg1;
- (id)finderLiveTask;
- (unsigned long long)getRunningTaskCount;
- (void)addRunningTask:(id)arg1;
- (void)removeRunningTask:(id)arg1;
- (BOOL)isContainRunningTask:(id)arg1;
- (BOOL)isContainRunningTaskWithAnimationId:(id)arg1;
- (void)checkCurrRunningTaskIsOverMaxLimit;
- (unsigned long long)getPendingTaskCount;
- (void)addPendingTask:(id)arg1;
- (void)removePendingTask:(id)arg1;
- (BOOL)isContainPendingTask:(id)arg1;
- (void)registerTask:(id)arg1;
- (void)unRegisterTaskWithKey:(id)arg1;
- (id)getRegisterTaskWithKey:(id)arg1;
- (void)cacheRecyclingTask:(id)arg1;
- (void)clearRecyclingTaskWithKey:(id)arg1;
- (id)getRecyclingTaskWithKey:(id)arg1;
- (void)registerAttackRecord:(id)arg1;
- (void)unRegisterAttackRecordWithKey:(id)arg1;
- (id)getRegisterRecordWithKey:(id)arg1;
- (id)getRegisterRecordWithcomboId:(id)arg1;
- (void)checkCurrentFullLoadStateWithAutoBegin:(BOOL)arg1;
- (id)getNewFullLoadTimeRange;
- (id)getLatestFullLoadTimeRange;
- (void)checkRenderFullLoadTimeRangeCacheOverLimit;
- (BOOL)isFullLoadTimeRange:(id)arg1 intersectWithBeginTime:(double)arg2 endTime:(double)arg3;
- (unsigned long long)getOperatingScriptListCnt;
- (void)onResignActive;
- (void)didBecomeActive;
- (void)onLiveTask:(id)arg1 liveViewConnectMicStateChanged:(BOOL)arg2;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)checkTargetUsersExistForStandardScriptCache:(id)arg1;
- (void)logForCurrentScriptCacheWithPrefix:(id)arg1;
- (void)logForStandardScriptCacheAction:(id)arg1;
- (id /* block */)prepareToPlayCallback;
- (void)setPrepareToPlayCallback:(id /* block */)arg1;
- (id /* block */)willPlayCallback;
- (void)setWillPlayCallback:(id /* block */)arg1;
- (id /* block */)renderEndCallback;
- (void)setRenderEndCallback:(id /* block */)arg1;
- (id /* block */)getRenderWeffectMgrCallback;
- (void)setGetRenderWeffectMgrCallback:(id /* block */)arg1;
- (id /* block */)allOperationsEndCallback;
- (void)setAllOperationsEndCallback:(id /* block */)arg1;
- (id /* block */)singleRenderTaskWillStartCallback;
- (void)setSingleRenderTaskWillStartCallback:(id /* block */)arg1;
- (id /* block */)singleRenderTaskDidFinishCallback;
- (void)setSingleRenderTaskDidFinishCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (int)currIdentifierNum;
- (void)setCurrIdentifierNum:(int)arg1;
- (BOOL)isOverDelayAfterRenderEnd;
- (void)setIsOverDelayAfterRenderEnd:(BOOL)arg1;
- (BOOL)isAllTaskRenderEnd;
- (void)setIsAllTaskRenderEnd:(BOOL)arg1;
- (BOOL)isAllOperationsEnd;
- (void)setIsAllOperationsEnd:(BOOL)arg1;
- (id)pendingTaskList;
- (void)setPendingTaskList:(id)arg1;
- (id)runningTaskList;
- (void)setRunningTaskList:(id)arg1;
- (id)taskDict;
- (void)setTaskDict:(id)arg1;
- (id)recyclingTaskDict;
- (void)setRecyclingTaskDict:(id)arg1;
- (id)standardRenderScriptIdDict;
- (void)setStandardRenderScriptIdDict:(id)arg1;
- (id)reusedRenderScriptIdDict;
- (void)setReusedRenderScriptIdDict:(id)arg1;
- (id)renderTimeRecordDict;
- (void)setRenderTimeRecordDict:(id)arg1;
- (id)attackRecordDict;
- (void)setAttackRecordDict:(id)arg1;
- (id)operatingScriptList;
- (void)setOperatingScriptList:(id)arg1;
- (long long)currMaxRunningTaskCnt;
- (void)setCurrMaxRunningTaskCnt:(long long)arg1;
- (id)renderWeffectManager;
- (void)setRenderWeffectManager:(id)arg1;
- (long long)renderEnv;
- (void)setRenderEnv:(long long)arg1;
- (BOOL)isClearingPreEnvRes;
- (void)setIsClearingPreEnvRes:(BOOL)arg1;
- (id)recentRenderFullLoadTimeRangeList;
- (void)setRecentRenderFullLoadTimeRangeList:(id)arg1;
- (BOOL)isAppActive;
- (void)setIsAppActive:(BOOL)arg1;
- (unsigned long long)lastMaxSumResuedScriptIdCnt;
- (void)setLastMaxSumResuedScriptIdCnt:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

