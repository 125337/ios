@interface WAAgentAuditResult : NSObject
{
    SessionBindingPayload * _payload; // +0x8
    NSString * _sessionToken; // +0x10
    NSString * _appid; // +0x18
    unsigned long long _devuin; // +0x20
    long long _expireAt; // +0x28
    long long _mode; // +0x30
    NSString * _caseId; // +0x38
    long long _error; // +0x40
}
- (id)payload;
- (void)setPayload:(id)arg1;
- (id)sessionToken;
- (void)setSessionToken:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned long long)devuin;
- (void)setDevuin:(unsigned long long)arg1;
- (long long)expireAt;
- (void)setExpireAt:(long long)arg1;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (id)caseId;
- (void)setCaseId:(id)arg1;
- (long long)error;
- (void)setError:(long long)arg1;
- (void).cxx_destruct;
@end
