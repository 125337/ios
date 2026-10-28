@interface MMFinderLiveMultiPriceViewConfig : NSObject
{
    unsigned long long _colorStyle; // +0x8
    UIFont * _normalCurrentPriceFont; // +0x10
    UIFont * _minCurrentPriceFont; // +0x18
    UIFont * _currentPriceDescriptionFont; // +0x20
    UIFont * _currentPriceSuffixFont; // +0x28
    UIFont * _listPriceFont; // +0x30
    UIFont * _priceSuffixDescriptionFont; // +0x38
}
- (unsigned long long)colorStyle;
- (void)setColorStyle:(unsigned long long)arg1;
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
