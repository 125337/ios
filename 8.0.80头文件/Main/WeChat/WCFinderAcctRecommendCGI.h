@interface WCFinderAcctRecommendCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failedBlock; // +0x10
}
- (id)initWithUsername:(id)arg1 lastBuf:(id)arg2 scene:(int)arg3 successfulBlock:(id /* block */)arg4 failedBlock:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
