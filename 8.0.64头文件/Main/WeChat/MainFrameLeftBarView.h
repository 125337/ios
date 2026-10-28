@interface MainFrameLeftBarView : MMBarItemCustomView <CAAnimationDelegate>
{
    BOOL _resumeAnimateAtMoveToWindow; // +0x8
    BOOL _isEducateAnimating; // +0x9
    UIColor * _iconTintedColor; // +0x10
    UIView * _navTitleView; // +0x18
    UIView * _contentView; // +0x20
    UIImageView * _iconView; // +0x28
    UILabel * _educationLabel; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconTintedColor:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)playShakeAnimation;
- (void)prepareForEducationAnimation;
- (void)playEducationAnimation:(id)arg1;
- (void)_playScaleColorAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)didMoveToWindow;
- (id)iconTintedColor;
- (BOOL)resumeAnimateAtMoveToWindow;
- (void)setResumeAnimateAtMoveToWindow:(BOOL)arg1;
- (BOOL)isEducateAnimating;
- (void)setIsEducateAnimating:(BOOL)arg1;
- (id)navTitleView;
- (void)setNavTitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)educationLabel;
- (void)setEducationLabel:(id)arg1;
- (void).cxx_destruct;
@end
