@interface WCPayOpenPalmServiceAuthCgi : WCPayBaseCgi
{
    id <WCPayOpenPalmServiceAuthCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
