@interface OpenSDKOpenBusinessViewContext : MMObject
{
    NSString * _appId; // +0x8
    NSString * _businessType; // +0x10
    NSString * _query; // +0x18
    unsigned long long _miniProgramType; // +0x20
    WCBusinessJumpViewController * _jumpViewController; // +0x28
}
- (id)description;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)businessType;
- (void)setBusinessType:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (unsigned long long)miniProgramType;
- (void)setMiniProgramType:(unsigned long long)arg1;
- (id)jumpViewController;
- (void)setJumpViewController:(id)arg1;
- (void).cxx_destruct;
@end
