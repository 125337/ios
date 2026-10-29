@interface MMLiveDisplayMonitor : NSObject <WCDisplayMetricsMonitorDelegate>
{
    WCDisplayMetricsMonitor * _metricsMonitor; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)currentMetrics;
- (id)metricsRecords;
- (void)startMetricsMonitor;
- (void)stopMetricsMonitor;
- (void)displayMetricsMonitor:(id)arg1 didCollectMetrics:(id)arg2;
- (id)metricsMonitor;
- (void).cxx_destruct;
@end

