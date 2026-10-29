@interface MMFPSMonitor : MMRootService <MMUIViewControllerExt, IExptServiceExt, WCFPSMonitorPluginDelegate, MMServiceProtocol>
{
    WCFPSMonitorPlugin * m_plugin; // +0x8
    WCFPSMonitorConfig * m_configForScroll; // +0x10
    WCFPSMonitorConfig * m_configForTransition; // +0x18
    unsigned long long m_trackingType; // +0x20
    NSString * m_scene; // +0x28
    MemoryMappedKV * m_reportKV; // +0x30
    long long m_threshold; // +0x38
    double m_hitchRate; // +0x40
    double m_hangTime; // +0x48
}
- (void)onServiceInit;
- (void)setupReportStrategy;
- (void)setupPluginConfiguration;
- (BOOL)isFPSMonitorDisable;
- (void)setFPSMonitorDisable:(BOOL)arg1;
- (double)hitchRate;
- (void)resetHitchRate;
- (double)hangTime;
- (void)resetHangTime;
- (void)doReport;
- (void)handleUIApplicationWillResignActiveNotification:(id)arg1;
- (void)handlePerfWarningNotification:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onUITrackingRunLoopEntry;
- (void)onUITrackingRunLoopExit;
- (BOOL)shouldPrintViewTreeWithDuration:(double)arg1;
- (void)onFPSMonitorPluginReport:(id)arg1 totalTime:(double)arg2 dropFrameTime:(double)arg3 hitchRate:(double)arg4 scene:(id)arg5;
- (void)onExptItemListChange;
- (void).cxx_destruct;
@end

