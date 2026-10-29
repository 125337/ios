@interface MagicEcsNirvanaNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, UIGestureRecognizerDelegate>
{
    BOOL _needsPresentationLayoutRestore; // +0x8
    BOOL _hasAppeared; // +0x9
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x18
    MinimizeNewTransitionController * _transitionController; // +0x20
}
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateVisiblePresentationLayout;
- (void)restorePresentationLayoutIfNeeded;
- (void)alignPresentationFrame;
- (void)setupTransitionController;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1;
- (BOOL)DismissMyselfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (BOOL)needsPresentationLayoutRestore;
- (void)setNeedsPresentationLayoutRestore:(BOOL)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (void).cxx_destruct;
@end
