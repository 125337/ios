@interface MJTemplateComposingButton : MMUIButton
{
    UIImageView * _iconView; // +0x8
    CATextLayer * _textLayer; // +0x10
    CAGradientLayer * _gradientLayer; // +0x18
    UIFont * _customFont; // +0x20
    CGSize _textContentWidth; // +0x28
}
- (id)init;
- (void)layoutSubviews;
- (void)updateUIForEnabled;
- (void)updateUIForDisabled;
- (void)setupUIForEnabled;
- (void)setupUIForDisabled;
- (void)clearPreviousEffect;
- (id)customFont;
- (CGSize)textContentWidth;
- (void)setTextContentWidth:(CGSize)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)textLayer;
- (void)setTextLayer:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void)setCustomFont:(id)arg1;
- (void).cxx_destruct;
@end

