@interface WCFinderLiveStreamCGI : WCFinderBaseCgi
{
    id /* block */ _successfulBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
}
- (id)initWithLastBuffer:(id)arg1 location:(id)arg2 tabType:(int)arg3 successfulBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
