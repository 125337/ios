@interface MinimizeTaskOpenContext : NSObject
{
    UINavigationController * _presentingNavController; // +0x8
    MiniTaskNavigationController * _containerNavController; // +0x10
    MiniTaskTransitionContext * _transitionContext; // +0x18
}
- (id)leftEdgePanGestureRecognizer;
- (id)rightEdgePanGestureRecognizer;
- (id)presentingNavController;
- (void)setPresentingNavController:(id)arg1;
- (id)containerNavController;
- (void)setContainerNavController:(id)arg1;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (void).cxx_destruct;
@end
