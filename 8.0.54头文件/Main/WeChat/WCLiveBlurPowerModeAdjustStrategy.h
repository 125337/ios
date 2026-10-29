@interface WCLiveBlurPowerModeAdjustStrategy : NSObject
{
    NSString * _rootId; // +0x8
    id /* block */ _badScoreCntOverLimitBlock; // +0x10
    id /* block */ _ordinaryScoreCntOverLimitBlock; // +0x18
    id /* block */ _adjustParamChangeBlock; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    WCLiveBlurPowerModeAdjustParam * _currentAdjustParam; // +0x30
    unsigned long long _currBadScoreCnt; // +0x38
    unsigned long long _currOrdinaryScoreCnt; // +0x40
    unsigned long long _currAdjustedCheckNumIndex; // +0x48
}
- (id)initWithTaskId:(id)arg1 adjustParam:(id)arg2;
- (void)analyzeStaticBlurPersistTime:(double)arg1;
- (void)clearAllStates;
- (void)updateAdjustParam:(id)arg1;
- (void)handleAnalysisScore:(unsigned long long)arg1;
- (BOOL)enhanceCheckNumIfNeeded;
- (BOOL)reduceCheckNumIfNeeded;
- (void)clearBadScoreRecords;
- (void)increaseBadScoreCntWithCheckLimit;
- (void)clearOrdinaryScoreRecords;
- (void)increaseOrdinaryScoreCntWithCheckLimit;
- (void)checkAdjustParamEmpty;
- (double)badScoreAnalysisTime;
- (double)goodScoreAnalysisTime;
- (unsigned long long)badScoreMaxCnt;
- (unsigned long long)ordinaryScoreMaxCnt;
- (id)staticBlurEnterCheckNumList;
- (unsigned long long)currRealTimeBlurEnterContrastCheckCnt;
- (unsigned long long)currRealTimeBlurEnterColorDisCheckCnt;
- (unsigned long long)maxRealTimeBlurEnterContrastCheckCnt;
- (unsigned long long)maxRealTimeBlurEnterColorDisCheckCnt;
- (unsigned long long)enhanceCheckNumBadScoreStandardCnt;
- (unsigned long long)enhanceCheckNumOrdinaryScoreStandardCnt;
- (BOOL)isAdjustFailed;
- (unsigned long long)currStaticBlurEnterCheckCnt;
- (unsigned long long)maxStaticBlurEnterCheckCnt;
- (unsigned long long)sumWeakScoreMaxCnt;
- (double)similarContrastRatio;
- (double)similarColorDistance;
- (double)similarStandardRate;
- (BOOL)isSilenceHandle;
- (id)rootId;
- (void)setRootId:(id)arg1;
- (id /* block */)badScoreCntOverLimitBlock;
- (void)setBadScoreCntOverLimitBlock:(id /* block */)arg1;
- (id /* block */)ordinaryScoreCntOverLimitBlock;
- (void)setOrdinaryScoreCntOverLimitBlock:(id /* block */)arg1;
- (id /* block */)adjustParamChangeBlock;
- (void)setAdjustParamChangeBlock:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)currentAdjustParam;
- (void)setCurrentAdjustParam:(id)arg1;
- (unsigned long long)currBadScoreCnt;
- (void)setCurrBadScoreCnt:(unsigned long long)arg1;
- (unsigned long long)currOrdinaryScoreCnt;
- (void)setCurrOrdinaryScoreCnt:(unsigned long long)arg1;
- (unsigned long long)currAdjustedCheckNumIndex;
- (void)setCurrAdjustedCheckNumIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

