@interface MMCPUCriticalEventConfig : NSObject <PBCoding>
{
    unsigned int _checkDuration; // +0x8
    unsigned int _checkSampleCount; // +0xc
    unsigned int _reportLimit; // +0x10
    unsigned long long _eventTag; // +0x18
    unsigned long long _eventSubTag; // +0x20
    double _criticalUsage; // +0x28
}
+ (void)PBArrayAdd_checkDuration;
+ (void)PBArrayAdd_reportLimit;
+ (void)PBArrayAdd_criticalUsage;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)initWithMetricsEventConfig:(id)arg1;
- (void)updateWithConfigDict:(id)arg1;
- (unsigned long long)eventTag;
- (void)setEventTag:(unsigned long long)arg1;
- (unsigned long long)eventSubTag;
- (void)setEventSubTag:(unsigned long long)arg1;
- (unsigned int)checkDuration;
- (void)setCheckDuration:(unsigned int)arg1;
- (unsigned int)checkSampleCount;
- (void)setCheckSampleCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (double)criticalUsage;
- (void)setCriticalUsage:(double)arg1;
@end
