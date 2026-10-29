@interface WCMemoryStatConfig : MatrixPluginConfig
{
    BOOL _loggerZoneEnable; // +0x8
    BOOL _allocationsMemgraphEnable; // +0x9
    int _leaksSampleFactor; // +0xc
    int _vmRegionsDumpInterval; // +0x10
    unsigned long long _reportStrategy; // +0x18
    NSDictionary * _observedCategories; // +0x20
    NSDictionary * _memgraphCategories; // +0x28
}
+ (id)defaultConfiguration;
- (BOOL)loggerZoneEnable;
- (void)setLoggerZoneEnable:(BOOL)arg1;
- (BOOL)allocationsMemgraphEnable;
- (void)setAllocationsMemgraphEnable:(BOOL)arg1;
- (int)leaksSampleFactor;
- (void)setLeaksSampleFactor:(int)arg1;
- (int)vmRegionsDumpInterval;
- (void)setVmRegionsDumpInterval:(int)arg1;
- (unsigned long long)reportStrategy;
- (void)setReportStrategy:(unsigned long long)arg1;
- (id)observedCategories;
- (void)setObservedCategories:(id)arg1;
- (id)memgraphCategories;
- (void)setMemgraphCategories:(id)arg1;
- (void).cxx_destruct;
@end

