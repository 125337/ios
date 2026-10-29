@interface MMCPUMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    BOOL _criticalEventEnabled; // +0x9
    BOOL _periodicEventEnabled; // +0xa
    double _dumpInterval; // +0x10
    double _minCPUUsageToDump; // +0x18
    double _minCPUUsageToReport; // +0x20
    MMCPUCriticalEventConfig * _criticalEventConfig; // +0x28
    MMCPUPeriodicEventConfig * _periodicEventConfig; // +0x30
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_dumpInterval;
+ (void)PBArrayAdd_minCPUUsageToDump;
+ (void)PBArrayAdd_minCPUUsageToReport;
+ (void)PBArrayAdd_criticalEventEnabled;
+ (void)PBArrayAdd_criticalEventConfig;
+ (void)PBArrayAdd_periodicEventEnabled;
+ (void)PBArrayAdd_periodicEventConfig;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (double)dumpInterval;
- (void)setDumpInterval:(double)arg1;
- (double)minCPUUsageToDump;
- (void)setMinCPUUsageToDump:(double)arg1;
- (double)minCPUUsageToReport;
- (void)setMinCPUUsageToReport:(double)arg1;
- (BOOL)criticalEventEnabled;
- (void)setCriticalEventEnabled:(BOOL)arg1;
- (id)criticalEventConfig;
- (void)setCriticalEventConfig:(id)arg1;
- (BOOL)periodicEventEnabled;
- (void)setPeriodicEventEnabled:(BOOL)arg1;
- (id)periodicEventConfig;
- (void)setPeriodicEventConfig:(id)arg1;
- (void).cxx_destruct;
@end
