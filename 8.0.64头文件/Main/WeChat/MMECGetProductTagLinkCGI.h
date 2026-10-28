@interface MMECGetProductTagLinkCGI : WCFinderLiveBaseCgi
{
    NSString * _appId; // +0x8
    unsigned long long _productId; // +0x10
    NSString * _promoterKey; // +0x18
    unsigned long long _cpsProductId; // +0x20
    NSString * _passBuffer; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failBlock; // +0x38
}
- (id)initWithAppId:(id)arg1 productId:(unsigned long long)arg2 promoterKey:(id)arg3 cpsProductId:(unsigned long long)arg4 passBuffer:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)promoterKey;
- (void)setPromoterKey:(id)arg1;
- (unsigned long long)cpsProductId;
- (void)setCpsProductId:(unsigned long long)arg1;
- (id)passBuffer;
- (void)setPassBuffer:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
