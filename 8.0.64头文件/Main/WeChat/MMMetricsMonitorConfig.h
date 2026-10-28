@interface MMMetricsMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _autoKVReport; // +0x9
    BOOL _autoStackReport; // +0xa
    int _dumpInternal; // +0xc
    int _kvReportInternal; // +0x10
    int _dataRemainDays; // +0x14
    MMCPUTimeProfilerConfig * _cpuTimeProfilerConfig; // +0x18
    MMGPUMonitorConfig * _gpuMonitorConfig; // +0x20
    MMLocationMonitorConfig * _locationMonitorConfig; // +0x28
    MMNetworkMonitorConfig * _networkMonitorConfig; // +0x30
    MMAudioMonitorConfig * _audioMonitorConfig; // +0x38
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_cpuTimeProfilerConfig;
+ (void)PBArrayAdd_gpuMonitorConfig;
+ (void)PBArrayAdd_networkMonitorConfig;
+ (void)PBArrayAdd_audioMonitorConfig;
+ (void)PBArrayAdd_locationMonitorConfig;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_kvReportInternal;
+ (void)PBArrayAdd_dataRemainDays;
+ (void)PBArrayAdd_autoKVReport;
+ (void)PBArrayAdd_autoStackReport;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (void)updateKVConfigWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (int)dumpInternal;
- (void)setDumpInternal:(int)arg1;
- (int)kvReportInternal;
- (void)setKvReportInternal:(int)arg1;
- (int)dataRemainDays;
- (void)setDataRemainDays:(int)arg1;
- (BOOL)autoKVReport;
- (void)setAutoKVReport:(BOOL)arg1;
- (BOOL)autoStackReport;
- (void)setAutoStackReport:(BOOL)arg1;
- (id)cpuTimeProfilerConfig;
- (void)setCpuTimeProfilerConfig:(id)arg1;
- (id)gpuMonitorConfig;
- (void)setGpuMonitorConfig:(id)arg1;
- (id)locationMonitorConfig;
- (void)setLocationMonitorConfig:(id)arg1;
- (id)networkMonitorConfig;
- (void)setNetworkMonitorConfig:(id)arg1;
- (id)audioMonitorConfig;
- (void)setAudioMonitorConfig:(id)arg1;
- (void).cxx_destruct;
@end
