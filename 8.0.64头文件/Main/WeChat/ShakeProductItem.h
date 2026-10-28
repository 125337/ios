@interface ShakeProductItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * _title; // +0x8
    NSString * _thumbUrl; // +0x10
    NSString * _productId; // +0x18
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_productId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (void).cxx_destruct;
@end
