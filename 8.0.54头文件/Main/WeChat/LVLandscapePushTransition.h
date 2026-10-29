@interface LVLandscapePushTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    id <LVLandscapeTransitionDelegate> _delegate; // +0x8
    UIViewController * _animatedTransitionRespondViewController; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (id)playerDetailVC:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_rotateAnimateTransition:(id)arg1;
- (void)_pushAnimateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (void).cxx_destruct;
@end

