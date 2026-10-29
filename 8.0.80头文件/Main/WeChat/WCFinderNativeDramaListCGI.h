@interface WCFinderNativeDramaListCGI : WCFinderBaseCgi
{
    WCFinderNativeDramaListCGIParams * _params; // +0x8
    id /* block */ _successfulBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
}
- (id)initWithParams:(id)arg1 successfulBlock:(id /* block */)arg2 failed:(id /* block */)arg3;
- (void)_setupRequest;
- (void)start;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successfulBlock;
- (void)setSuccessfulBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
