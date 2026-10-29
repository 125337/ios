@interface WCFinderLiveModShelfReorderProductListCGI : WCFinderLiveBaseCgi
{
    unsigned int _modCmdId; // +0x8
    unsigned long long _productId; // +0x10
    NSArray * _reorderedShelfProductList; // +0x18
    id /* block */ _successBlock; // +0x20
    id /* block */ _failBlock; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 reorderedShelfProductList:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned int)modCmdId;
- (void)setModCmdId:(unsigned int)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)reorderedShelfProductList;
- (void)setReorderedShelfProductList:(id)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

