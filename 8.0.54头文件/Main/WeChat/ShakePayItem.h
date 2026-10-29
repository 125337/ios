@interface ShakePayItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString * _title; // +0x8
    NSString * _thumbUrl; // +0x10
    NSString * _appid; // +0x18
    NSString * _payUrl; // +0x20
    NSString * _price; // +0x28
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_payUrl;
+ (void)PBArrayAdd_price;
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
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)payUrl;
- (void)setPayUrl:(id)arg1;
- (id)price;
- (void)setPrice:(id)arg1;
- (void).cxx_destruct;
@end

