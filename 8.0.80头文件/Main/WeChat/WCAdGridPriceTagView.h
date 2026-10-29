@interface WCAdGridPriceTagView : MMUIView
{
    double _maxWidth; // +0x8
    UIVisualEffectView * _blurEffectView; // +0x10
    UIView * _backgroundColorView; // +0x18
    MMUILabel * _priceLabel; // +0x20
    NSString * _priceText; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 priceText:(id)arg2 maxWidth:(double)arg3;
- (void)setupView;
- (void)setupBlurEffect;
- (void)setupPriceLabel;
- (void)updatePriceText:(id)arg1;
- (id)parseAndStylePriceText:(id)arg1;
- (void)layoutSubviews;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg1;
- (id)backgroundColorView;
- (void)setBackgroundColorView:(id)arg1;
- (id)priceLabel;
- (void)setPriceLabel:(id)arg1;
- (id)priceText;
- (void)setPriceText:(id)arg1;
- (void).cxx_destruct;
@end
