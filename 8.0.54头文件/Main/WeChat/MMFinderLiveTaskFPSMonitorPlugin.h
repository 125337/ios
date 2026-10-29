@interface MMFinderLiveTaskFPSMonitorPlugin : MMLiveTaskBaseFunctionPlugin
{
    BOOL _started; // +0x8
    _TtC6WeChat22MMFinderLiveFPSMonitor * _monitor; // +0x10
}
- (void)startMonitor;
- (void)stopMonitor;
- (void)report;
- (void)dealloc;
- (void)createMonitorIfNeeded;
- (id)monitor;
- (void)setMonitor:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end

