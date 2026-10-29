@interface MPHeroTransitionManager : NSObject <UIGestureRecognizerDelegate>
{
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x8
    UIScreenEdgePanGestureRecognizer * _edgePan; // +0x10
    MMWebViewController * _webViewController; // +0x18
}
- (id)heroContext;
- (BOOL)isSourceValid;
- (BOOL)heroPopAvailable;
- (id)animationControllerForOperation:(long long)arg1;
- (id)currentInteractionController;
- (void)setupInteractiveGestureIfNeeded;
- (void)cleanupGesture;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onEdgePan:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (void).cxx_destruct;
@end
