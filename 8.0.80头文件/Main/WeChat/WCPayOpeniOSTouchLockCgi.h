@interface WCPayOpeniOSTouchLockCgi : WCPayBaseTenPayCgi
{
    NSString * _usertoken; // +0x8
    NSString * _model; // +0x10
}
- (id)init;
- (void)startRequest;
- (void)failWithError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)usertoken;
- (void)setUsertoken:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
