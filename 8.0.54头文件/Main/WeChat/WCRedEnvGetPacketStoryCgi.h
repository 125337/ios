@interface WCRedEnvGetPacketStoryCgi : WCPayBaseCgi
{
    id <WCRedEnvGetPacketStoryCgiDelegate> _cgiDelegate; // +0x8
}
- (id)initWithDelegate:(id)arg1;
- (void)startWithRequest:(id)arg1;
- (void)didGetLocalResponse:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)saveStoryInfo:(id)arg1;
- (id)getLocalStoryInfo:(id)arg1;
- (unsigned long long)getCgiNewDNSBusinessType;
- (id)cgiDelegate;
- (void)setCgiDelegate:(id)arg1;
- (void).cxx_destruct;
@end

