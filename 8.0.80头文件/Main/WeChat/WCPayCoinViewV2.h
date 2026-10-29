@interface WCPayCoinViewV2 : KindaUIButton
{
    BOOL _stackedLayout; // +0x8
    WecoinPriceInfo * _priceInfo; // +0x10
    UILabel * _amountLabel; // +0x18
    UILabel * _unitLabel; // +0x20
    UILabel * _priceLabel; // +0x28
    UILabel * _yuanLabel; // +0x30
    UIView * _leftView; // +0x38
    UIView * _rightView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPriceInfo:(id)arg1;
- (void)setStackedLayout:(BOOL)arg1;
- (id)priceInfo;
- (id)amountLabel;
- (void)setAmountLabel:(id)arg1;
- (id)unitLabel;
- (void)setUnitLabel:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)yuanLabel;
- (void)setYuanLabel:(id)arg1;
- (id)leftView;
- (void)setLeftView:(id)arg1;
- (id)rightView;
- (void)setRightView:(id)arg1;
- (BOOL)stackedLayout;
- (void).cxx_destruct;
@end
