@interface WCPayTouchLockAuthenCgi : WCPayBaseTenPayCgi <WCPayLogicMgrExt>
{
    NSString * _password; // +0x8
}
- (id)init;
- (void)startRequest;
- (void)failWithError:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)password;
- (void)setPassword:(id)arg1;
- (void).cxx_destruct;
@end
