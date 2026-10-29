@interface WCFinderModNetOffConfigCGI : WCFinderBaseCgi
{
    NSString * _username; // +0x8
    WCFinderModNetOffConfigParams * _params; // +0x10
}
- (id)initWithUsername:(id)arg1 params:(id)arg2;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
