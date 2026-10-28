@interface WCFinderFullScreenAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    unsigned int _transitioningType; // +0x8
    UIPercentDrivenInteractiveTransition * _interactive; // +0x10
    UIViewController * _animatedTransitionRespondViewController; // +0x18
    id /* block */ _transitioningCompletion; // +0x20
    UIPanGestureRecognizer * _gesture; // +0x28
}
+ (id)animatorWithGesture:(id)arg1 transitioningType:(unsigned int)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)__progressWithSender:(id)arg1;
- (double)__velocityWithSender:(id)arg1;
- (id)interactive;
- (void)setInteractive:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id /* block */)transitioningCompletion;
- (void)setTransitioningCompletion:(id /* block */)arg1;
- (unsigned int)transitioningType;
- (void)setTransitioningType:(unsigned int)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (void).cxx_destruct;
@end
