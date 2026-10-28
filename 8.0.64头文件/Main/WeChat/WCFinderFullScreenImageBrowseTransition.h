@interface WCFinderFullScreenImageBrowseTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    BOOL _isDismissing; // +0x8
    BOOL _notTriggerParentVCLifeCycleFunc; // +0x9
    UIView * _startView; // +0x10
    CGRect _startingFrame; // +0x18
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (CGRect)startingFrame;
- (void)setStartingFrame:(CGRect)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (id)startView;
- (void)setStartView:(id)arg1;
- (BOOL)notTriggerParentVCLifeCycleFunc;
- (void)setNotTriggerParentVCLifeCycleFunc:(BOOL)arg1;
- (void).cxx_destruct;
@end
