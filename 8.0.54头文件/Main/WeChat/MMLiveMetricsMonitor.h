@interface MMLiveMetricsMonitor : NSObject <MMMetricsMonitorExt>
{
    MMLiveTask<MMLiveMetricsMonitorDelegate> * _liveTaskDelegate; // +0x8
    MMMetricsInfo * _lastReportedMetricsInfo; // +0x10
}
- (void)dealloc;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)attachLiveInfoIntoMetricsInfo:(id)arg1;
- (double)reportTimeInterval;
- (void)reportMetricsInfo:(id)arg1;
- (void)metricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (id)liveTaskDelegate;
- (void)setLiveTaskDelegate:(id)arg1;
- (id)lastReportedMetricsInfo;
- (void)setLastReportedMetricsInfo:(id)arg1;
- (void).cxx_destruct;
@end

