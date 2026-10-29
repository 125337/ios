@interface MMLiveMinimizationAnimation : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>
{
    id <MMLiveMinimizationAnimateDelegate> _minimizeDelegate; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)minimizeDelegate;
- (void)setMinimizeDelegate:(id)arg1;
- (void).cxx_destruct;
@end
