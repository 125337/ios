@interface EcsGiftNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x8
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x10
    MinimizeNewTransitionController * _transitionController; // +0x18
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)setupTransitionController;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (void).cxx_destruct;
@end
