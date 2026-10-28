@interface WCFinderGetLiveMicCandidateListCGI : WCFinderBaseCgi
{
    NSData * _lastBuffer; // +0x8
    NSData * _liveCookies; // +0x10
    NSData * _liveJumpinfoCgiBuff; // +0x18
    id /* block */ _success; // +0x20
    id /* block */ _failure; // +0x28
}
- (id)initWithLastBuffer:(id)arg1 liveJumpinfoCgiBuff:(id)arg2 liveCookies:(id)arg3 success:(id /* block */)arg4 failure:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)liveJumpinfoCgiBuff;
- (void)setLiveJumpinfoCgiBuff:(id)arg1;
- (id /* block */)success;
- (void)setSuccess:(id /* block */)arg1;
- (id /* block */)failure;
- (void)setFailure:(id /* block */)arg1;
- (void).cxx_destruct;
@end
