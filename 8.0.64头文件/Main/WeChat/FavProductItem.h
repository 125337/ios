@interface FavProductItem : FavoritesModel
{
    NSString * _productTitle; // +0x8
    NSString * _productDesc; // +0x10
    NSString * _thumbUrl; // +0x18
    NSString * _productInfo; // +0x20
    NSString * _productSellerName; // +0x28
    NSString * _productUrl; // +0x30
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)productTitle;
- (void)setProductTitle:(id)arg1;
- (id)productDesc;
- (void)setProductDesc:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (id)productSellerName;
- (void)setProductSellerName:(id)arg1;
- (id)productUrl;
- (void)setProductUrl:(id)arg1;
- (void).cxx_destruct;
@end
