@interface WCDisplayMetricsMonitor : NSObject
{
    CADisplayLink * _displayLink; // +0x8
    NSMutableArray * _metricsRecords; // +0x10
    id <WCDisplayMetricsMonitorDelegate> _delegate; // +0x18
    long long _preferredFramesPerSecond; // +0x20
    double _durationPerCollectionCycle; // +0x28
    WCDisplayMetrics * _currentMetrics; // +0x30
    unsigned long long _metricsRecordsMaximumCapacity; // +0x38
}
- (id)init;
- (id)metricsRecords;
- (BOOL)isMonitoring;
- (void)startMonitoring;
- (void)stopMonitoring;
- (void)pauseMonitoring;
- (void)resumeMonitoring;
- (void)handleScreenUpdate:(id)arg1;
- (void)makeMetricsCompleted:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)preferredFramesPerSecond;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (double)durationPerCollectionCycle;
- (void)setDurationPerCollectionCycle:(double)arg1;
- (id)currentMetrics;
- (unsigned long long)metricsRecordsMaximumCapacity;
- (void)setMetricsRecordsMaximumCapacity:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
