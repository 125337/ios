@interface MinimizeNewTransitionController : NSObject <MinimizeEdgeGestureHandlerDelegate, MinimizePanGestureHandlerDelegate, UIGestureRecognizerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
{
    BOOL _isMinimizeCircleInteracting; // +0x8
    BOOL _isHitMinimizeCircleArea; // +0x9
    BOOL _isPerformingExtraAnimation; // +0xa
    id <MinimizeNewTransitionControllerDelegate> _delegate; // +0x10
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x18
    UIPanGestureRecognizer * _panGesture; // +0x20
    UIViewController * _vc; // +0x28
    id <UIViewControllerAnimatedTransitioning> _currentTransition; // +0x30
    UIViewController * _taskViewController; // +0x38
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x40
    MinimizePanGestureHandler * _panGesHandler; // +0x48
    MinimizationTransitionContext * _transitioningContext; // +0x50
}
- (id)init;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)animationControllerForTrasitionType:(unsigned int)arg1 fromVC:(id)arg2 toVC:(id)arg3;
- (void)onEdgeInteractiveTransitionBegin:(id)arg1;
- (void)onEdgeInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onEdgeInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onEdgeInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (double)transitionProgressConvertedFromGestureProgress:(double)arg1;
- (void)onPanInteractiveTransitionBegin:(id)arg1;
- (void)onPanInteractiveTransitionChanged:(id)arg1 progress:(double)arg2 translation:(CGPoint)arg3;
- (void)onPanInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onPanInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (double)transitionProgressConvertedFromPanGestureProgress:(double)arg1;
- (void)performCompleteMinimizeAnimation;
- (void)performRecoverMinimizeAnimiation;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(BOOL)arg3;
- (unsigned int)decideTransitionTypeWithAnimationController:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)activeInteractiveTransition;
- (BOOL)isInteractiveTransitioning;
- (BOOL)isInteractiveTransitioningWithEdgeGesture;
- (BOOL)isInteractiveTransitioningWithPanGesture;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (id)vc;
- (void)setVc:(id)arg1;
- (id)currentTransition;
- (void)setCurrentTransition:(id)arg1;
- (id)taskViewController;
- (void)setTaskViewController:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)panGesHandler;
- (void)setPanGesHandler:(id)arg1;
- (id)transitioningContext;
- (void)setTransitioningContext:(id)arg1;
- (BOOL)isMinimizeCircleInteracting;
- (void)setIsMinimizeCircleInteracting:(BOOL)arg1;
- (BOOL)isHitMinimizeCircleArea;
- (void)setIsHitMinimizeCircleArea:(BOOL)arg1;
- (BOOL)isPerformingExtraAnimation;
- (void)setIsPerformingExtraAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
