@interface WCFinderLiveAudienceOpFansGroupCGI : WCFinderLiveBaseCgi
{
    unsigned long long _opType; // +0x8
    NSData * _liveCookies; // +0x10
    NSData * _superfanSubscriptionInfo; // +0x18
    id /* block */ _joinPrepareSuccessBlock; // +0x20
    id /* block */ _joinPrepareFailBlock; // +0x28
    id /* block */ _joinSuccessBlock; // +0x30
    id /* block */ _joinFailBlock; // +0x38
}
- (id)initJoinPrepareWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (id)initJoinFansGroupWithTaskId:(id)arg1 liveCookies:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)superfanSubscriptionInfo;
- (void)setSuperfanSubscriptionInfo:(id)arg1;
- (id /* block */)joinPrepareSuccessBlock;
- (void)setJoinPrepareSuccessBlock:(id /* block */)arg1;
- (id /* block */)joinPrepareFailBlock;
- (void)setJoinPrepareFailBlock:(id /* block */)arg1;
- (id /* block */)joinSuccessBlock;
- (void)setJoinSuccessBlock:(id /* block */)arg1;
- (id /* block */)joinFailBlock;
- (void)setJoinFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
