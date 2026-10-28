@interface MMLiveMorphInteractiveDismissTransitionController : NSObject <UIGestureRecognizerDelegate, MMLiveMorphInteractiveDismissTransitionAnimatorDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    id <MMLiveMorphInteractiveDismissTransitionControllerDelegate> _delegate; // +0x8
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
    UIPanGestureRecognizer * _panGesture; // +0x18
    UIViewController * _vc; // +0x20
    MMLiveMorphInteractiveDismissTransitionAnimator * _animator; // +0x28
}
- (id)init;
- (void)installGestureRecognizer:(id)arg1;
- (void)handleGesture:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)dismissParametersForCurrentContext;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)supportSwipeEdge;
- (BOOL)supportSwipeBottomToTop;
- (BOOL)supportSwipeTopToBottom;
- (BOOL)supportSwipeLeftToRight;
- (BOOL)enableGesture;
- (void)onInteractiveDismissTransitionEnd:(BOOL)arg1 direction:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
