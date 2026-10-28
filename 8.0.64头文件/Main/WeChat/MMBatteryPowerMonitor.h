@interface MMBatteryPowerMonitor : MMRootService <MMLiveTaskMgrExt, IExptServiceExt, MMServiceProtocol>
{
    BOOL _isMonitoring; // +0x8
    BOOL _isLive; // +0x9
    BOOL _isFinder; // +0xa
    BOOL _batteryIsCharging; // +0xb
    BOOL _callerMonitoring; // +0xc
    BOOL _enable; // +0xd
    BOOL _injected; // +0xe
    float _currentBatteryLevel; // +0x10
    float _lastBatteryLevel; // +0x14
    MMLiveTask * _liveTask; // +0x18
    MMPowerABTest * _abTest; // +0x20
    long long _lastThermalState; // +0x28
    unsigned long long _type; // +0x30
    unsigned long long _scene; // +0x38
    double _lastBatteryChangeTime; // +0x40
    double _lastThermalStateChangedTime; // +0x48
    unsigned long long _liveRenderViewType; // +0x50
    unsigned long long _liveRenderViewFrameCnt; // +0x58
    double _liveRenderViewTotalFrameTime; // +0x60
    MMMetricsInfo * _lastReportedMetricsInfo; // +0x68
}
- (void)onServiceInit;
- (void)setup;
- (void)onServiceClearData;
- (void)onExptItemListChange;
- (double)reportTimeInterval;
- (void)metricsMonitor:(id)arg1 didCollectMetricsInfo:(id)arg2;
- (void)reportMetricsInfo:(id)arg1;
- (void)startMonitorType:(unsigned long long)arg1 scene:(unsigned long long)arg2;
- (void)stopAllMonitorScene:(unsigned long long)arg1;
- (void)stopALLMonitor;
- (void)startPowerReport;
- (void)batteryLevelDidChange;
- (void)attachSceneInfo:(id)arg1;
- (void)onLiveTask:(id)arg1 statistics:(id)arg2;
- (unsigned int)extraSceneInfo;
- (BOOL)isRecentUseFaceDetect;
- (BOOL)isRecentUseFaceDecode;
- (BOOL)isKTVSinger;
- (BOOL)isKTVListener;
- (BOOL)isCaptureRes2560x1440;
- (id)logWithReport:(id)arg1;
- (void)batteryStateDidChange;
- (void)stopPowerReport;
- (void)startMonitoring;
- (void)stopMonitoring;
- (float)devicemAh;
- (float)estimateVoltage;
- (void)startThermalStateDurationReport;
- (void)stopReportThermalStateDuration;
- (void)thermalStateDidChange;
- (void)startReportForThermalStateChanged:(unsigned long long)arg1;
- (void)reportMetricsDataForThermalStateChangedIfNeed:(unsigned long long)arg1 lastDuration:(double)arg2;
- (void)startReportWithMetricsInfo:(id)arg1;
- (unsigned long long)typeWithLastThermalState:(long long)arg1 currentThermalState:(long long)arg2;
- (void)finderTypeChanged:(id)arg1;
- (void)liveTypeChanged:(id)arg1;
- (BOOL)rejectHighCPUTaskScene:(unsigned long long)arg1;
- (void)statisticsRenderView;
- (BOOL)isNewDevice;
- (void)reportFinder:(id)arg1;
- (void)liveDataItemUpdated:(id)arg1;
- (void)onEnterFinder;
- (void)hook4Player;
- (void)startSwizzlePlayer;
- (BOOL)isMonitoring;
- (void)setIsMonitoring:(BOOL)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)abTest;
- (void)setAbTest:(id)arg1;
- (BOOL)isLive;
- (void)setIsLive:(BOOL)arg1;
- (BOOL)isFinder;
- (void)setIsFinder:(BOOL)arg1;
- (float)currentBatteryLevel;
- (void)setCurrentBatteryLevel:(float)arg1;
- (BOOL)batteryIsCharging;
- (void)setBatteryIsCharging:(BOOL)arg1;
- (long long)lastThermalState;
- (void)setLastThermalState:(long long)arg1;
- (BOOL)callerMonitoring;
- (void)setCallerMonitoring:(BOOL)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (float)lastBatteryLevel;
- (void)setLastBatteryLevel:(float)arg1;
- (double)lastBatteryChangeTime;
- (void)setLastBatteryChangeTime:(double)arg1;
- (double)lastThermalStateChangedTime;
- (void)setLastThermalStateChangedTime:(double)arg1;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (unsigned long long)liveRenderViewType;
- (void)setLiveRenderViewType:(unsigned long long)arg1;
- (unsigned long long)liveRenderViewFrameCnt;
- (void)setLiveRenderViewFrameCnt:(unsigned long long)arg1;
- (double)liveRenderViewTotalFrameTime;
- (void)setLiveRenderViewTotalFrameTime:(double)arg1;
- (id)lastReportedMetricsInfo;
- (void)setLastReportedMetricsInfo:(id)arg1;
- (BOOL)injected;
- (void)setInjected:(BOOL)arg1;
- (void).cxx_destruct;
@end
