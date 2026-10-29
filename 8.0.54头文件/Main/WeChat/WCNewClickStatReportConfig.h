@interface WCNewClickStatReportConfig : MMObject <PBCoding>
{
    unsigned int _configVersion; // +0x8
    unsigned int _nextUpdateInterval; // +0xc
    unsigned int _samplePeriod; // +0x10
    NSArray * _arrEventConfig; // +0x18
    NSData * _versionBuffer; // +0x20
}
+ (void)PBArrayAdd_configVersion;
+ (void)PBArrayAdd_nextUpdateInterval;
+ (void)PBArrayAdd_samplePeriod;
+ (void)PBArrayAdd_arrEventConfig;
+ (void)PBArrayAdd_versionBuffer;
+ (void)initialize;
+ (id)reportConfigWithXml:(id)arg1;
- (id)getPBPropertyTable;
- (BOOL)isMatchSpecialPVPage:(id)arg1 prePage:(id)arg2;
- (unsigned int)configVersion;
- (void)setConfigVersion:(unsigned int)arg1;
- (unsigned int)nextUpdateInterval;
- (void)setNextUpdateInterval:(unsigned int)arg1;
- (unsigned int)samplePeriod;
- (void)setSamplePeriod:(unsigned int)arg1;
- (id)arrEventConfig;
- (void)setArrEventConfig:(id)arg1;
- (id)versionBuffer;
- (void)setVersionBuffer:(id)arg1;
- (void).cxx_destruct;
@end

