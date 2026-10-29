@interface MPHeroPresentationTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    MPHeroTransitionContext * _heroContext; // +0x8
    UIViewController * _animatedTransitionRespondViewController; // +0x10
}
- (id)initWithHeroContext:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (void).cxx_destruct;
@end
