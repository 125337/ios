@interface WCPayResetPwdByFaceCgi : WCPayBaseTenPayCgi
{
    NSString * _auth_token; // +0x8
    NSString * _passwd; // +0x10
    id <WCPayResetPwdByFaceCgiDelegate> _cgiDelegate; // +0x18
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)auth_token;
- (void)setAuth_token:(id)arg1;
- (id)passwd;
- (void)setPasswd:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

