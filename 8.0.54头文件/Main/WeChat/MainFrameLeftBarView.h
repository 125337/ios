@interface MainFrameLeftBarView : MMBarItemCustomView
{
    BOOL _resumeAnimateAtMoveToWindow; // +0x8
    UIColor * _iconTintedColor; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _iconView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconTintedColor:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)playShakeAnimation;
- (void)didMoveToWindow;
- (id)iconTintedColor;
- (BOOL)resumeAnimateAtMoveToWindow;
- (void)setResumeAnimateAtMoveToWindow:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end

