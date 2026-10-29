@interface WCFinderNewApplyMicCGI : WCFinderLiveBaseCgi
{
    WCFinderContact * _toFinderContact; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
    NSData * _randomMicBuffer; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 toFinderContact:(id)arg3 randomMicBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)toFinderContact;
- (void)setToFinderContact:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)randomMicBuffer;
- (void)setRandomMicBuffer:(id)arg1;
- (void).cxx_destruct;
@end

