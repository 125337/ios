@interface FlutterNewLifeDetailViewController : FlutterNewLifeViewController
{
    BOOL _isDisableTransitionManager; // +0x68
}
- (void)viewDidLoad;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (BOOL)isDisableTransitionManager;
- (void)setIsDisableTransitionManager:(BOOL)arg1;
@end

