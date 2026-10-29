@interface GetQRCodeOAuthDataCgi : WCBaseCgi
{
    BOOL _hasHandleEcdhRollback; // +0x8
    OpenSDKOAuthRequest * _authReq; // +0x10
    id /* block */ _completion; // +0x18
}
- (id)initWithAuthReq:(id)arg1;
- (void)createRequest;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)hasHandleEcdhRollback;
- (void)setHasHandleEcdhRollback:(BOOL)arg1;
- (id)authReq;
- (void)setAuthReq:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
