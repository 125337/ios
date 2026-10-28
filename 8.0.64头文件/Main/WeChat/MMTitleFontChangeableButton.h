@interface MMTitleFontChangeableButton : UIButton
{
    UIFont * _normalFont; // +0x8
    UIFont * _highlightedFont; // +0x10
    UIFont * _selectedFont; // +0x18
    UIFont * _disabledFont; // +0x20
}
- (void)setTitleFont:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)setTitleFont:(id)arg1;
- (id)normalFont;
- (void)setNormalFont:(id)arg1;
- (id)highlightedFont;
- (void)setHighlightedFont:(id)arg1;
- (id)selectedFont;
- (void)setSelectedFont:(id)arg1;
- (id)disabledFont;
- (void)setDisabledFont:(id)arg1;
- (void).cxx_destruct;
@end
