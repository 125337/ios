@interface MMLiveRemoteCustomRenderMetricsMonitor : NSObject <WCLoopMetricsCollectorDelegate>
{
    id /* block */ _checkCurrIsTopPerfLevelCallback; // +0x8
    id /* block */ _increasePerfLevelCallback; // +0x10
    id /* block */ _decreasePerfLevelCallback; // +0x18
    id /* block */ _checkTimeRangeContainWeffectCreateCallback; // +0x20
    id /* block */ _checkTimeRangeIsFullLoadCallback; // +0x28
    WCLoopMetricsCollector * _renderMetricsCollector; // +0x30
    NSMutableArray * _recentMetricsList; // +0x38
    double _lastDecreaseTime; // +0x40
}
- (id)init;
- (void)initDefaultData;
- (void)onRenderBegin;
- (void)onRenderEnd;
- (id)metricsLoopKey;
- (id)metricsActionKey;
- (void)tryIncreasePerformanceLevel;
- (void)tryDecreasePerformanceLevel;
- (void)addRenderMetrics:(id)arg1;
- (void)clearRenderMetrics;
- (void)checkRecentMetricsCacheExpire;
- (double)expireTime;
- (void)checkRecentMetricsCacheOverLimit;
- (unsigned long long)recentCacheMetricsCnt;
- (void)checkRecentMetricsReport;
- (BOOL)checkIsNeedToDecreasePerfLevel;
- (BOOL)checkRecentMetricsIsWorstCase;
- (BOOL)checkRecentMetricsIsCriticalCase;
- (BOOL)checkRecentMetricsIsSeriousCase;
- (double)minimumDurationBetweenDecrease;
- (double)worstDurationStandard;
- (double)criticalDurationStandard;
- (double)seriousDurationStandard;
- (unsigned long long)badCaseMetricsCheckCnt;
- (BOOL)isMetricsTimeRangeContainWeffectCreate:(id)arg1;
- (BOOL)checkIsNeedToIncreasePerfLevel;
- (BOOL)checkRecentMetricsIsGoodCase;
- (double)goodDurationStandard;
- (unsigned long long)goodCaseMetricsCheckCnt;
- (BOOL)isMetricsTimeRangeFullLoad:(id)arg1;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)logRenderDuration:(id)arg1;
- (double)metricsCollectionDuration;
- (id /* block */)checkCurrIsTopPerfLevelCallback;
- (void)setCheckCurrIsTopPerfLevelCallback:(id /* block */)arg1;
- (id /* block */)increasePerfLevelCallback;
- (void)setIncreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)decreasePerfLevelCallback;
- (void)setDecreasePerfLevelCallback:(id /* block */)arg1;
- (id /* block */)checkTimeRangeContainWeffectCreateCallback;
- (void)setCheckTimeRangeContainWeffectCreateCallback:(id /* block */)arg1;
- (id /* block */)checkTimeRangeIsFullLoadCallback;
- (void)setCheckTimeRangeIsFullLoadCallback:(id /* block */)arg1;
- (id)renderMetricsCollector;
- (void)setRenderMetricsCollector:(id)arg1;
- (id)recentMetricsList;
- (void)setRecentMetricsList:(id)arg1;
- (double)lastDecreaseTime;
- (void)setLastDecreaseTime:(double)arg1;
- (void).cxx_destruct;
@end
