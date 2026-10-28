@interface MPSystemPresentAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    id <MPSystemPresentAnimatedTransitioningDelegate> _delegate; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
