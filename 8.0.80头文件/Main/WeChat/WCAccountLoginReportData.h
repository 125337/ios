@interface WCAccountLoginReportData : NSObject
{
    NSString * _loginPageSessionId; // +0x8
    unsigned long long _loginStartTime; // +0x10
    unsigned long long _loginMethod; // +0x18
    NSString * _loginSessionId; // +0x20
}
- (id)init;
- (id)loginPageSessionId;
- (void)setLoginPageSessionId:(id)arg1;
- (unsigned long long)loginStartTime;
- (void)setLoginStartTime:(unsigned long long)arg1;
- (unsigned long long)loginMethod;
- (void)setLoginMethod:(unsigned long long)arg1;
- (id)loginSessionId;
- (void)setLoginSessionId:(id)arg1;
- (void).cxx_destruct;
@end
