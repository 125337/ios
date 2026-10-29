@interface WCFinderLiveMakeLotteryOrderCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    MMFinderLiveLotteryMethodInfo * _lotteryOrderInfo; // +0x18
    NSData * _liveCookies; // +0x20
}
- (id)initWithLotteryOrderInfo:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)lotteryOrderInfo;
- (void)setLotteryOrderInfo:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (void).cxx_destruct;
@end
