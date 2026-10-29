@interface MMFinderLivePurchaseSuperfanClubCGI : WCFinderLiveBaseCgi
{
    int _consumeType; // +0x8
    NSData * _liveCookies; // +0x10
    NSData * _superfanSubscriptionInfo; // +0x18
    id /* block */ _failBlock; // +0x20
    id /* block */ _successBlock; // +0x28
}
- (id)initJoinSuperfanWithTaskId:(id)arg1 liveCookies:(id)arg2 subscrptionType:(unsigned long long)arg3 subscriptionInfo:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)superfanSubscriptionInfo;
- (void)setSuperfanSubscriptionInfo:(id)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (int)consumeType;
- (void)setConsumeType:(int)arg1;
- (void).cxx_destruct;
@end

