@interface WCFinderLiveModConsumptionQuotaCGI : WCFinderLiveBaseCgi
{
    BOOL _enableNotice; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    unsigned long long _rewardQuota; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 enableNotice:(BOOL)arg2 rewardQuota:(unsigned long long)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)enableNotice;
- (void)setEnableNotice:(BOOL)arg1;
- (unsigned long long)rewardQuota;
- (void)setRewardQuota:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
