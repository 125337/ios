@interface MMLiveMagicRewardMemoryMonitorTask : NSObject
{
    BOOL _isStartMonitor; // +0x8
    id /* block */ _getMonitorTimeCallback; // +0x10
}
+ (double)defaultMonitorTime;
- (void)startMonitor;
- (void)stopMonitor;
- (void)restartMonitor;
- (void)checkMemory;
- (void)forceCheckMemoryIfNeedAfterTime:(double)arg1;
- (void)cancel;
- (double)getMonitorTime;
- (BOOL)isStartMonitor;
- (void)setIsStartMonitor:(BOOL)arg1;
- (id /* block */)getMonitorTimeCallback;
- (void)setGetMonitorTimeCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
