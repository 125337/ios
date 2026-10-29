@interface TextStateMediaEffectCompositeView : UIView
{
    unsigned int _effects; // +0x8
    double _transitionProgress; // +0x10
    UIView * _darkenView; // +0x18
    UIView * _blurContainerView; // +0x20
    UIVisualEffectView * _blurView; // +0x28
    UIViewPropertyAnimator * _blurAnimator; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initNotifications;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setEffects:(unsigned int)arg1;
- (void)setTransitionProgress:(double)arg1;
- (void)addBlurViewEffect;
- (void)removeBlurViewEffect;
- (void)didMoveToWindow;
- (void)willEnterForeground;
- (unsigned int)effects;
- (double)transitionProgress;
- (id)darkenView;
- (void)setDarkenView:(id)arg1;
- (id)blurContainerView;
- (void)setBlurContainerView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)blurAnimator;
- (void)setBlurAnimator:(id)arg1;
- (void).cxx_destruct;
@end

