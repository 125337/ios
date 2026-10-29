@interface ImageFitWithBlurredBackgroundView : MMUIView
{
    UIImageView * _realImageView; // +0x8
    UIImageView * _backgroundView; // +0x10
    UIVisualEffectView * _blurView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupBackgroundView;
- (void)setupBlurView;
- (void)setupRealImageView;
- (void)layoutSubviews;
- (void)setupImage:(id)arg1;
- (id)realImageView;
- (void)setRealImageView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (void).cxx_destruct;
@end
