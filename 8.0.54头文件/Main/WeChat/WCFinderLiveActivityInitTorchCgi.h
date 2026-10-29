@interface WCFinderLiveActivityInitTorchCgi : WCFinderLiveActivityBaseCgi
{
    unsigned long long _torchSource; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
}
- (id)initWithLiveTaskId:(id)arg1 torchSource:(unsigned long long)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (id)responseFromBuffer:(id)arg1;
- (void)didGetFinderLiveActivityCgiResponse:(id)arg1;
- (void)finderLiveActivityCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)torchSource;
- (void)setTorchSource:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

