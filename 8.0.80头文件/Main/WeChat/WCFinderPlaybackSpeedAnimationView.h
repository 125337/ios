@interface WCFinderPlaybackSpeedAnimationView : UIView
{
    UIImageView * _firstPlayIcon; // +0x8
    UIImageView * _secondPlayIcon; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (id)genUIImageView;
- (void)layoutWithDefaultSize;
- (BOOL)isAnimating;
- (void)startAnimation;
- (void)stopAnimation;
- (void)layoutSubviews;
- (id)firstPlayIcon;
- (void)setFirstPlayIcon:(id)arg1;
- (id)secondPlayIcon;
- (void)setSecondPlayIcon:(id)arg1;
- (void).cxx_destruct;
@end
