@interface WCPayWalletGetAllFunctionCgi : WCPayBaseCgi
{
    id <WCPayWalletGetAllFunctionCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)cachePath;
- (void)startRequest;
- (void)callDelegate:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

