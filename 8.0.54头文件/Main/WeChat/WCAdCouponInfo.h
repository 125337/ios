@interface WCAdCouponInfo : NSObject <NSCoding>
{
    NSString * _couponSenderPhoto; // +0x8
    NSString * _couponSenderName; // +0x10
    NSString * _couponAppId; // +0x18
    NSString * _couponStockId; // +0x20
    NSString * _couponName; // +0x28
    NSString * _couponDesc; // +0x30
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)couponSenderPhoto;
- (void)setCouponSenderPhoto:(id)arg1;
- (id)couponSenderName;
- (void)setCouponSenderName:(id)arg1;
- (id)couponAppId;
- (void)setCouponAppId:(id)arg1;
- (id)couponStockId;
- (void)setCouponStockId:(id)arg1;
- (id)couponName;
- (void)setCouponName:(id)arg1;
- (id)couponDesc;
- (void)setCouponDesc:(id)arg1;
- (void).cxx_destruct;
@end

