@interface WCFinderDiskCleanMgr : NSObject <PBCoding>
{
    long long _lastCoreServiceCleanFeedCount; // +0x8
    NSMutableArray * _sceneChainArrayContainer; // +0x10
    NSMutableDictionary * _feedTagInfoDic; // +0x18
    NSMutableDictionary * _cleanedFeedInfoDic; // +0x20
    long long _lastCleanTs; // +0x28
    NSMutableSet * _deletedByDBFeedsSet; // +0x30
    unsigned long long _cleanActionState; // +0x38
    long long _lastTLWarningCleanTs; // +0x40
    long long _lastExitShareListCleanTs; // +0x48
    long long _lastBaseServiceCleanTs; // +0x50
    long long _lastFindPageDisappearCleanTs; // +0x58
}
+ (void)PBArrayAdd_sceneChainArrayContainer;
+ (void)PBArrayAdd_feedTagInfoDic;
+ (void)PBArrayAdd_cleanedFeedInfoDic;
+ (void)PBArrayAdd_deletedByDBFeedsSet;
+ (void)PBArrayAdd_lastCleanTs;
+ (void)PBArrayAdd_lastTLWarningCleanTs;
+ (void)PBArrayAdd_lastExitShareListCleanTs;
+ (void)PBArrayAdd_lastBaseServiceCleanTs;
+ (void)PBArrayAdd_lastFindPageDisappearCleanTs;
+ (void)initialize;
+ (id)sharedDiskReportQueue;
+ (id)buildFeedMarkModel:(id)arg1 mediaPath:(id)arg2;
+ (id)buildSceneMarkModel:(int)arg1 fromVC:(id)arg2 fromCell:(id)arg3 playerView:(id)arg4;
+ (void)tryCleanFinderMediaCacheWhenFindPageDisappear;
+ (void)tryCleanFinderMediaCacheWhenFindPageDisappearWithCompletion:(id /* block */)arg1;
- (id)getPBPropertyTable;
- (id)init;
- (void)cleanExpiredFeedFromChain;
- (void)cleanSceneChainBeforeTimestamp:(unsigned long long)arg1;
- (void)syncToLocal;
- (void)_syncToLocal;
- (void)feedWillPlay:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3 fromCell:(id)arg4 playerView:(id)arg5 mediaPath:(id)arg6;
- (void)createNewSceneChainArray;
- (void)cleanSceneChainArrayContainer;
- (void)markTargetFeedId:(id)arg1 actionFlag:(unsigned long long)arg2;
- (long long)triggerCoreServiceDiskCleanForSize:(long long)arg1;
- (long long)triggerDiskCleanWhenFindPageDisappear;
- (long long)_dispatchDiskCleanForSize:(long long)arg1 cleanInterval:(long long)arg2 lastCleanTs:(long long *)arg3;
- (long long)_triggerDiskCleanForSize:(long long)arg1 cleanInterval:(long long)arg2 lastCleanTs:(long long *)arg3;
- (id)markWillCleanFeedInfoForReport:(id)arg1;
- (BOOL)shouldCleanFeedMediaAsDBDeleteAction;
- (void)_triggerDBDeletedFeedMediaCleanAction;
- (long long)_triggerHeaderDiskCleanForSize:(long long)arg1 cleanedSize:(long long)arg2;
- (long long)_cleanFinderHeaderForSize:(long long)arg1;
- (id)_cleanCandidatesInDirectory:(id)arg1 minAgeSeconds:(long long)arg2 maxCandidateCount:(long long)arg3;
- (long long)_fileTimestampWithDate:(id)arg1;
- (long long)_deleteCleanCandidates:(id)arg1 targetSize:(long long)arg2 maxCleanCount:(long long)arg3 logTag:(id)arg4;
- (long long)triggerCleanAndReportBy:(id)arg1 targetSize:(long long)arg2 diskCategory:(unsigned long long)arg3 scene:(unsigned long long)arg4;
- (void)_removeFeedMarksForCleanedFeedIds:(id)arg1;
- (long long)_triggerTLDiskCleanActionByScene:(unsigned long long)arg1 targetSize:(long long)arg2;
- (BOOL)_filterNewSceneMarkModelFeedsBy:(id)arg1 containerSet:(id)arg2 scene:(unsigned long long)arg3 targetSize:(long long)arg4 accumulatedSize:(long long *)arg5;
- (void)cancelCleanDiskAction;
- (id)description;
- (long long)lastCoreServiceCleanFeedCount;
- (void)setLastCoreServiceCleanFeedCount:(long long)arg1;
- (id)sceneChainArrayContainer;
- (void)setSceneChainArrayContainer:(id)arg1;
- (id)feedTagInfoDic;
- (void)setFeedTagInfoDic:(id)arg1;
- (id)cleanedFeedInfoDic;
- (void)setCleanedFeedInfoDic:(id)arg1;
- (long long)lastCleanTs;
- (void)setLastCleanTs:(long long)arg1;
- (id)deletedByDBFeedsSet;
- (void)setDeletedByDBFeedsSet:(id)arg1;
- (unsigned long long)cleanActionState;
- (void)setCleanActionState:(unsigned long long)arg1;
- (long long)lastTLWarningCleanTs;
- (void)setLastTLWarningCleanTs:(long long)arg1;
- (long long)lastExitShareListCleanTs;
- (void)setLastExitShareListCleanTs:(long long)arg1;
- (long long)lastBaseServiceCleanTs;
- (void)setLastBaseServiceCleanTs:(long long)arg1;
- (long long)lastFindPageDisappearCleanTs;
- (void)setLastFindPageDisappearCleanTs:(long long)arg1;
- (void).cxx_destruct;
@end
