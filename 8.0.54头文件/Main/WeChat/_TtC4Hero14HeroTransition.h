@interface _TtC4Hero14HeroTransition : NSObject <UITabBarControllerDelegate, UINavigationControllerDelegate, UIViewControllerInteractiveTransitioning, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
     delegate; // +0x8
     defaultAnimation; // +0x18
     containerColor; // +0x20
     isUserInteractionEnabled; // +0x28
     viewOrderingStrategy; // +0x29
     defaultAnimationDirectionStrategy; // +0x2a
     state; // +0x2b
     isPresenting; // +0x2c
     container; // +0x30
     transitionContainer; // +0x38
     completionCallback; // +0x40
     beginCallback; // +0x50
     processors; // +0x60
     animators; // +0x68
     plugins; // +0x70
     animatingFromViews; // +0x78
     animatingToViews; // +0x80
     toViewController; // +0x88
     fromViewController; // +0x90
     context; // +0x98
     progressUpdateObservers; // +0xa0
     totalDuration; // +0xa8
     progress; // +0xb0
     $__lazy_storage_$_progressRunner; // +0xb8
     transitionContext; // +0xc0
     fullScreenSnapshot; // +0xc8
     forceNotInteractive; // +0xd0
     forceFinishing; // +0xd1
     startingProgress; // +0xd8
     inNavigationController; // +0xe1
     inTabBarController; // +0xe2
}
- (BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (id)tabBarController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (BOOL)wantsInteractiveStart;
- (void)startInteractiveTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

