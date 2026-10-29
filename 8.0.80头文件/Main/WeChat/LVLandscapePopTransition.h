@interface LVLandscapePopTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isTabbarTransparent; // +0x8
    id <LVLandscapeTransitionDelegate> _delegate; // +0x10
    UIViewController * _animatedTransitionRespondViewController; // +0x18
}
- (double)transitionDuration:(id)arg1;
- (id)playerDetailVC:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)_rotateAnimateTransition:(id)arg1;
- (void)_popAnimateTransition:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isTabbarTransparent;
- (void)setIsTabbarTransparent:(BOOL)arg1;
- (void).cxx_destruct;
@end
