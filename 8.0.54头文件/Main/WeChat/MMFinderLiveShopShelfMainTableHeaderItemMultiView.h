@interface MMFinderLiveShopShelfMainTableHeaderItemMultiView : MMFinderLiveShopShelfMainTableHeaderItemView
{
    id /* block */ _onClicked; // +0x8
    UIButton * _button; // +0x10
    UIView * _line; // +0x18
    UILabel * _subtitleLabel; // +0x20
    UIImageView * _tailIcon; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)addSubtitleLabel;
- (void)doOnClicked;
- (CGSize)tailIconSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
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
- (id)tailIcon;
- (void)setTailIcon:(id)arg1;
- (void).cxx_destruct;
@end

