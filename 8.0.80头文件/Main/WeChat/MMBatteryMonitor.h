@interface MMBatteryMonitor : NSObject
{
    MMBatteryMonitorConfig * m_config; // +0x8
    MMMetricsDB * m_metricsDB; // +0x10
    BOOL m_isMonitoring; // +0x18
    BOOL m_isForeground; // +0x19
    BOOL m_isBatteryUnplugged; // +0x1a
    BOOL m_isLastLowPowerMode; // +0x1b
    double m_lastBatteryLevel; // +0x20
    double m_lastBatteryLevelChangeTime; // +0x28
    double m_lastActiveTime; // +0x30
    long long m_lastThermalState; // +0x38
}
+ (id)sharedInstance;
- (id)init;
- (void)setConfig:(id)arg1;
- (void)setMetricsDB:(id)arg1;
- (BOOL)isMonitoring;
- (void)startMonitoring;
- (void)updateSystemState;
- (void)stopMonitoring;
- (void)updatePowerMode;
- (void)handlePowerStateDidChangeNotification;
- (void)updateThermalState;
- (void)handleThermalStateDidChangeNotification;
- (void)handleBecomeActiveNotification;
- (void)handleResignActiveNotification;
- (void)handleBatteryStateDidChangeNotification;
- (void)handleBatteryLevelDidChangeNotification;
- (void).cxx_destruct;
@end
