@interface MMAudioCriticalEventConfig : NSObject <PBCoding>
{
    unsigned int _checkDuration; // +0x8
    unsigned int _checkSampleCount; // +0xc
    unsigned int _reportLimit; // +0x10
}
+ (void)PBArrayAdd_checkDuration;
+ (void)PBArrayAdd_reportLimit;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithConfigDict:(id)arg1;
- (unsigned int)checkDuration;
- (void)setCheckDuration:(unsigned int)arg1;
- (unsigned int)checkSampleCount;
- (void)setCheckSampleCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
@end
