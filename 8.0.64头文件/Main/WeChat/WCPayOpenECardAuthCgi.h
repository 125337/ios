@interface WCPayOpenECardAuthCgi : WCPayBaseCgi
{
    OpenECardAuthReq * _authRequest; // +0x8
}
- (id)init;
- (void)startRequest;
- (void)failWithECardCgiError:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)authRequest;
- (void)setAuthRequest:(id)arg1;
- (void).cxx_destruct;
@end
