@interface SelectPendingProductItem : NSObject
{
    NSString * _productId; // +0x8
    NSString * _imgUrl; // +0x10
}
+ (id)makeWithProductId:(id)arg1 imgUrl:(id)arg2;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)imgUrl;
- (void)setImgUrl:(id)arg1;
- (void).cxx_destruct;
@end
