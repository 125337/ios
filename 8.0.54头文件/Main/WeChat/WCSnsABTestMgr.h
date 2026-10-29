@interface WCSnsABTestMgr : NSObject <INewABTestMgrExt, MMKernelExt, PBMessageObserverDelegate>
{
    NSMutableDictionary * dicABTestInfo; // +0x8
    NSMutableDictionary * dicActionResult; // +0x10
    WCSnsABTestFeedHiddenInfo * feedHiddenInfo; // +0x18
    BOOL needWriteBackHiddenInfo; // +0x20
    BOOL needWriteBackOperationInfo; // +0x21
    NSArray * arrDeleteLayerId; // +0x28
    NSArray * arrDeleteExpId; // +0x30
    NSMutableDictionary * dicFeedQuestionBarHiddenInfo; // +0x38
    NSMutableDictionary * dicDocSnRepeatUrlHiddenInfo; // +0x40
}
- (id)init;
- (void)tryInitABTestInfo;
- (void)initABTestInfo:(id)arg1;
- (id)getLayerIdForDataItem:(id)arg1;
- (id)getABTestInfoForLayerId:(id)arg1;
- (BOOL)shouldHiddenTip:(id)arg1 dataItemId:(id)arg2;
- (BOOL)hiddenTip:(id)arg1 dataItemId:(id)arg2;
- (id)getFirstTip:(id)arg1;
- (BOOL)isFirstTip:(id)arg1 layerId:(id)arg2;
- (id)getTipData:(id)arg1 layerId:(id)arg2;
- (void)reportABTestResult:(id)arg1 result:(id)arg2;
- (void)tryReportABTestResult;
- (unsigned int)getABTestExperType:(id)arg1;
- (void)logABTestResult:(id)arg1 dataItemId:(id)arg2 tipActionResult:(id)arg3;
- (void)tryLogABTestResultTime:(id)arg1 dataItemId:(id)arg2 startTime:(BOOL)arg3 endTime:(BOOL)arg4;
- (id)pathForFeedHiddenInfo;
- (void)tryloadFeedHiddenInfo;
- (void)trySaveFeedHiddenInfo;
- (void)tryUpdateDleteLayerIdList;
- (void)tryUpdateDeleteExpIdList;
- (BOOL)couldRunSightPreload:(id)arg1;
- (void)clickDelayShowFeed:(id)arg1;
- (void)exposureDelayShowFeed:(id)arg1;
- (void)logFeatureDelayShowFeed:(id)arg1 opType:(unsigned int)arg2 clickTime:(unsigned int)arg3;
- (BOOL)hitTheDelayShowExp:(id)arg1;
- (BOOL)needDelayShow:(id)arg1;
- (BOOL)couldShowRepeatUrlMenuItem:(id)arg1;
- (BOOL)isOnRepeatUrlExperiment:(id)arg1;
- (void)operateUrlFeed:(int)arg1 dataItem:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onOperateUrlFeedReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cacheRepeatUrlAfterConfirmWithDocId:(id)arg1 snsOperationWrap:(id)arg2;
- (id)pathForDocSnRepeatUrlHiddenInfo;
- (void)tryLoadRepeatUrlHiddenInfo;
- (void)trySaveRepeatUrlHiddenInfo;
- (BOOL)isDataItemShouldHideForRepeatUrl:(id)arg1 hasCacheSnsRepeatUrlInfo:(BOOL)arg2;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)onManulLogOut;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceMemoryWarning;
- (void).cxx_destruct;
@end

