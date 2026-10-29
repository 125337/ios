@interface LiteAppLivePhotoTrimSlideTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _presenting; // +0x8
}
- (id)initWithPresenting:(BOOL)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)presenting;
- (void)setPresenting:(BOOL)arg1;
@end
