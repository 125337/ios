@interface FBSDKButton : UIButton
{
    BOOL _skipIntrinsicContentSizing; // +0x8
    BOOL _isExplicitlyDisabled; // +0x9
}
- (id)initWithFrame:(CGRect)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)setEnabled:(BOOL)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (void)logTapEventWithEventName:(id)arg1 parameters:(id)arg2;
- (void)checkImplicitlyDisabled;
- (void)configureButton;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4;
- (void)configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (id)defaultBackgroundColor;
- (id)defaultDisabledColor;
- (id)defaultFont;
- (id)defaultHighlightedColor;
- (id)defaultIcon;
- (id)defaultSelectedColor;
- (BOOL)isImplicitlyDisabled;
- (CGSize)sizeThatFits:(CGSize)arg1 title:(id)arg2;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (id)_backgroundImageWithColor:(id)arg1 cornerRadius:(double)arg2 scale:(double)arg3;
- (void)_configureWithIcon:(id)arg1 title:(id)arg2 backgroundColor:(id)arg3 highlightedColor:(id)arg4 selectedTitle:(id)arg5 selectedIcon:(id)arg6 selectedColor:(id)arg7 selectedHighlightedColor:(id)arg8;
- (double)_fontSizeForHeight:(double)arg1;
- (double)_heightForContentRect:(CGRect)arg1;
- (double)_heightForFont:(id)arg1;
- (double)_marginForHeight:(double)arg1;
- (double)_paddingForHeight:(double)arg1;
- (double)_textPaddingCorrectionForHeight:(double)arg1;
@end

