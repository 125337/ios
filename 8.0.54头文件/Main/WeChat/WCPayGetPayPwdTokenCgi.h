@interface WCPayGetPayPwdTokenCgi : WCPayBaseTenPayCgi
{
    NSString * _password; // +0x8
    TokeMess * _tokenMess; // +0x10
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
- (void).cxx_destruct;
@end

