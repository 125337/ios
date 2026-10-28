@interface WCFinderLiveLotteryFillClaimInfoCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    unsigned long long _objectId; // +0x18
    NSData * _liveCookies; // +0x20
    NSString * _lotteryId; // +0x28
    FinderLiveLotteryFillClaimInfoRequest_ClaimInfo * _claimInfo; // +0x30
}
- (id)initWithLiveLotteryFillClaimInfoWithTaskId:(unsigned long long)arg1 objectId:(unsigned long long)arg2 liveCookies:(id)arg3 lotteryId:(id)arg4 claimInfo:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)claimInfo;
- (void)setClaimInfo:(id)arg1;
- (void).cxx_destruct;
@end
