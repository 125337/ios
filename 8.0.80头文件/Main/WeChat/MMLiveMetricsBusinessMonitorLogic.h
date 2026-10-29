@interface MMLiveMetricsBusinessMonitorLogic : NSObject
{
    MMLiveUIPerfMonitorLogic * _uiPerfMonitorLogic; // +0x8
    MMLiveTaskId * _taskId; // +0x10
    unsigned long long _metricsTriggerCnt; // +0x18
    double _lastCollectTime; // +0x20
    WCLoopMetrics * _lastCaptureEffectMetrics; // +0x28
}
- (id)initWithTaskId:(id)arg1;
- (void)initDefaultDatas;
- (void)onLiveMetricsMonitorScheduleCollect;
- (void)onLiveCaptureAndEffectMetricsUpdate:(id)arg1;
- (BOOL)checkTimeToScheduleCollectMetricsBusiness;
- (void)scheduleCollectMetricsBusiness;
- (void)createUIPerfMonitorLogic;
- (void)collectUIPerfStatisticResult:(id)arg1 inPeriod:(double)arg2;
- (void)updateCaptureAndEffectMetrics:(id)arg1;
- (void)collectCaptureAndEffectPerfStatisticResult:(id)arg1 inPeriod:(double)arg2;
- (unsigned long long)scheduleCollectIntervalCnt;
- (id)liveTask;
- (id)uiPerfMonitorLogic;
- (void)setUiPerfMonitorLogic:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned long long)metricsTriggerCnt;
- (void)setMetricsTriggerCnt:(unsigned long long)arg1;
- (double)lastCollectTime;
- (void)setLastCollectTime:(double)arg1;
- (id)lastCaptureEffectMetrics;
- (void)setLastCaptureEffectMetrics:(id)arg1;
- (void).cxx_destruct;
@end
