@interface WCFinderLivePromoteProductCGI : WCFinderLiveBaseCgi
{
    unsigned int _actionType; // +0x8
    unsigned int _promoteType; // +0xc
    unsigned long long _productId; // +0x10
    id /* block */ _successBlock; // +0x18
    id /* block */ _failBlock; // +0x20
}
- (id)initWithFinderTaskId:(id)arg1 productId:(unsigned long long)arg2 actionType:(unsigned int)arg3 successBlock:(id /* block */)arg4 failBlock:(id /* block */)arg5;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (unsigned int)promoteType;
- (void)setPromoteType:(unsigned int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

