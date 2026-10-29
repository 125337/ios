@interface SessionReportInfo : MMObject <NSCopying>
{
    EnterReportInfo * _enterInfo; // +0x8
    ExitReportInfo * _exitInfo; // +0x10
    NSMutableDictionary * _reddotInfo; // +0x18
    unsigned long long _maxCostMs; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setMaxCostMs:(unsigned long long)arg1;
- (void)report:(unsigned long long)arg1;
- (id)description;
- (void)clear;
- (id)enterInfo;
- (void)setEnterInfo:(id)arg1;
- (id)exitInfo;
- (void)setExitInfo:(id)arg1;
- (id)reddotInfo;
- (void)setReddotInfo:(id)arg1;
- (unsigned long long)maxCostMs;
- (void).cxx_destruct;
@end

