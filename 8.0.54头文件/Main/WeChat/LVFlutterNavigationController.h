@interface LVFlutterNavigationController : MMUINavigationController <MinimizeEdgeGestureHandlerDelegate, MinimizeNewTransitionControllerDelegate, MinimizationNewTransitionDelegate, LVLandscapeTransitionDelegate, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate>
{
    MinimizeEdgeGestureHandler * _edgeGesHandler; // +0x8
    MinimizeNewTransitionController * _transitionController; // +0x10
    UIScreenEdgePanGestureRecognizer * _edgeGesture; // +0x18
}
- (void)viewDidLoad;
- (id)playerDetailViewController;
- (void)setupMinimizeTransitionController;
- (void)setupMinimizeTransitionGesture;
- (void)prepareMinimize:(id)arg1;
- (id)minimizeContext;
- (id)makeMinimizeContext:(BOOL)arg1;
- (BOOL)enterFromMinimize;
- (BOOL)pendingMinimize;
- (void)deactiveMinimize:(BOOL)arg1 force:(BOOL)arg2;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (void)onMinimizeTransitionBeginWithoutContext;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)customDefaultAnimationForTransition:(unsigned int)arg1;
- (id)getMinimizationTransitionContext;
- (BOOL)isMinimizeTransitioning;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onLVLandscapeTransitionStart:(id)arg1;
- (void)onLVLandscapeTransitionEnd:(id)arg1 transitionType:(unsigned long long)arg2 isComplete:(BOOL)arg3;
- (void)onMinimizationNewTransitionStart:(id)arg1 withContext:(id)arg2;
- (void)onMinimizationNewTransitionEnd:(id)arg1 withContext:(id)arg2 isComplete:(BOOL)arg3;
- (id)edgeGesHandler;
- (void)setEdgeGesHandler:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (id)edgeGesture;
- (void)setEdgeGesture:(id)arg1;
- (void).cxx_destruct;
@end

