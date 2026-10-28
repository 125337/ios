@interface MMFinderLiveShopShelfMainTableHeaderItemMultiView : MMFinderLiveShopShelfMainTableHeaderItemView
{
    id /* block */ _onClicked; // +0x8
    UIButton * _button; // +0x10
    UIView * _line; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UILabel * _suffixLabel; // +0x28
    UIImageView * _tailIcon; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)addSubtitleLabel;
- (id)addSuffixLabel;
- (void)doOnClicked;
- (CGSize)tailIconSize;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityPerformMagicTap;
- (id /* block */)onClicked;
- (void)setOnClicked:(id /* block */)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)suffixLabel;
- (void)setSuffixLabel:(id)arg1;
- (id)tailIcon;
- (void)setTailIcon:(id)arg1;
- (void).cxx_destruct;
@end
