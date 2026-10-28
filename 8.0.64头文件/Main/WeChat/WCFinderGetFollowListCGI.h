@interface WCFinderGetFollowListCGI : WCFinderBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failureBlock; // +0x10
    NSData * _lastBuffer; // +0x18
    NSString * _finderUsername; // +0x20
}
- (id)initWithLastBuffer:(id)arg1 finderUserName:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end
