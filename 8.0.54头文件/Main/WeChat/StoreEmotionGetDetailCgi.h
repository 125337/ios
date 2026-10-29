@interface StoreEmotionGetDetailCgi : StoreEmotionBaseCgi
{
    BOOL _forceUpdate; // +0x8
    BOOL _isActive; // +0x9
    unsigned int _scene; // +0xc
    NSString * _productID; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
    id /* block */ _getValidCacheItemBlock; // +0x28
    unsigned long long _lastRequestTime; // +0x30
    EmoticonStoreItem * _originItem; // +0x38
}
- (id)initWithPackageId:(id)arg1;
- (void)createRequest;
- (void)tryStartRequest;
- (void)startRequest;
- (void)loadEmoticonItem;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)productID;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)forceUpdate;
- (void)setForceUpdate:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id /* block */)getValidCacheItemBlock;
- (void)setGetValidCacheItemBlock:(id /* block */)arg1;
- (unsigned long long)lastRequestTime;
- (void)setLastRequestTime:(unsigned long long)arg1;
- (BOOL)isActive;
- (id)originItem;
- (void)setOriginItem:(id)arg1;
- (void).cxx_destruct;
@end

