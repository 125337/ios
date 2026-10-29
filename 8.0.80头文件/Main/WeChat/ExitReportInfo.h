@interface ExitReportInfo : MMObject <NSCopying>
{
    unsigned long long _exitTimeMs; // +0x8
    NSString * _topVcName; // +0x10
    unsigned long long _topVcPageId; // +0x18
    NSString * _clickShellKey; // +0x20
    unsigned long long _entrySwitch; // +0x28
    unsigned long long _reddotEnabled; // +0x30
}
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)exitTimeMs;
- (void)setExitTimeMs:(unsigned long long)arg1;
- (id)topVcName;
- (void)setTopVcName:(id)arg1;
- (unsigned long long)topVcPageId;
- (void)setTopVcPageId:(unsigned long long)arg1;
- (id)clickShellKey;
- (void)setClickShellKey:(id)arg1;
- (unsigned long long)entrySwitch;
- (void)setEntrySwitch:(unsigned long long)arg1;
- (unsigned long long)reddotEnabled;
- (void)setReddotEnabled:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
