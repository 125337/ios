@interface MMCPUTimeProfilerConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    unsigned int _checkTime; // +0xc
    unsigned int _checkCount; // +0x10
    unsigned int _reportLimit; // +0x14
    double _dumpInternal; // +0x18
    double _minCpuUsageToDump; // +0x20
    double _criticalUsage; // +0x28
    double _minCpuUsageToReport; // +0x30
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_dumpInternal;
+ (void)PBArrayAdd_minCpuUsageToDump;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)PBArrayAdd_minCpuUsageToReport;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (id)generateEventConfig;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (double)dumpInternal;
- (void)setDumpInternal:(double)arg1;
- (double)minCpuUsageToDump;
- (void)setMinCpuUsageToDump:(double)arg1;
- (unsigned int)checkTime;
- (void)setCheckTime:(unsigned int)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (double)criticalUsage;
- (void)setCriticalUsage:(double)arg1;
- (double)minCpuUsageToReport;
- (void)setMinCpuUsageToReport:(double)arg1;
@end

