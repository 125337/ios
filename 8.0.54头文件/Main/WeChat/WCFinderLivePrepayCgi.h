@interface WCFinderLivePrepayCgi : WCFinderLiveBaseCgi
{
    unsigned int _rewardType; // +0x8
    NSData * _rewardExtInfo; // +0x10
    NSData * _liveCookies; // +0x18
    NSString * _sessionBuffer; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failBlock; // +0x30
}
- (id)initWithRewardType:(unsigned int)arg1 rewardExtInfo:(id)arg2 liveCookies:(id)arg3 taskId:(id)arg4 sessionBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)rewardType;
- (void)setRewardType:(unsigned int)arg1;
- (id)rewardExtInfo;
- (void)setRewardExtInfo:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

