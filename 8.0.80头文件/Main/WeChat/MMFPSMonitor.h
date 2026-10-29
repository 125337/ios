@interface MMFPSMonitor : MMRootService <MMUIViewControllerExt, IExptServiceExt, WCFPSMonitorPluginDelegate, MMServiceProtocol>
{
    WCFPSMonitorPlugin * m_plugin; // +0x8
    WCFPSMonitorConfig * m_configForScroll; // +0x10
    WCFPSMonitorConfig * m_configForPreScroll; // +0x18
    WCFPSMonitorConfig * m_configForTransition; // +0x20
    unsigned long long m_trackingType; // +0x28
    NSString * m_scene; // +0x30
    long long m_threshold; // +0x38
    double m_hitchRate; // +0x40
    double m_hangTime; // +0x48
    double m_scrollScore; // +0x50
    unsigned long long m_eventTag; // +0x58
}
- (void)onServiceInit;
- (void)setupReportStrategy;
- (void)setupPluginConfiguration;
- (void)updatePluginConfiguration;
- (BOOL)isFlameGraphTracing;
- (BOOL)isFPSMonitorDisable;
- (void)setFPSMonitorDisable:(BOOL)arg1;
- (double)hitchRate;
- (void)resetHitchRate;
- (double)hangTime;
- (void)resetHangTime;
- (double)scrollScore;
- (void)resetScrollScore;
- (void)setEventTag:(unsigned long long)arg1;
- (void)resetEventTag;
- (void)handleUIApplicationWillResignActiveNotification:(id)arg1;
- (void)handlePerfWarningNotification:(id)arg1;
- (void)MMUIViewControllerWillAppear:(id)arg1;
- (void)MMUIViewControllerDidAppear:(id)arg1;
- (void)onUITrackingRunLoopEntry;
- (void)onUITrackingRunLoopExit;
- (void)onSendEvent:(id)arg1;
- (void)onPreScrollEnd;
- (BOOL)shouldPrintViewTreeWithDuration:(double)arg1;
- (void)onFPSMonitorPluginReport:(id)arg1 trackingType:(unsigned long long)arg2 totalTime:(double)arg3 hitchRate:(double)arg4 scrollScore:(double)arg5 scene:(id)arg6;
- (void)onFPSMonitorPluginReport:(id)arg1 trackingType:(unsigned long long)arg2 preScrollTime:(double)arg3 scene:(id)arg4;
- (void)onExptItemListChange;
- (void).cxx_destruct;
@end
