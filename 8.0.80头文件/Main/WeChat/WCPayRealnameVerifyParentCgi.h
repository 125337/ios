@interface WCPayRealnameVerifyParentCgi : WCPayBaseCgi
{
    id <WCPayRealnameVerifyParentCgiDeleagte> _cgiDelegate; // +0x8
}
- (id)init;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
