@interface BSBusinessProductItem : NSObject
{
    unsigned int _price; // +0x8
    NSString * _productId; // +0x10
    NSString * _productName; // +0x18
    NSString * _sellerName; // +0x20
    NSString * _sellerUserName; // +0x28
    NSString * _productImgUrl; // +0x30
}
+ (id)fromServerObj:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)productName;
- (void)setProductName:(id)arg1;
- (id)sellerName;
- (void)setSellerName:(id)arg1;
- (id)sellerUserName;
- (void)setSellerUserName:(id)arg1;
- (unsigned int)price;
- (void)setPrice:(unsigned int)arg1;
- (id)productImgUrl;
- (void)setProductImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
