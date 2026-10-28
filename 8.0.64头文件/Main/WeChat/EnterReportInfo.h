@interface EnterReportInfo : MMObject <NSCopying>
{
    unsigned long long _enterTimeMs; // +0x8
    NSString * _topVcName; // +0x10
    unsigned long long _topVcPageId; // +0x18
    NSString * _lastClickShellKey; // +0x20
}
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)enterTimeMs;
- (void)setEnterTimeMs:(unsigned long long)arg1;
- (id)topVcName;
- (void)setTopVcName:(id)arg1;
- (unsigned long long)topVcPageId;
- (void)setTopVcPageId:(unsigned long long)arg1;
- (id)lastClickShellKey;
- (void)setLastClickShellKey:(id)arg1;
- (void).cxx_destruct;
@end
