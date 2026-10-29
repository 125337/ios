@interface WCAdInteractionRollingLabelView : UIView <CAAnimationDelegate>
{
    BOOL _isAnimating; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 rollingTexts:(id)arg2;
- (void)generateSubviewsWithRollingTexts:(id)arg1;
- (void)onSwitchToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
@end

