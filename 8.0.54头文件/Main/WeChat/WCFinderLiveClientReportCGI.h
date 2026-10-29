@interface WCFinderLiveClientReportCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successful; // +0x8
    id /* block */ _failure; // +0x10
    ErrorReportInfo * _error; // +0x18
    unsigned long long _reportScene; // +0x20
}
- (id)initWithError:(id)arg1 successful:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successful;
- (void)setSuccessful:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

