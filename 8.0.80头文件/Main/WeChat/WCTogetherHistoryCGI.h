@interface WCTogetherHistoryCGI : WCBaseCgi
{
    SnsWithTaPageResponse * _response; // +0x8
    WCBaseNetworkingError * _error; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failureBlock; // +0x20
}
- (id)init;
- (void)startWithRequest:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
