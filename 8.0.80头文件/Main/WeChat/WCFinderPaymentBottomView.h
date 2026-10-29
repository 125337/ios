@interface WCFinderPaymentBottomView : UIView
{
    id <WCFinderPaymentBottomViewDelegate> _delegate; // +0x8
    UIView * _topLine; // +0x10
    UIImageView * _priceCoinIcon; // +0x18
    UILabel * _priceLabel; // +0x20
    UILabel * _priceDescLabel; // +0x28
    WCFinderMaskButton * _confirmButton; // +0x30
    WCFinderPaymentBottomViewConfig * _config; // +0x38
    double _layoutWidth; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithConfig:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onClickConfirm;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topLine;
- (void)setTopLine:(id)arg1;
- (id)priceCoinIcon;
- (void)setPriceCoinIcon:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)priceDescLabel;
- (void)setPriceDescLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end
