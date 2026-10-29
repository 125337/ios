@interface MMLiteAppModalTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>
{
    unsigned long long _transitionType; // +0x8
    double _velocityThreshold; // +0x10
    id /* block */ _transitionComplete; // +0x18
    UIPanGestureRecognizer * _panGesture; // +0x20
    UIViewPropertyAnimator * _animator; // +0x28
    unsigned long long _panGestureType; // +0x30
    CGRect _presentedFinianFrame; // +0x38
}
- (CGRect)finalFrameForPresentedView:(id)arg1;
- (void)setupAnimatorForTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)wantsInteractiveStart;
- (void)setPanGesture:(id)arg1 forType:(unsigned long long)arg2;
- (void)handlePanGesture:(id)arg1;
- (unsigned long long)transitionType;
- (void)setTransitionType:(unsigned long long)arg1;
- (double)velocityThreshold;
- (void)setVelocityThreshold:(double)arg1;
- (CGRect)presentedFinianFrame;
- (void)setPresentedFinianFrame:(CGRect)arg1;
- (id /* block */)transitionComplete;
- (void)setTransitionComplete:(id /* block */)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (unsigned long long)panGestureType;
- (void)setPanGestureType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

