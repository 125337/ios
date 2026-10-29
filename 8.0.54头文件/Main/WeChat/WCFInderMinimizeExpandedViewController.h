@interface WCFInderMinimizeExpandedViewController : MMUIViewController
{
    WCFinderMinimizeGestureAnimator * _animator; // +0x68
}
- (void)viewDidLoad;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

