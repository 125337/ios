@interface WCRedEnvGetSplitRedCoverCgi : WCPayBaseCgi
{
    id <WCRedEnvGetSplitRedCoverCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end
