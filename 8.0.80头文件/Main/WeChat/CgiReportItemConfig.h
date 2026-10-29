@interface CgiReportItemConfig : NSObject
{
    BOOL _needReport; // +0x8
    unsigned int _middleActionType; // +0xc
    unsigned long long _intervalMs; // +0x10
}
- (id)description;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (unsigned int)middleActionType;
- (void)setMiddleActionType:(unsigned int)arg1;
- (unsigned long long)intervalMs;
- (void)setIntervalMs:(unsigned long long)arg1;
@end
