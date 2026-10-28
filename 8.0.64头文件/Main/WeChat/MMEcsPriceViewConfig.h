@interface MMEcsPriceViewConfig : NSObject
{
    UIFont * _normalCurrentPriceFont; // +0x8
    UIFont * _minCurrentPriceFont; // +0x10
    UIFont * _currentPriceDescriptionFont; // +0x18
    UIFont * _currentPriceSuffixFont; // +0x20
    UIFont * _listPriceFont; // +0x28
    UIFont * _priceSuffixDescriptionFont; // +0x30
}
- (id)normalCurrentPriceFont;
- (void)setNormalCurrentPriceFont:(id)arg1;
- (id)minCurrentPriceFont;
- (void)setMinCurrentPriceFont:(id)arg1;
- (id)currentPriceDescriptionFont;
- (void)setCurrentPriceDescriptionFont:(id)arg1;
- (id)currentPriceSuffixFont;
- (void)setCurrentPriceSuffixFont:(id)arg1;
- (id)listPriceFont;
- (void)setListPriceFont:(id)arg1;
- (id)priceSuffixDescriptionFont;
- (void)setPriceSuffixDescriptionFont:(id)arg1;
- (void).cxx_destruct;
@end
