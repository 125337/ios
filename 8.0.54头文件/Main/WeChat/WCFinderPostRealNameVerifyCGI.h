@interface WCFinderPostRealNameVerifyCGI : WCFinderBaseCgi
{
    id /* block */ _completionBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithFinderUsername:(id)arg1 completionBlock:(id /* block */)arg2 failedBlock:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

