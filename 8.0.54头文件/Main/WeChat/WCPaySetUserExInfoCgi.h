@interface WCPaySetUserExInfoCgi : WCPayBaseTenPayCgi
{
    WCPaySetUserExInfoCgiRequest * _cgiRequest; // +0x8
}
- (id)init;
- (void)startRequest;
- (void)didGetTenPayResponse:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiRequest;
- (void)setCgiRequest:(id)arg1;
- (void).cxx_destruct;
@end

