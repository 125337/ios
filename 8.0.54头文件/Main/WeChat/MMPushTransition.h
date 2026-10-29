@interface MMPushTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIViewPropertyAnimator * _animator; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

