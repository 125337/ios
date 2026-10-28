@interface WCFinderContactOptionCGI : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
}
- (id)initWithModTypeInfoCount:(unsigned long long)arg1 modTypeInfoList:(id)arg2 successful:(id /* block */)arg3 failure:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
