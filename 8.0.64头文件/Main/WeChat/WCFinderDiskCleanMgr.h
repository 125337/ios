@interface WCFinderDiskCleanMgr : NSObject <PBCoding>
{
    NSMutableArray * _sceneChainArrayContainer; // +0x8
    NSMutableDictionary * _feedTagInfoDic; // +0x10
    NSMutableDictionary * _cleanedFeedInfoDic; // +0x18
    long long _lastCleanTs; // +0x20
    NSMutableSet * _deletedByDBFeedsSet; // +0x28
    unsigned long long _cleanActionState; // +0x30
    long long _lastTLWarningCleanTs; // +0x38
    long long _lastExitShareListCleanTs; // +0x40
    long long _lastBaseServiceCleanTs; // +0x48
}
+ (void)PBArrayAdd_sceneChainArrayContainer;
+ (void)PBArrayAdd_feedTagInfoDic;
+ (void)PBArrayAdd_cleanedFeedInfoDic;
+ (void)PBArrayAdd_deletedByDBFeedsSet;
+ (void)PBArrayAdd_lastCleanTs;
+ (void)PBArrayAdd_lastTLWarningCleanTs;
+ (void)PBArrayAdd_lastExitShareListCleanTs;
+ (void)PBArrayAdd_lastBaseServiceCleanTs;
+ (void)initialize;
+ (id)sharedDiskReportQueue;
+ (id)buildFeedMarkModel:(id)arg1;
+ (id)buildSceneMarkModel:(int)arg1 fromVC:(id)arg2 fromCell:(id)arg3 playerView:(id)arg4;
- (id)getPBPropertyTable;
- (id)init;
- (void)syncToLocal;
- (void)_syncToLocal;
- (void)_checkFeedCleanEffectBy:(id)arg1;
- (void)feedWillPlay:(id)arg1 commentScene:(int)arg2 fromVC:(id)arg3 fromCell:(id)arg4 playerView:(id)arg5;
- (void)createNewSceneChainArray;
- (void)removeEmptySceneChainArray;
- (void)cleanSceneChainArrayContainer;
- (void)markTargetFeedId:(id)arg1 actionFlag:(unsigned long long)arg2;
- (BOOL)freeSizeIsMoreThanStandardLine;
- (void)triggerDiskCleanByScene:(unsigned long long)arg1;
- (long long)triggerCoreServiceDiskCleanForSize:(long long)arg1;
- (id)markWillCleanFeedInfoForReport:(id)arg1;
- (BOOL)shouldCleanFeedMediaAsDBDeleteAction;
- (void)deleteTargetFeedMediaArray:(id)arg1;
- (void)_triggerDBDeletedFeedMediaCleanAction;
- (long long)triggerCleanAndReportBy:(id)arg1 targetSize:(long long)arg2 diskCategory:(unsigned long long)arg3 scene:(unsigned long long)arg4;
- (long long)_triggerTLDiskCleanActionByScene:(unsigned long long)arg1 targetSize:(long long)arg2;
- (void)cleanExpiredCleanedFeedInfo;
- (id)_filterSceneMarkModelFeedsBy:(id)arg1;
- (void)_checkRepeatPlayFeedReport:(id)arg1 commentScene:(int)arg2;
- (void)cancelCleanDiskAction;
- (id)description;
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
- (void).cxx_destruct;
@end
