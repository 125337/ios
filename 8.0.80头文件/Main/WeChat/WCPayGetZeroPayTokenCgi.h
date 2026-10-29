@interface WCPayGetZeroPayTokenCgi : WCPayBaseTenPayCgi
{
    unsigned int _use_touch; // +0x8
    NSString * _password; // +0x10
    TokeMess * _tokenMess; // +0x18
    NSString * _fingerdata; // +0x20
    id <WCPayGetZeroPayTokenCgiDelegate> _m_cgiDelegate; // +0x28
}
- (id)init;
- (void)startRequest;
- (void)failWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (id)tokenMess;
- (void)setTokenMess:(id)arg1;
- (unsigned int)use_touch;
- (void)setUse_touch:(unsigned int)arg1;
- (id)fingerdata;
- (void)setFingerdata:(id)arg1;
- (id)m_cgiDelegate;
- (void)setM_cgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
