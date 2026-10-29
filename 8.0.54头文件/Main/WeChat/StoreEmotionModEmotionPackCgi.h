@interface StoreEmotionModEmotionPackCgi : StoreEmotionBaseCgi
{
    id /* block */ _onFinishBlock; // +0x8
}
- (id)init;
- (void)startAddTusiji;
- (void)startDeleteProductId:(id)arg1;
- (void)onFinishWithIsSuccess:(BOOL)arg1 productId:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id /* block */)onFinishBlock;
- (void)setOnFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

