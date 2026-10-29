@interface WCPayPaymentFunctionSearchCGI : WCPayBaseCgi
{
    id <WCPayPaymentFunctionSearchCGIDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

