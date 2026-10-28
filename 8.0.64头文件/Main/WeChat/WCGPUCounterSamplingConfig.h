@interface WCGPUCounterSamplingConfig : NSObject <PBCoding>
{
    unsigned int _lastReportTime; // +0x8
    unsigned int _reportCount; // +0xc
}
+ (void)PBArrayAdd_lastReportTime;
+ (void)PBArrayAdd_reportCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)lastReportTime;
- (void)setLastReportTime:(unsigned int)arg1;
- (unsigned int)reportCount;
- (void)setReportCount:(unsigned int)arg1;
@end
