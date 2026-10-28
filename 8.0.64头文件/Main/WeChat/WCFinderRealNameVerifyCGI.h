@interface WCFinderRealNameVerifyCGI : WCFinderBaseCgi
{
    int _optype; // +0x8
    NSString * _authToken; // +0x10
    NSString * _code; // +0x18
    NSString * _finderUsername; // +0x20
    id /* block */ _success; // +0x28
    id /* block */ _failure; // +0x30
}
- (id)initWithOpType:(int)arg1 finderUsername:(id)arg2 authToken:(id)arg3 code:(id)arg4 success:(id /* block */)arg5 failure:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (int)optype;
- (void)setOptype:(int)arg1;
- (id)authToken;
- (void)setAuthToken:(id)arg1;
- (id)code;
- (void)setCode:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
