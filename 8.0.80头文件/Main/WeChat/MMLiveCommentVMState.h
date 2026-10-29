@interface MMLiveCommentVMState : NSObject
{
    BOOL _isCustomAppendData; // +0x8
    BOOL _enableCustomAppendData; // +0x9
    BOOL _isDisplayUnReadCount; // +0xa
    BOOL _isInSmoothMode; // +0xb
    BOOL _isInLowPowerMode; // +0xc
    BOOL _needEnterLowFrequencyRefreshMode; // +0xd
    BOOL _isInLowFrequencyRefreshMode; // +0xe
    BOOL _isRefreshLowFrequencyDistanceData; // +0xf
    BOOL _isAppendLowFrequencyDistanceData; // +0x10
    unsigned long long _enableAdjustPerformanceMode; // +0x18
    id /* block */ _getCommentVMUnMergeCount; // +0x20
    MMLiveTaskId * _taskId; // +0x28
    FinderLiveBoxId * _boxId; // +0x30
    unsigned long long _maxAppendLineCount; // +0x38
    double _twoLinesEndDelay; // +0x40
    double _threeLinesEndDelay; // +0x48
    double _fourLinesEndDelay; // +0x50
    double _lowFrequencyModeEnterTime; // +0x58
    double _lowFrequencyModeLastDuration; // +0x60
    unsigned long long _lowFrequencyDistanceCnt; // +0x68
}
- (id)initWithTaskId:(id)arg1 boxId:(id)arg2;
- (void)initData;
- (BOOL)isCommentAppendBeginDelay;
- (BOOL)isCommentAppendEndDelay;
- (id)commentDataMgr;
- (unsigned long long)currAppendSpeed;
- (unsigned long long)currAppendSpeedToRefresh;
- (unsigned long long)currUnMergeCnt;
- (void)setIsDisplayUnReadCount:(BOOL)arg1;
- (void)setIsInSmoothMode:(BOOL)arg1;
- (double)getAppendBeginDuration;
- (unsigned long long)getCurrAppendSpeedForPublicBox;
- (unsigned long long)getCurrAppendSpeedToRefreshForPublicBox;
- (unsigned long long)getCurrAppendSpeedForPrivateBox;
- (void)updateIsInLowFrequencyRefreshMode;
- (void)keepProgressAfterExitPowerMode;
- (double)getBeginDelayDurationForFinderCellFrames:(id)arg1 lastCustomAppendLines:(long long)arg2;
- (BOOL)hasRank:(id)arg1;
- (double)getEndDelayDurationForFinderCellFrames:(id)arg1;
- (double)getCustomAppendDurationForIndex:(unsigned long long)arg1 finderCellFrames:(id)arg2;
- (double)getCustomAppendPubbleCellInitTopForIndex:(unsigned long long)arg1 finderCellFrames:(id)arg2;
- (unsigned long long)getAppendCountWithCellFrameArray:(id)arg1;
- (unsigned long long)getSumContentLines:(id)arg1;
- (double)getScrollSpeed;
- (BOOL)isSpeedUseCustomLinearScroll:(double)arg1;
- (BOOL)isLinearScrollSpeed:(double)arg1;
- (BOOL)isCurrentLinearScrollSpeed;
- (double)getLinearScrollFastSpeed;
- (double)estimateRefreshInterval;
- (double)getEstimateInterval;
- (double)getIntervalNormalizedScale:(double)arg1;
- (unsigned int)estimateRefreshCommentCountOnce;
- (unsigned long long)getCurrentScrollMode;
- (double)getActualScrollSpeed;
- (void)enterLowFrequencyRefreshModeIfNeeded;
- (void)exitLowFrequencyRefreshModeWithKeepProgress:(BOOL)arg1;
- (BOOL)hasDistanceDataForRefreshToKeepProgress;
- (BOOL)hasDistanceDataForAppendToKeepProgress;
- (BOOL)hasDistanceDataToKeepProgress;
- (void)onDistanceDataKeepProgressRefreshed;
- (void)onDistanceDataKeepProgressAppended;
- (void)checkLowFrequencyDistanceDataHasHandled;
- (void)updateLowFrequencyDistanceCnt:(unsigned long long)arg1;
- (BOOL)isCustomAppendData;
- (void)setIsCustomAppendData:(BOOL)arg1;
- (BOOL)enableCustomAppendData;
- (void)setEnableCustomAppendData:(BOOL)arg1;
- (BOOL)isDisplayUnReadCount;
- (BOOL)isInSmoothMode;
- (BOOL)isInLowPowerMode;
- (void)setIsInLowPowerMode:(BOOL)arg1;
- (BOOL)needEnterLowFrequencyRefreshMode;
- (void)setNeedEnterLowFrequencyRefreshMode:(BOOL)arg1;
- (unsigned long long)enableAdjustPerformanceMode;
- (void)setEnableAdjustPerformanceMode:(unsigned long long)arg1;
- (id /* block */)getCommentVMUnMergeCount;
- (void)setGetCommentVMUnMergeCount:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (unsigned long long)maxAppendLineCount;
- (void)setMaxAppendLineCount:(unsigned long long)arg1;
- (double)twoLinesEndDelay;
- (void)setTwoLinesEndDelay:(double)arg1;
- (double)threeLinesEndDelay;
- (void)setThreeLinesEndDelay:(double)arg1;
- (double)fourLinesEndDelay;
- (void)setFourLinesEndDelay:(double)arg1;
- (BOOL)isInLowFrequencyRefreshMode;
- (void)setIsInLowFrequencyRefreshMode:(BOOL)arg1;
- (double)lowFrequencyModeEnterTime;
- (void)setLowFrequencyModeEnterTime:(double)arg1;
- (double)lowFrequencyModeLastDuration;
- (void)setLowFrequencyModeLastDuration:(double)arg1;
- (unsigned long long)lowFrequencyDistanceCnt;
- (void)setLowFrequencyDistanceCnt:(unsigned long long)arg1;
- (BOOL)isRefreshLowFrequencyDistanceData;
- (void)setIsRefreshLowFrequencyDistanceData:(BOOL)arg1;
- (BOOL)isAppendLowFrequencyDistanceData;
- (void)setIsAppendLowFrequencyDistanceData:(BOOL)arg1;
- (void).cxx_destruct;
@end
