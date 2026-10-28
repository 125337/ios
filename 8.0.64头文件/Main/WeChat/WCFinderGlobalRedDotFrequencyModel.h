@interface WCFinderGlobalRedDotFrequencyModel : NSObject <WCFinderRedDotExposeModelDelegate, WCFinderGlobalRedDotFrequencyReportHelperDelegate, PBCoding>
{
    BOOL _findPageIsInExpose; // +0x8
    BOOL _findPageInTabBar; // +0x9
    WCFinderRedDotCTRModel * _ctrCalcHelper; // +0x10
    NSMutableDictionary * _banStateMarkDic; // +0x18
    NSMutableDictionary * _businessExposeDic; // +0x20
    NSMutableDictionary * _exposeModelDic; // +0x28
    NSMutableDictionary * _subBusinessBanQueueDic; // +0x30
    id /* block */ _clickRedDotStayReportBlock; // +0x38
    WCFinderGlobalRedDotFrequencyReportHelper * _reportHelper; // +0x40
    WCFinderDiscoveryRedDotVerdictTool * _reddotVerdictTool; // +0x48
    WCFinderRedDotDictionaryHelper * _lastSimulCompetitionDic; // +0x50
    NSObject<OS_dispatch_queue> * _dispatchQueue; // +0x58
    WCFinderNoneRedDotArrayOutputPredictor * _reddotSinglePredictHelper; // +0x60
}
+ (id)findEntryTypeKeyPathValueDic;
+ (BOOL)targetRedDotPathIsUnderLimitState:(id)arg1;
+ (BOOL)ctrlInfoHasFindEntryRedDot:(id)arg1;
+ (unsigned long long)convertRedDotPathToBusinessType:(id)arg1 businessType:(unsigned long long)arg2;
+ (BOOL)targetEntryIsOpenFromPath:(id)arg1;
+ (id)getConfigBusinessTypeSetFromPath:(id)arg1;
+ (id)getFindPageBusinessEntranceFromCtrlInfo:(id)arg1;
+ (id)genDicKeyFromPath:(id)arg1 businessType:(unsigned long long)arg2;
+ (BOOL)globalRedDotIsFunction;
+ (BOOL)globalRedDotSimulFunction;
+ (BOOL)globalRedDotReportWork;
+ (id)genEntryRedDotPathFromRowType:(long long)arg1;
+ (BOOL)isInBanFrequencyFromExposeModel:(id)arg1;
+ (BOOL)shouldResetBanFrequencyFromExposeModel:(id)arg1;
+ (BOOL)shouldResetExposeAndBanFrequencyFromExposeModel:(id)arg1;
+ (unsigned long long)getFrequencyBusinessTypeFromCtrlInfo:(id)arg1;
+ (BOOL)isIgnoreCtrCalcAtPath:(id)arg1;
+ (id)getTargetControlItemsAtPath:(id)arg1 businessType:(unsigned long long)arg2;
+ (id)convertMMBusinessTypeToRedDotPath:(unsigned long long)arg1;
+ (void)PBArrayAdd_exposeModelDic;
+ (void)PBArrayAdd_subBusinessBanQueueDic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)lastSimulCompetitionDic;
- (id)ctrCalcHelper;
- (id)reportHelper;
- (void)setupFrequencyConfig;
- (void)moveBanBusinessTypeFromRedDotPath:(id)arg1;
- (unsigned long long)getCurrentBanBusinessTypeFromRedDotPath:(id)arg1;
- (void)addBanBusinessToEndFromRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)removeBanBusinessFromRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)findPageWillClickAtRowType:(long long)arg1 withRedDot:(BOOL)arg2;
- (void)checkAndClearCurrentSimulRedDotConflict;
- (void)triggerRedDotSimulAbortFromCtrlInfo:(id)arg1;
- (void)checkShouldResetByRedDotClickAtRowType:(long long)arg1 businessType:(unsigned long long)arg2;
- (void)_dispatchFindFriendPageViewWillDisappear;
- (void)findFriendPageViewWillDisappear;
- (void)findFriendPageViewWillAppear;
- (void)findFriendPageTabDisappear;
- (id)banShowRedDotAtRedDotPath:(id)arg1;
- (id)banShowRedDotAtRedDotPath:(id)arg1 fromCtrlInfo:(id)arg2;
- (id)banShowRedDotAtRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (void)mergeReportInfoFromPath:(id)arg1 businessType:(unsigned long long)arg2 isBanState:(BOOL)arg3 toResModel:(id)arg4;
- (id)genSyncReddotFreqInfoFromPathArray:(id)arg1;
- (void)_resetAllEntryConfig:(long long)arg1;
- (unsigned long long)checkWillBanRedDotPathFromReceiveNewCtrlInfo:(id)arg1;
- (id)checkWillBanRedDotPathFrom:(id)arg1 businessType:(unsigned long long)arg2 checkFindPage:(BOOL)arg3;
- (id)checkWillBanRedDotPathReceiveCtrlInfo:(id)arg1 checkFindPage:(BOOL)arg2;
- (BOOL)getSimulCheckResByReceiveCtrlInfo:(id)arg1 redDotPath:(id)arg2 businessType:(unsigned long long)arg3;
- (id)_checkWillBanRedDotPathFrom:(id)arg1 businessType:(unsigned long long)arg2 checkFindPage:(BOOL)arg3 receiveCtrlInfo:(id)arg4;
- (id)getFindPageInPenaltyBusinessInfo;
- (BOOL)_isLimitBySimulFromReceiveCtrlInfo:(id)arg1;
- (BOOL)_isLimitBySimulExposeFrom:(id)arg1 businessType:(unsigned long long)arg2;
- (BOOL)_isLimitBySimulExposeFrom:(id)arg1 businessType:(unsigned long long)arg2 receiveCtrlInfo:(id)arg3;
- (BOOL)simulExposeStrategyOpen;
- (long long)getCurrentSimulExposeBusinessCount;
- (void)updateTargetRedDotExposeActionFromCtrlInfo:(id)arg1 redDotId:(id)arg2;
- (long long)getTargetExposeCountByCtrlInfo:(id)arg1;
- (void)updateSnsRedDotId:(id)arg1;
- (id)getSnsRedDotId;
- (BOOL)shouldFetchClientFreqCtrlRedDotSyncAtPath:(id)arg1;
- (void)onRedDotExposeModelResetExposeBanCountAtPath:(id)arg1 businessType:(unsigned long long)arg2 cleanAccType:(long long)arg3;
- (void)onRedDotExposeModelExposeCountIncreaseAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetAccExpStartTimeAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetNextPunishMAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetIsBanAsUseBusinessAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetIsNextPunishAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentIsNextCleanPunishAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetExposeRedDotIdAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCtrValueAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetIsExemptNMControlBusinessAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentPunishStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)getCurrentPunishStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentExposeCntAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentBanCntAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetWinTypeAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetWinSubTypeAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)onReportHelperGetCurrentExposeStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)getCurrentExposeStageAtPath:(id)arg1 businessType:(unsigned long long)arg2;
- (long long)getNextPunishMFromExposeModel:(id)arg1;
- (void)triggerUnexposeRedDotSupplementStrategy;
- (void)setCtrCalcHelper:(id)arg1;
- (id)banStateMarkDic;
- (void)setBanStateMarkDic:(id)arg1;
- (id)businessExposeDic;
- (void)setBusinessExposeDic:(id)arg1;
- (id)exposeModelDic;
- (void)setExposeModelDic:(id)arg1;
- (id)subBusinessBanQueueDic;
- (void)setSubBusinessBanQueueDic:(id)arg1;
- (id /* block */)clickRedDotStayReportBlock;
- (void)setClickRedDotStayReportBlock:(id /* block */)arg1;
- (void)setReportHelper:(id)arg1;
- (id)reddotVerdictTool;
- (void)setReddotVerdictTool:(id)arg1;
- (BOOL)findPageIsInExpose;
- (void)setFindPageIsInExpose:(BOOL)arg1;
- (BOOL)findPageInTabBar;
- (void)setFindPageInTabBar:(BOOL)arg1;
- (void)setLastSimulCompetitionDic:(id)arg1;
- (id)dispatchQueue;
- (void)setDispatchQueue:(id)arg1;
- (id)reddotSinglePredictHelper;
- (void)setReddotSinglePredictHelper:(id)arg1;
- (void).cxx_destruct;
@end
