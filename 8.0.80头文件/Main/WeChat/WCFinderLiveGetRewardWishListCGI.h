@interface WCFinderLiveGetRewardWishListCGI : WCFinderLiveBaseCgi
{
    unsigned int _liveScene; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    NSData * _liveCookies; // +0x20
}
- (id)initWithLiveTaskId:(id)arg1 liveCookies:(id)arg2 liveScene:(long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned int)liveScene;
- (void)setLiveScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
