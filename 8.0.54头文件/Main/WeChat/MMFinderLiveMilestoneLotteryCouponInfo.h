@interface MMFinderLiveMilestoneLotteryCouponInfo : NSObject
{
    unsigned int _status; // +0x8
    NSString * _lotteryId; // +0x10
    NSString * _couponId; // +0x18
    NSString * _productId; // +0x20
    NSString * _buttonText; // +0x28
    NSString * _expireDesc; // +0x30
    NSData * _jumpInfo; // +0x38
}
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)couponId;
- (void)setCouponId:(id)arg1;
- (id)productId;
- (void)setProductId:(id)arg1;
- (id)buttonText;
- (void)setButtonText:(id)arg1;
- (id)expireDesc;
- (void)setExpireDesc:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (void).cxx_destruct;
@end

