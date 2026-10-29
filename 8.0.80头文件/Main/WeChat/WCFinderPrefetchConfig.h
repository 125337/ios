@interface WCFinderPrefetchConfig : NSObject <PBCoding>
{
    BOOL _enablePrefetch; // +0x8
    BOOL _infinitePrefetch; // +0x9
    float _maxMultipleFactor; // +0xc
    float _timeFactor; // +0x10
    unsigned long long _configId; // +0x18
    unsigned long long _validityPeriodOfFeature; // +0x20
    unsigned long long _thresholdInSecond; // +0x28
    unsigned long long _exprType; // +0x30
}
+ (void)PBArrayAdd_configId;
+ (void)PBArrayAdd_enablePrefetch;
+ (void)PBArrayAdd_infinitePrefetch;
+ (void)PBArrayAdd_validityPeriodOfFeature;
+ (void)PBArrayAdd_thresholdInSecond;
+ (void)PBArrayAdd_maxMultipleFactor;
+ (void)PBArrayAdd_timeFactor;
+ (void)PBArrayAdd_exprType;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned long long)switchState;
- (id)validityPeriod;
- (unsigned long long)validityPeriodOfTab:(int)arg1;
- (unsigned long long)configId;
- (void)setConfigId:(unsigned long long)arg1;
- (BOOL)enablePrefetch;
- (void)setEnablePrefetch:(BOOL)arg1;
- (BOOL)infinitePrefetch;
- (void)setInfinitePrefetch:(BOOL)arg1;
- (unsigned long long)validityPeriodOfFeature;
- (void)setValidityPeriodOfFeature:(unsigned long long)arg1;
- (unsigned long long)thresholdInSecond;
- (void)setThresholdInSecond:(unsigned long long)arg1;
- (float)maxMultipleFactor;
- (void)setMaxMultipleFactor:(float)arg1;
- (float)timeFactor;
- (void)setTimeFactor:(float)arg1;
- (unsigned long long)exprType;
- (void)setExprType:(unsigned long long)arg1;
@end
