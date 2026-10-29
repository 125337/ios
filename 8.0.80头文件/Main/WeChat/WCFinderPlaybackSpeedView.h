@interface WCFinderPlaybackSpeedView : UIView
{
    UIView * _containerView; // +0x8
    UILabel * _playbackSpeedLabel; // +0x10
    WCFinderPlaybackSpeedAnimationView * _animationIconView; // +0x18
    UITapGestureRecognizer * _tapGesture; // +0x20
    id /* block */ _onTapBlock; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setOnTapBlock:(id /* block */)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)setup;
- (void)updateWithTitle:(id)arg1;
- (void)updateWithTitle:(id)arg1 hideIconView:(BOOL)arg2;
- (double)_getIconContentWidth;
- (void)setStyleForLandscape:(BOOL)arg1;
- (void)layoutView;
- (void)startAnimation;
- (void)stopAnimation;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)playbackSpeedLabel;
- (void)setPlaybackSpeedLabel:(id)arg1;
- (id)animationIconView;
- (void)setAnimationIconView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id /* block */)onTapBlock;
- (void).cxx_destruct;
@end
