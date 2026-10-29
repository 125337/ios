@interface WCEditVideoPushPopTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isEnter; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)isEnter;
- (void)setIsEnter:(BOOL)arg1;
@end
