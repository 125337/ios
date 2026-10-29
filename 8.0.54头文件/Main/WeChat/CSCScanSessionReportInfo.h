@interface CSCScanSessionReportInfo : MMObject
{
    long long _enterCombineFlowCount; // +0x8
    long long _skipFromWorkingCount; // +0x10
    long long _skipFromStrangyCount; // +0x18
    long long _ffeHandleCount; // +0x20
    long long _ffeFailedCount; // +0x28
    long long _ffeSuccessCount; // +0x30
    long long _ffeFirstSuccessFrame; // +0x38
    long long _svrHandleCount; // +0x40
    long long _svrFailedCount; // +0x48
    long long _svrSuccessCount; // +0x50
    long long _svrFirstSuccessFrame; // +0x58
}
- (long long)enterCombineFlowCount;
- (void)setEnterCombineFlowCount:(long long)arg1;
- (long long)skipFromWorkingCount;
- (void)setSkipFromWorkingCount:(long long)arg1;
- (long long)skipFromStrangyCount;
- (void)setSkipFromStrangyCount:(long long)arg1;
- (long long)ffeHandleCount;
- (void)setFfeHandleCount:(long long)arg1;
- (long long)ffeFailedCount;
- (void)setFfeFailedCount:(long long)arg1;
- (long long)ffeSuccessCount;
- (void)setFfeSuccessCount:(long long)arg1;
- (long long)ffeFirstSuccessFrame;
- (void)setFfeFirstSuccessFrame:(long long)arg1;
- (long long)svrHandleCount;
- (void)setSvrHandleCount:(long long)arg1;
- (long long)svrFailedCount;
- (void)setSvrFailedCount:(long long)arg1;
- (long long)svrSuccessCount;
- (void)setSvrSuccessCount:(long long)arg1;
- (long long)svrFirstSuccessFrame;
- (void)setSvrFirstSuccessFrame:(long long)arg1;
@end

