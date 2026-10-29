@interface VoIPLockScreenTip : MMUILabel
{
    BOOL _isAnimating; // +0x8
    BOOL __animateInterrupted; // +0x9
    id /* block */ __holdAnimationBlock; // +0x10
    CGPoint _showPoint; // +0x18
    CGRect _allowedRect; // +0x28
    UIEdgeInsets _safeInsets; // +0x48
}
+ (UIEdgeInsets)defaultSafeInsets;
- (id)initWithText:(id)arg1;
- (void)showScreenTipWithPoint:(CGPoint)arg1;
- (void)showScreenTipAtTapPoint:(CGPoint)arg1;
- (void)forceStopShowScreenTip;
- (void)presentInContainer:(id)arg1 atTapPoint:(CGPoint)arg2;
- (void)dismiss;
- (CGPoint)correctedCenterForTapPoint:(CGPoint)arg1;
- (void)startAnimation;
- (void)interruptAnimation;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (CGRect)allowedRect;
- (void)setAllowedRect:(CGRect)arg1;
- (UIEdgeInsets)safeInsets;
- (void)setSafeInsets:(UIEdgeInsets)arg1;
- (CGPoint)showPoint;
- (void)setShowPoint:(CGPoint)arg1;
- (BOOL)_animateInterrupted;
- (void)set_animateInterrupted:(BOOL)arg1;
- (id /* block */)_holdAnimationBlock;
- (void)set_holdAnimationBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
