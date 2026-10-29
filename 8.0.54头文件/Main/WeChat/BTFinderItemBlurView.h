@interface BTFinderItemBlurView : MMUIView
{
    CAGradientLayer * _colorGradientLayer; // +0x8
    CAGradientLayer * _blurGradientLayer; // +0x10
    UIView * _blurMaskView; // +0x18
    UIColor * _mainColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setMainColor:(id)arg1;
- (void)refreshBlurGradientLayer;
- (id)colorGradientLayer;
- (id)blurGradientLayer;
- (id)blurMaskView;
- (void)setColorGradientLayer:(id)arg1;
- (void)setBlurGradientLayer:(id)arg1;
- (void)setBlurMaskView:(id)arg1;
- (id)mainColor;
- (void).cxx_destruct;
@end

