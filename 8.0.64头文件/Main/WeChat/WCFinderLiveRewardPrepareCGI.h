@interface WCFinderLiveRewardPrepareCGI : WCFinderLiveBaseCgi
{
    WCFinderLiveRewardPrepareParams * _params; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failedBlock; // +0x18
}
- (id)initWithFinderTaskId:(id)arg1 rewardParams:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)params;
- (void)setParams:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failedBlock;
- (void)setFailedBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
