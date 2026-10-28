@interface WCFinderGetSubtitleCGI : WCFinderBaseCgi
{
    WCFinderGetSubtitleRequestParams * _params; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
}
- (id)initWithParams:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
