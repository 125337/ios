@interface WCFinderPromotionShopActionConfig : NSObject
{
    NSString * _productId; // +0x8
    NSString * _poiId; // +0x10
    long long _multiStorePromotion; // +0x18
}
- (id)description;
- (id)toJsonStr;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSONString:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)poiId;
- (void)setPoiId:(id)arg1;
- (long long)multiStorePromotion;
- (void)setMultiStorePromotion:(long long)arg1;
- (void).cxx_destruct;
@end

