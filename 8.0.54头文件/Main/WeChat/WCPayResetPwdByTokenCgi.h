@interface WCPayResetPwdByTokenCgi : WCPayBaseTenPayCgi
{
    NSString * _token; // +0x8
    NSString * _password; // +0x10
}
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void).cxx_destruct;
@end

