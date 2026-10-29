@interface TingTaskBarContainerView : UIView
{
    UIImageView * _backgroundView; // +0x8
    UIView * _borderLayerView; // +0x10
    CAGradientLayer * _gradientLayer; // +0x18
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)borderLayerView;
- (void)setBorderLayerView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end
