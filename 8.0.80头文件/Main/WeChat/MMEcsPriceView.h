@interface MMEcsPriceView : UIView
{
    MMEcsPriceViewConfig * _config; // +0x8
    NSString * _currentPriceDescription; // +0x10
    unsigned long long _currentPrice; // +0x18
    NSString * _currentPriceWording; // +0x20
    NSString * _currentPriceSuffix; // +0x28
    unsigned long long _listPrice; // +0x30
    NSString * _priceSuffixDescription; // +0x38
    UILabel * _currentPriceLabel; // +0x40
    UILabel * _currentPriceSuffixLabel; // +0x48
    UILabel * _currentPriceDescriptionLabel; // +0x50
    UILabel * _listPriceLabel; // +0x58
    UILabel * _priceSuffixDescriptionLabel; // +0x60
}
+ (double)heightForNormalStateWithConfig:(id)arg1;
- (void)prepareForReuse;
- (void)updateWithProductShareItem:(id)arg1;
- (id)accessibilityAttributedLabel;
- (id)initWithConfig:(id)arg1;
- (void)setCurrentPrice:(unsigned long long)arg1;
- (void)setCurrentPriceWording:(id)arg1;
- (void)updateUI;
- (void)updateSubviewsIsHiddenForData;
- (void)layoutSubviews;
- (void)layoutSubviewsVertical;
- (void)layoutSubviewsHorizontal;
- (double)leftSpacingOf:(id)arg1;
- (void)initSubViews;
- (void)addObserves;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)currentPriceDescription;
- (void)setCurrentPriceDescription:(id)arg1;
- (unsigned long long)currentPrice;
- (id)currentPriceWording;
- (id)currentPriceSuffix;
- (void)setCurrentPriceSuffix:(id)arg1;
- (unsigned long long)listPrice;
- (void)setListPrice:(unsigned long long)arg1;
- (id)priceSuffixDescription;
- (void)setPriceSuffixDescription:(id)arg1;
- (id)currentPriceLabel;
- (void)setCurrentPriceLabel:(id)arg1;
- (id)currentPriceSuffixLabel;
- (void)setCurrentPriceSuffixLabel:(id)arg1;
- (id)currentPriceDescriptionLabel;
- (void)setCurrentPriceDescriptionLabel:(id)arg1;
- (id)listPriceLabel;
- (void)setListPriceLabel:(id)arg1;
- (id)priceSuffixDescriptionLabel;
- (void)setPriceSuffixDescriptionLabel:(id)arg1;
- (void).cxx_destruct;
@end
