@interface WCFinderNavTabTitleButton : MMUIButton
{
    WCFinderNavTabTitle * _normalTitle; // +0x8
    WCFinderNavTabTitle * _selectedTitle; // +0x10
    YYLabel * _label; // +0x18
    NSString * _dispalyAccessibilityLabel; // +0x20
    CGSize _normalSize; // +0x28
    CGSize _selectedSize; // +0x38
}
- (void)setupTitle:(id)arg1 selectedTitle:(id)arg2 accessibilityLabel:(id)arg3;
- (CGSize)displaySizeFotTitle:(id)arg1;
- (void)update;
- (id)accessibilityLabel;
- (void)layoutLabel;
- (id)label;
- (void)setSelected:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (id)normalTitle;
- (void)setNormalTitle:(id)arg1;
- (id)selectedTitle;
- (void)setSelectedTitle:(id)arg1;
- (CGSize)normalSize;
- (void)setNormalSize:(CGSize)arg1;
- (CGSize)selectedSize;
- (void)setSelectedSize:(CGSize)arg1;
- (void)setLabel:(id)arg1;
- (id)dispalyAccessibilityLabel;
- (void)setDispalyAccessibilityLabel:(id)arg1;
- (void).cxx_destruct;
@end

