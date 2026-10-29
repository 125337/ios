@interface WCBrandOverFullscreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isPresent; // +0x8
}
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
@end
