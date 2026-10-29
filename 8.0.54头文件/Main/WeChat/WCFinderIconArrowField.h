@interface WCFinderIconArrowField : UIView
{
    UILabel * _textField; // +0x8
    UIImageView * _iconView; // +0x10
    UIImageView * _arrowView; // +0x18
    double _arrowPaddingText; // +0x20
    id /* block */ _tapAction; // +0x28
}
+ (double)textPaddingLeft;
+ (CGPoint)iconCenterWithHeight:(double)arg1;
- (id /* block */)themeIconSVG;
- (id /* block */)arrowWithTheme;
- (id /* block */)arrowOrNoneWithTheme;
- (id)initWithFrame:(CGRect)arg1;
- (id /* block */)textColor;
- (id /* block */)configText;
- (id /* block */)icon;
- (id /* block */)arrow;
- (id /* block */)onTap;
- (id /* block */)iconWithSVGSize;
- (id /* block */)iconWithSVG;
- (void)setText:(id)arg1;
- (id)text;
- (void)sizeToFit;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)_onClickTap;
- (id)debugDescription;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)textField;
- (void)setTextField:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (double)arrowPaddingText;
- (void)setArrowPaddingText:(double)arg1;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end

