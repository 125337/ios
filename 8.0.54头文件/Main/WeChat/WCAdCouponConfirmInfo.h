@interface WCAdCouponConfirmInfo : WCAdConfirmHalfScreenBaseInfo
{
    NSString * _couponAppId; // +0x8
    NSString * _couponStockId; // +0x10
}
- (id)couponAppId;
- (void)setCouponAppId:(id)arg1;
- (id)couponStockId;
- (void)setCouponStockId:(id)arg1;
- (void).cxx_destruct;
@end

