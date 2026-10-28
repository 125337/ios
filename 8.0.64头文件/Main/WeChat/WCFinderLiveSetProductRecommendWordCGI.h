@interface WCFinderLiveSetProductRecommendWordCGI : WCFinderLiveBaseCgi
{
    id /* block */ _successBlock; // +0x8
    id /* block */ _failBlock; // +0x10
    long long _scene; // +0x18
    unsigned long long _product_id; // +0x20
    NSString * _recommendWord; // +0x28
    NSString * _anchorFinderUsrName; // +0x30
}
- (id)initWithLiveTaskId:(id)arg1 scene:(long long)arg2 product_id:(unsigned long long)arg3 recommendWord:(id)arg4 finderUsrName:(id)arg5 successBlock:(id /* block */)arg6 failBlock:(id /* block */)arg7;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (unsigned long long)product_id;
- (void)setProduct_id:(unsigned long long)arg1;
- (id)recommendWord;
- (void)setRecommendWord:(id)arg1;
- (id)anchorFinderUsrName;
- (void)setAnchorFinderUsrName:(id)arg1;
- (void).cxx_destruct;
@end
