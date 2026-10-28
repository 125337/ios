@interface WCFinderLivePurchaseChargeableLiveCGI : WCFinderLiveBaseCgi
{
    unsigned int _wecoinAmount; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSData * _liveCookies; // +0x28
    NSString * _sessionBuffer; // +0x30
}
- (id)initWithFinderTaskId:(id)arg1 liveCookies:(id)arg2 wecoinAmount:(unsigned int)arg3 sessionBuffer:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned int)wecoinAmount;
- (void)setWecoinAmount:(unsigned int)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (void).cxx_destruct;
@end
