@interface WCFinderLiveGetShopProductDetailCGI : WCFinderLiveBaseCgi
{
    unsigned long long _productId; // +0x8
    long long _reqScene; // +0x10
    NSString * _shopRequestId; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 productId:(unsigned long long)arg2 shopRequestId:(id)arg3 reqScene:(long long)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (long long)reqScene;
- (void)setReqScene:(long long)arg1;
- (id)shopRequestId;
- (void)setShopRequestId:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

