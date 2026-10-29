@interface WCFinderMakePackageOrderCGI : WCFinderLiveBaseCgi
{
    unsigned int _targetLevel; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    unsigned long long _orderWecoinAmount; // +0x28
    NSString * _orderRequestId; // +0x30
    NSData * _liveCookies; // +0x38
    WCFinderLiveMakePackageOrderParams * _params; // +0x40
}
- (id)initWithFinderTaskId:(id)arg1 params:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned int)targetLevel;
- (void)setTargetLevel:(unsigned int)arg1;
- (unsigned long long)orderWecoinAmount;
- (void)setOrderWecoinAmount:(unsigned long long)arg1;
- (id)orderRequestId;
- (void)setOrderRequestId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

