@interface WCFinderModUserInfoCGI : WCFinderBaseCgi
{
    NSString * _username; // +0x8
    WCFinderModUserInfoParams * _params; // +0x10
    id /* block */ _successfulBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)initWithUsername:(id)arg1 params:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

