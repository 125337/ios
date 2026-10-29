@interface WCTogetherModifyCGI : WCBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
    SnsWithTaOpResponse * _response; // +0x18
    WCBaseNetworkingError * _error; // +0x20
}
- (id)initWithRequest:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

