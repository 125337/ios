@interface CgiReportFlowGuardModel : NSObject
{
    unsigned int _reportIntervalMs; // +0x8
    unsigned int _reportCount; // +0xc
}
- (BOOL)checkIsLegal;
- (double)getReportDelayTime;
- (BOOL)checkSizeOut:(long long)arg1;
- (id)simpleLog;
- (id)description;
- (unsigned int)reportIntervalMs;
- (void)setReportIntervalMs:(unsigned int)arg1;
- (unsigned int)reportCount;
- (void)setReportCount:(unsigned int)arg1;
@end
