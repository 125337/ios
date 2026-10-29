@interface MMECGetProductTagLinkCGI : WCFinderLiveBaseCgi
{
    NSString * _appId; // +0x8
    unsigned long long _productId; // +0x10
    NSString * _promoterKey; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithAppId:(id)arg1 productId:(unsigned long long)arg2 promoterKey:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)promoterKey;
- (void)setPromoterKey:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

