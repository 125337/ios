@interface CdnRenderStats : NSObject
{
    BOOL _printRenderFPS; // +0x8
    id <CdnRenderStatsDelegate> _delegate; // +0x10
    long long _blockThreshold; // +0x18
    unsigned long long _lastBlockTime; // +0x20
    long long _monitorInterval; // +0x28
    long long _frameCount; // +0x30
    unsigned long long _renderStartTime; // +0x38
    unsigned long long _lastRenderTime; // +0x40
    unsigned long long _lastFeelingRenderTime; // +0x48
    long long _fps; // +0x50
    unsigned long long _renderFpsStatCnt; // +0x58
    NSObject<OS_dispatch_source> * _monitorTimer; // +0x60
    NSObject<OS_dispatch_queue> * _monitorQueue; // +0x68
    unsigned long long _lastRenderTimeForMonitor; // +0x70
    id /* block */ _fpsReport; // +0x78
}
+ (id /* block */)createReportTimer:(long long)arg1 block:(id /* block */)arg2;
- (id)init;
- (void)setMonitorInterval:(long long)arg1;
- (void)updateRenderStats:(id /* block */)arg1;
- (void)resetPeriodStatistics;
- (void)pauseMonitor;
- (void)resumeMonitor;
- (void)appLeaveForeground;
- (void)appEnterForeground;
- (BOOL)isTooFrequentToRender;
- (unsigned long long)getLastRenderTime;
- (unsigned long long)getCurrRenderTime;
- (id /* block */)createFpsReporter;
- (void)dealloc;
- (void)increaseRenderFpsStatCnt;
- (void)logForRenderStatIfNeed;
- (void)updateFps:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)blockThreshold;
- (void)setBlockThreshold:(long long)arg1;
- (unsigned long long)lastBlockTime;
- (void)setLastBlockTime:(unsigned long long)arg1;
- (BOOL)printRenderFPS;
- (void)setPrintRenderFPS:(BOOL)arg1;
- (long long)monitorInterval;
- (long long)frameCount;
- (void)setFrameCount:(long long)arg1;
- (unsigned long long)renderStartTime;
- (void)setRenderStartTime:(unsigned long long)arg1;
- (unsigned long long)lastRenderTime;
- (void)setLastRenderTime:(unsigned long long)arg1;
- (unsigned long long)lastFeelingRenderTime;
- (void)setLastFeelingRenderTime:(unsigned long long)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (unsigned long long)renderFpsStatCnt;
- (void)setRenderFpsStatCnt:(unsigned long long)arg1;
- (id)monitorTimer;
- (void)setMonitorTimer:(id)arg1;
- (id)monitorQueue;
- (void)setMonitorQueue:(id)arg1;
- (unsigned long long)lastRenderTimeForMonitor;
- (void)setLastRenderTimeForMonitor:(unsigned long long)arg1;
- (id /* block */)fpsReport;
- (void)setFpsReport:(id /* block */)arg1;
- (void).cxx_destruct;
@end

