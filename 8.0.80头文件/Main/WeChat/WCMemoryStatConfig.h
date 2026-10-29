@interface WCMemoryStatConfig : MatrixPluginConfig
{
    BOOL _loggerZoneEnabled; // +0x8
    BOOL _allocationsMemgraphEnabled; // +0x9
    BOOL _webkitDumpStack; // +0xa
    BOOL _objectTraceEnabled; // +0xb
    BOOL _mteEnabled; // +0xc
    int _leaksSampleFactor; // +0x10
    int _vmRegionsDumpInterval; // +0x14
    unsigned int _webkitVMTag; // +0x18
    unsigned long long _reportStrategy; // +0x20
    NSDictionary * _observedCategories; // +0x28
    NSDictionary * _memgraphCategories; // +0x30
}
+ (id)defaultConfiguration;
- (BOOL)loggerZoneEnabled;
- (void)setLoggerZoneEnabled:(BOOL)arg1;
- (BOOL)allocationsMemgraphEnabled;
- (void)setAllocationsMemgraphEnabled:(BOOL)arg1;
- (int)leaksSampleFactor;
- (void)setLeaksSampleFactor:(int)arg1;
- (int)vmRegionsDumpInterval;
- (void)setVmRegionsDumpInterval:(int)arg1;
- (unsigned int)webkitVMTag;
- (void)setWebkitVMTag:(unsigned int)arg1;
- (BOOL)webkitDumpStack;
- (void)setWebkitDumpStack:(BOOL)arg1;
- (BOOL)objectTraceEnabled;
- (void)setObjectTraceEnabled:(BOOL)arg1;
- (unsigned long long)reportStrategy;
- (void)setReportStrategy:(unsigned long long)arg1;
- (id)observedCategories;
- (void)setObservedCategories:(id)arg1;
- (id)memgraphCategories;
- (void)setMemgraphCategories:(id)arg1;
- (BOOL)mteEnabled;
- (void)setMteEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
