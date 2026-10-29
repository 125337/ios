@interface WCFinderRealNameVerifyCGI : WCFinderBaseCgi
{
    WCFinderRealNameVerifyParams * _params; // +0x8
    id /* block */ _success; // +0x10
    id /* block */ _failure; // +0x18
}
- (id)initWithParams:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
