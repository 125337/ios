@interface NewLifePushLikeDetailTransitionManager : NSObject <MMFlutterViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    MMUIViewController * _viewController; // +0x8
    MMPushTransition * _transition; // +0x10
}
- (id)init;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)setupViewController:(id)arg1;
- (BOOL)updateOperation:(long long)arg1;
- (id)getTransition;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)transition;
- (void)setTransition:(id)arg1;
- (void).cxx_destruct;
@end

