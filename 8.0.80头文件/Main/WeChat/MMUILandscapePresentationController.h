@interface MMUILandscapePresentationController : UIPresentationController <UIGestureRecognizerDelegate>
+ (CGRect)rectForLandscapeModalViewController;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (long long)adaptivePresentationStyleForTraitCollection:(id)arg1;
- (BOOL)shouldPresentInFullscreen;
- (void)containerViewWillLayoutSubviews;
- (CGRect)frameOfPresentedViewInContainerView;
- (void)didTapBG:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
@end
