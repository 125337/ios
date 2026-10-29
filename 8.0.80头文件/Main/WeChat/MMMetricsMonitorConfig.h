@interface MMMetricsMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _autoKVReport; // +0x9
    int _dumpInterval; // +0xc
    int _dataRemainDays; // +0x10
    int _kvReportInterval; // +0x14
    MMCPUMonitorConfig * _cpuMonitorConfig; // +0x18
    MMGPUMonitorConfig * _gpuMonitorConfig; // +0x20
    MMLocationMonitorConfig * _locationMonitorConfig; // +0x28
    MMNetworkMonitorConfig * _networkMonitorConfig; // +0x30
    MMAudioMonitorConfig * _audioMonitorConfig; // +0x38
    MMBatteryMonitorConfig * _batteryMonitorConfig; // +0x40
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_cpuMonitorConfig;
+ (void)PBArrayAdd_gpuMonitorConfig;
+ (void)PBArrayAdd_networkMonitorConfig;
+ (void)PBArrayAdd_audioMonitorConfig;
+ (void)PBArrayAdd_locationMonitorConfig;
+ (void)PBArrayAdd_batteryMonitorConfig;
+ (void)PBArrayAdd_dumpInterval;
+ (void)PBArrayAdd_dataRemainDays;
+ (void)PBArrayAdd_autoKVReport;
+ (void)PBArrayAdd_kvReportInterval;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (void)updateKVConfigWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (int)dumpInterval;
- (void)setDumpInterval:(int)arg1;
- (int)dataRemainDays;
- (void)setDataRemainDays:(int)arg1;
- (BOOL)autoKVReport;
- (void)setAutoKVReport:(BOOL)arg1;
- (int)kvReportInterval;
- (void)setKvReportInterval:(int)arg1;
- (id)cpuMonitorConfig;
- (void)setCpuMonitorConfig:(id)arg1;
- (id)gpuMonitorConfig;
- (void)setGpuMonitorConfig:(id)arg1;
- (id)locationMonitorConfig;
- (void)setLocationMonitorConfig:(id)arg1;
- (id)networkMonitorConfig;
- (void)setNetworkMonitorConfig:(id)arg1;
- (id)audioMonitorConfig;
- (void)setAudioMonitorConfig:(id)arg1;
- (id)batteryMonitorConfig;
- (void)setBatteryMonitorConfig:(id)arg1;
- (void).cxx_destruct;
@end
