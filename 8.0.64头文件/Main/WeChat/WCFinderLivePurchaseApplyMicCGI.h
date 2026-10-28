@interface WCFinderLivePurchaseApplyMicCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    WCFinderLivePurchaseApplyMicParam * _param; // +0x18
}
- (id)initWithTaskId:(id)arg1 params:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (void).cxx_destruct;
@end
