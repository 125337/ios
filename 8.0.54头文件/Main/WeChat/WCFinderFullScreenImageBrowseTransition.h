@interface WCFinderFullScreenImageBrowseTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _isDismissing; // +0x8
    CGRect _startingFrame; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (CGRect)startingFrame;
- (void)setStartingFrame:(CGRect)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
@end

