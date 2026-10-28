@interface WCFinderFetchFinderMemberShipHomeInfoCGI : WCFinderBaseCgi
{
    NSString * _finderUsername; // +0x8
    id /* block */ _successful; // +0x10
    id /* block */ _failure; // +0x18
}
- (id)initWithFinderUsername:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
