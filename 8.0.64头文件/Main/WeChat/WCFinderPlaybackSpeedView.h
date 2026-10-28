@interface WCFinderPlaybackSpeedView : UIView
{
    CAGradientLayer * _topGradientLayer; // +0x8
    UIView * _containerView; // +0x10
    UILabel * _playbackSpeedLabel; // +0x18
    UIImageView * _firstPlayIcon; // +0x20
    UIImageView * _secondPlayIcon; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateWithTitle:(id)arg1;
- (void)updateWithTitle:(id)arg1 hideIconView:(BOOL)arg2;
- (double)_getIconContentWidth;
- (void)layoutViewWithLandscape:(BOOL)arg1;
- (void)_animatedLayoutViewWithType:(unsigned long long)arg1;
- (void)doEnhanceAnimation;
- (void)resetEnhance;
- (void)resetEnhanceAnimation;
- (id)genUIImageView;
- (void)animationUpdateWithTitle:(id)arg1 hideIconView:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)startAnimation;
- (void)stopAnimation;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)playbackSpeedLabel;
- (void)setPlaybackSpeedLabel:(id)arg1;
- (id)firstPlayIcon;
- (void)setFirstPlayIcon:(id)arg1;
- (id)secondPlayIcon;
- (void)setSecondPlayIcon:(id)arg1;
- (void).cxx_destruct;
@end
