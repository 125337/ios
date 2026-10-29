@interface WCFinderLiveCollectGiftCGI : WCFinderLiveBaseCgi
{
    unsigned int _opType; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failBlock; // +0x18
    WCFinderDataItem * _dataItem; // +0x20
    NSString * _productId; // +0x28
}
- (id)initWithFinderTaskId:(id)arg1 opType:(unsigned int)arg2 productId:(id)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned int)opType;
- (void)setOpType:(unsigned int)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (void).cxx_destruct;
@end
