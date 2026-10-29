@interface MMFinderLiveNormalTextSignView : UIView
{
    UIView * _gradientBackView; // +0x8
    CAGradientLayer * _gradientLayer; // +0x10
    UILabel * _signLabel; // +0x18
    long long _style; // +0x20
}
+ (double)insetTopForStyle:(long long)arg1;
+ (CGSize)signSizeWithText:(id)arg1 font:(id)arg2 boundingSize:(CGSize)arg3 style:(long long)arg4;
- (id)init;
- (void)updateWithSignText:(id)arg1 textColor:(id)arg2 bgColor:(id)arg3 font:(id)arg4 style:(long long)arg5;
- (void)updateGradientWithColors:(id)arg1 locations:(id)arg2;
- (void)updateSelfLayout;
- (id)signLabel;
- (id)accessibilityLabel;
- (id)gradientBackView;
- (void)setGradientBackView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void)setSignLabel:(id)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (void).cxx_destruct;
@end

