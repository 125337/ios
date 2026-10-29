@interface WCFinderMarkReadCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    NSArray * _stats; // +0x18
}
- (id)initWithStats:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)stats;
- (void)setStats:(id)arg1;
- (void).cxx_destruct;
@end
