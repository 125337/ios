@interface WCPayCoinView : KindaUIButton
{
    WecoinPriceInfo * _priceInfo; // +0x8
    UILabel * _amountLabel; // +0x10
    UILabel * _priceLabel; // +0x18
    UIView * _discountView; // +0x20
    UILabel * _discountCount; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPriceInfo:(id)arg1;
- (id)priceInfo;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)discountView;
- (void)setDiscountView:(id)arg1;
- (id)discountCount;
- (void)setDiscountCount:(id)arg1;
- (void).cxx_destruct;
@end

