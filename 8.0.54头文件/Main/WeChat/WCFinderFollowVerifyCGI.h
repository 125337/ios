@interface WCFinderFollowVerifyCGI : WCFinderBaseCgi
{
    unsigned int _optype; // +0x8
    unsigned long long _followId; // +0x10
    NSString * _finderUsername; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failureBlock; // +0x28
}
- (id)initWithFollowId:(unsigned long long)arg1 optype:(unsigned int)arg2 finderUsername:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)followId;
- (void)setFollowId:(unsigned long long)arg1;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

