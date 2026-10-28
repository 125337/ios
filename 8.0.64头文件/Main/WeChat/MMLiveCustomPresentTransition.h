@interface MMLiveCustomPresentTransition : MMLiveCustomTransition <UIViewControllerAnimatedTransitioning>
- (double)transitionDuration:(id)arg1;
- (void)defaultAnimateTransitionPresentDownToTop:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)getToViewFinalRect;
- (void)innerExtendForMaximizeToPartOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 maximizeRect:(CGRect)arg4 finalRect:(CGRect)arg5;
- (void)innerExtendForMaximizeToAllOfScreen:(id)arg1 fromView:(id)arg2 toView:(id)arg3 finalRect:(CGRect)arg4;
@end
