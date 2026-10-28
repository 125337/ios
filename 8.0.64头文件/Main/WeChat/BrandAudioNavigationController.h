@interface BrandAudioNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    BOOL _hasAppeared; // +0x8
    int _lastPresentedScene; // +0xc
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x10
    NSString * _identifier; // +0x18
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x20
    MinimizeNewTransitionController * _transitionController; // +0x28
}
- (void)setupTransitionController;
- (BOOL)edgeGestureShouldBegin;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (id)getMinimizationTransitionContext;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (void)onMinimizeTransitionEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (BOOL)hasAppeared;
- (void)setHasAppeared:(BOOL)arg1;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (int)lastPresentedScene;
- (void)setLastPresentedScene:(int)arg1;
- (void).cxx_destruct;
@end
