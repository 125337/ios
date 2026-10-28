@interface MMBatteryPowerMonitorReporterStruct : NSObject
{
    unsigned int _powerMonitorMetricsType; // +0x8
    float _metricsTypePowereI; // +0xc
    float _metricsTypePowereU; // +0x10
    float _metricsTypePowereP; // +0x14
    float _metricsTypePowereBatteryLevel; // +0x18
    unsigned int _metricsTypeThermalStateChangedType; // +0x1c
    float _metricsTypeThermalStateDuration; // +0x20
    unsigned int _metricsTypeBaseBatteryState; // +0x24
    float _metricsTypeBaseBatteryLevel; // +0x28
    float _metricsTypeBaseCpuUsage; // +0x2c
    float _metricsTypeBaseGpuDeviceUtilization; // +0x30
    float _metricsTypeBaseGpuRendererUtilization; // +0x34
    float _metricsTypeBaseGpuTilerUtilization; // +0x38
    unsigned int _metricsTypeBaseisLowPowerMode; // +0x3c
    unsigned int _metricsTypeBaseNetworkType; // +0x40
    float _metricsTypeBaseBrightness; // +0x44
    unsigned int _metricsTypeBaseBlueToothState; // +0x48
    int _metricsTypeLiveEnergyMode; // +0x4c
    double _metricsTypePowereT; // +0x50
    unsigned long long _metricsTypeBaseScene; // +0x58
    long long _metricsTypeBaseThermalState; // +0x60
    NSString * _metricsTypeLiveRuleID; // +0x68
    unsigned long long _metricsTypeBaseRejectCPUTaskScene; // +0x70
    unsigned long long _metricsTypeLiveRenderViewType; // +0x78
    unsigned long long _metricsTypeLiveRenderFrameTime; // +0x80
}
- (id)init;
- (id)initWithInfo:(id)arg1;
- (id)toReport;
- (id)toFinderReport;
- (unsigned int)powerMonitorMetricsType;
- (void)setPowerMonitorMetricsType:(unsigned int)arg1;
- (float)metricsTypePowereI;
- (void)setMetricsTypePowereI:(float)arg1;
- (float)metricsTypePowereU;
- (void)setMetricsTypePowereU:(float)arg1;
- (float)metricsTypePowereP;
- (void)setMetricsTypePowereP:(float)arg1;
- (double)metricsTypePowereT;
- (void)setMetricsTypePowereT:(double)arg1;
- (float)metricsTypePowereBatteryLevel;
- (void)setMetricsTypePowereBatteryLevel:(float)arg1;
- (unsigned int)metricsTypeThermalStateChangedType;
- (void)setMetricsTypeThermalStateChangedType:(unsigned int)arg1;
- (float)metricsTypeThermalStateDuration;
- (void)setMetricsTypeThermalStateDuration:(float)arg1;
- (unsigned int)metricsTypeBaseBatteryState;
- (void)setMetricsTypeBaseBatteryState:(unsigned int)arg1;
- (float)metricsTypeBaseBatteryLevel;
- (void)setMetricsTypeBaseBatteryLevel:(float)arg1;
- (float)metricsTypeBaseCpuUsage;
- (void)setMetricsTypeBaseCpuUsage:(float)arg1;
- (float)metricsTypeBaseGpuDeviceUtilization;
- (void)setMetricsTypeBaseGpuDeviceUtilization:(float)arg1;
- (float)metricsTypeBaseGpuRendererUtilization;
- (void)setMetricsTypeBaseGpuRendererUtilization:(float)arg1;
- (float)metricsTypeBaseGpuTilerUtilization;
- (void)setMetricsTypeBaseGpuTilerUtilization:(float)arg1;
- (unsigned int)metricsTypeBaseisLowPowerMode;
- (void)setMetricsTypeBaseisLowPowerMode:(unsigned int)arg1;
- (unsigned int)metricsTypeBaseNetworkType;
- (void)setMetricsTypeBaseNetworkType:(unsigned int)arg1;
- (float)metricsTypeBaseBrightness;
- (void)setMetricsTypeBaseBrightness:(float)arg1;
- (unsigned int)metricsTypeBaseBlueToothState;
- (void)setMetricsTypeBaseBlueToothState:(unsigned int)arg1;
- (unsigned long long)metricsTypeBaseScene;
- (void)setMetricsTypeBaseScene:(unsigned long long)arg1;
- (long long)metricsTypeBaseThermalState;
- (void)setMetricsTypeBaseThermalState:(long long)arg1;
- (int)metricsTypeLiveEnergyMode;
- (void)setMetricsTypeLiveEnergyMode:(int)arg1;
- (id)metricsTypeLiveRuleID;
- (void)setMetricsTypeLiveRuleID:(id)arg1;
- (unsigned long long)metricsTypeBaseRejectCPUTaskScene;
- (void)setMetricsTypeBaseRejectCPUTaskScene:(unsigned long long)arg1;
- (unsigned long long)metricsTypeLiveRenderViewType;
- (void)setMetricsTypeLiveRenderViewType:(unsigned long long)arg1;
- (unsigned long long)metricsTypeLiveRenderFrameTime;
- (void)setMetricsTypeLiveRenderFrameTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
