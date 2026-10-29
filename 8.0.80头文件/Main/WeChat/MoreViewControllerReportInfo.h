@interface MoreViewControllerReportInfo : MMObject <NSCopying>
{
    EnterMoreViewControllerInfo * _enterInfo; // +0x8
    ExitMoreViewControllerInfo * _exitInfo; // +0x10
    NSMutableDictionary * _reddots; // +0x18
    unsigned long long _maxCostMs; // +0x20
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)report:(id)arg1;
- (id)description;
- (void)clear;
- (id)enterInfo;
- (void)setEnterInfo:(id)arg1;
- (id)exitInfo;
- (void)setExitInfo:(id)arg1;
- (id)reddots;
- (void)setReddots:(id)arg1;
- (unsigned long long)maxCostMs;
- (void)setMaxCostMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
