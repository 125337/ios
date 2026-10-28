@interface MMLocationMonitorConfig : NSObject <PBCoding>
{
    BOOL _enabled; // +0x8
    unsigned int _checkTime; // +0xc
    unsigned int _checkCount; // +0x10
    unsigned int _reportLimit; // +0x14
    unsigned int _reportCount; // +0x18
}
+ (void)PBArrayAdd_enabled;
+ (void)PBArrayAdd_checkTime;
+ (void)PBArrayAdd_reportLimit;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned int)checkTime;
- (void)setCheckTime:(unsigned int)arg1;
- (unsigned int)checkCount;
- (void)setCheckCount:(unsigned int)arg1;
- (unsigned int)reportLimit;
- (void)setReportLimit:(unsigned int)arg1;
- (unsigned int)reportCount;
- (void)setReportCount:(unsigned int)arg1;
@end
