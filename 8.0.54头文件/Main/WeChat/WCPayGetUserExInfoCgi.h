@interface WCPayGetUserExInfoCgi : WCPayBaseTenPayCgi
{
    NSString * _scene; // +0x8
}
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (void).cxx_destruct;
@end

