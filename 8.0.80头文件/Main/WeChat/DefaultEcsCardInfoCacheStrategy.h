@interface DefaultEcsCardInfoCacheStrategy : NSObject <EcsCardInfoCacheStrategy>
{
    MMLRUCache * _productCadrCacheList; // +0x8
    MMLRUCache * _shopCardCacheList; // +0x10
    MMLRUCache * _jumpInfoCacheList; // +0x18
}
- (id)init;
- (void)initCache;
- (void)updateProductCardCache:(id)arg1 reqInfo:(id)arg2;
- (id)getProductCardWithProduct:(id)arg1;
- (id)getValidProductCardWithProduct:(id)arg1;
- (id)getShopCardWithReqInfo:(id)arg1;
- (id)getValidShopCardWithReqInfo:(id)arg1;
- (void)updateShopCardCache:(id)arg1 reqInfo:(id)arg2;
- (void)updateBulkBuyCardCache:(id)arg1 key:(id)arg2;
- (id)getValidBulkBuyCardJumpInfoFromCache:(id)arg1;
- (id)getBulkBuyCardJumpInfoFromCache:(id)arg1;
- (void)updateCardEcsJumpInfoCache:(id)arg1 key:(id)arg2;
- (id)getValidCardEcsJumpInfoFromCache:(id)arg1;
- (id)getCardEcsJumpInfoFromCache:(id)arg1;
- (id)productCadrCacheList;
- (void)setProductCadrCacheList:(id)arg1;
- (id)shopCardCacheList;
- (void)setShopCardCacheList:(id)arg1;
- (id)jumpInfoCacheList;
- (void)setJumpInfoCacheList:(id)arg1;
- (void).cxx_destruct;
@end
