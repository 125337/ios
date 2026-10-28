@interface MemoryStatPluginConfig : NSObject <PBCoding>
{
    BOOL _memoryStatManualEnabled; // +0x8
    BOOL _memoryStatDisable; // +0x9
    BOOL _uploadAlways; // +0xa
    BOOL _uploadForFOOM; // +0xb
    BOOL _uploadForBOOM; // +0xc
    BOOL _fasterZoneEnabled; // +0xd
    BOOL _loggerZoneEnabled; // +0xe
    BOOL _webkitLoggerEnabled; // +0xf
    BOOL _webkitLoggerDumpStack; // +0x10
    BOOL _vmRegionsEnabled; // +0x11
    BOOL _allocationsEnabled; // +0x12
    BOOL _allocationsMemgraphEnabled; // +0x13
    BOOL _leaksEnabled; // +0x14
    BOOL _mallocGuardEnabled; // +0x15
    BOOL _mallocGuardIgnoreDisableTime; // +0x16
    int _minGeneration; // +0x18
    int _vmRegionsDumpInternal; // +0x1c
    int _leaksSampleFactor; // +0x20
    int _mallocGuardMaxTrunks; // +0x24
    int _mallocGuardCheckFeqs; // +0x28
    int _mallocGuardGuardSize; // +0x2c
    NSString * _platform; // +0x30
    double _disableTime; // +0x38
    unsigned long long _userType; // +0x40
    unsigned long long _maxUserType; // +0x48
    NSMutableDictionary * _customInfo; // +0x50
    NSDictionary * _observedCategories; // +0x58
    NSDictionary * _memgraphCategories; // +0x60
}
+ (void)PBArrayAdd_memoryStatManualEnabled;
+ (void)PBArrayAdd_disableTime;
+ (void)PBArrayAdd_uploadAlways;
+ (void)PBArrayAdd_memoryStatDisable;
+ (void)PBArrayAdd_platform;
+ (void)PBArrayAdd_minGeneration;
+ (void)PBArrayAdd_vmRegionsEnabled;
+ (void)PBArrayAdd_vmRegionsDumpInternal;
+ (void)PBArrayAdd_allocationsEnabled;
+ (void)PBArrayAdd_leaksEnabled;
+ (void)PBArrayAdd_leaksSampleFactor;
+ (void)PBArrayAdd_allocationsMemgraphEnabled;
+ (void)PBArrayAdd_customInfo;
+ (void)PBArrayAdd_observedCategories;
+ (void)PBArrayAdd_mallocGuardEnabled;
+ (void)PBArrayAdd_mallocGuardMaxTrunks;
+ (void)PBArrayAdd_mallocGuardCheckFeqs;
+ (void)PBArrayAdd_userType;
+ (void)PBArrayAdd_maxUserType;
+ (void)PBArrayAdd_memgraphCategories;
+ (void)PBArrayAdd_fasterZoneEnabled;
+ (void)PBArrayAdd_loggerZoneEnabled;
+ (void)PBArrayAdd_uploadForFOOM;
+ (void)PBArrayAdd_uploadForBOOM;
+ (void)PBArrayAdd_mallocGuardIgnoreDisableTime;
+ (void)PBArrayAdd_mallocGuardGuardSize;
+ (void)PBArrayAdd_webkitLoggerEnabled;
+ (void)PBArrayAdd_webkitLoggerDumpStack;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)memoryStatManualEnabled;
- (void)setMemoryStatManualEnabled:(BOOL)arg1;
- (BOOL)memoryStatDisable;
- (void)setMemoryStatDisable:(BOOL)arg1;
- (id)platform;
- (void)setPlatform:(id)arg1;
- (int)minGeneration;
- (void)setMinGeneration:(int)arg1;
- (double)disableTime;
- (void)setDisableTime:(double)arg1;
- (BOOL)uploadAlways;
- (void)setUploadAlways:(BOOL)arg1;
- (BOOL)uploadForFOOM;
- (void)setUploadForFOOM:(BOOL)arg1;
- (BOOL)uploadForBOOM;
- (void)setUploadForBOOM:(BOOL)arg1;
- (BOOL)fasterZoneEnabled;
- (void)setFasterZoneEnabled:(BOOL)arg1;
- (BOOL)loggerZoneEnabled;
- (void)setLoggerZoneEnabled:(BOOL)arg1;
- (BOOL)webkitLoggerEnabled;
- (void)setWebkitLoggerEnabled:(BOOL)arg1;
- (BOOL)webkitLoggerDumpStack;
- (void)setWebkitLoggerDumpStack:(BOOL)arg1;
- (BOOL)vmRegionsEnabled;
- (void)setVmRegionsEnabled:(BOOL)arg1;
- (int)vmRegionsDumpInternal;
- (void)setVmRegionsDumpInternal:(int)arg1;
- (BOOL)allocationsEnabled;
- (void)setAllocationsEnabled:(BOOL)arg1;
- (BOOL)allocationsMemgraphEnabled;
- (void)setAllocationsMemgraphEnabled:(BOOL)arg1;
- (BOOL)leaksEnabled;
- (void)setLeaksEnabled:(BOOL)arg1;
- (int)leaksSampleFactor;
- (void)setLeaksSampleFactor:(int)arg1;
- (BOOL)mallocGuardEnabled;
- (void)setMallocGuardEnabled:(BOOL)arg1;
- (BOOL)mallocGuardIgnoreDisableTime;
- (void)setMallocGuardIgnoreDisableTime:(BOOL)arg1;
- (int)mallocGuardMaxTrunks;
- (void)setMallocGuardMaxTrunks:(int)arg1;
- (int)mallocGuardCheckFeqs;
- (void)setMallocGuardCheckFeqs:(int)arg1;
- (int)mallocGuardGuardSize;
- (void)setMallocGuardGuardSize:(int)arg1;
- (unsigned long long)userType;
- (void)setUserType:(unsigned long long)arg1;
- (unsigned long long)maxUserType;
- (void)setMaxUserType:(unsigned long long)arg1;
- (id)customInfo;
- (void)setCustomInfo:(id)arg1;
- (id)observedCategories;
- (void)setObservedCategories:(id)arg1;
- (id)memgraphCategories;
- (void)setMemgraphCategories:(id)arg1;
- (void).cxx_destruct;
@end
