@interface WCFinderLiveGetShareGoodsInfoCGI : WCFinderLiveBaseCgi
{
    unsigned int _reqType; // +0x8
    int _scene; // +0xc
    unsigned long long _objectId; // +0x10
    unsigned long long _productId; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _ecSource; // +0x28
    id /* block */ _successBlock; // +0x30
    id /* block */ _failureBlock; // +0x38
    NSString * _productCardKey; // +0x40
}
- (id)initWithObjctId:(unsigned long long)arg1 productId:(unsigned long long)arg2 finderUsername:(id)arg3 ecSource:(id)arg4 reqType:(unsigned int)arg5 productCardKey:(id)arg6 scene:(int)arg7 successBlock:(id /* block */)arg8 failureBlock:(id /* block */)arg9;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)productId;
- (void)setProductId:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (unsigned int)reqType;
- (void)setReqType:(unsigned int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id)productCardKey;
- (void)setProductCardKey:(id)arg1;
- (void).cxx_destruct;
@end
