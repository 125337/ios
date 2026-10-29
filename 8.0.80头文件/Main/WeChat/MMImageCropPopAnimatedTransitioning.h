@interface MMImageCropPopAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    MMImageCropPopTransitionContext * _context; // +0x8
    id <MMImageCropVCAnimatedTransitionDelegate> _delegate; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
