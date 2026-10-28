@interface WCFinderSearchFansCgi : WCFinderBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithQuery:(id)arg1 lastBuf:(id)arg2 successful:(id /* block */)arg3 failedBlock:(id /* block */)arg4;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
