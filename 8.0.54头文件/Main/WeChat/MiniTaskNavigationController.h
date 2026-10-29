@interface MiniTaskNavigationController : MMWebNavigationController <MiniTaskEdgeGestureHandlerDelegate, UIViewControllerTransitioningDelegate, MiniTaskTransitionAnimationDelegate>
{
    BOOL _shouldAutoRotate; // +0x8
    MiniTaskTransitionContext * _transitionContext; // +0x10
    MultiTaskItemPageBrowseInfo * _pageBrowseInfo; // +0x18
    MultiTaskPageActionInfo * _pageActionInfo; // +0x20
    MiniTaskTransitionHelper * _animationLogic; // +0x28
    MiniTaskNavEdgeGestureHandler * _leftEdgeGestureHandler; // +0x30
    MiniTaskNavEdgeGestureHandler * _rightEdgeGestureHandler; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)setRootViewController:(id)arg1;
- (id)leftEdgePanGestureRecognizer;
- (id)rightEdgePanGestureRecognizer;
- (void)setupNaviGestureHandlers;
- (void)setupLeftScreenEdgeGestureHandler;
- (void)setupRightScreenEdgeGestureHandler;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)didBecomeActive;
- (void)willResignActive;
- (BOOL)shouldAutorotate;
- (BOOL)shouldMiniInteractiveTransitionBegin:(id)arg1;
- (void)onMiniInteractiveTransitionBegin:(id)arg1;
- (void)onMiniInteractiveTransitionWillEnd:(id)arg1 isComplete:(BOOL)arg2;
- (void)onMiniInteractiveTransitionDidEnd:(id)arg1 isComplete:(BOOL)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (void)onTransitionEnd:(id)arg1 isComplete:(BOOL)arg2 isInteracting:(BOOL)arg3;
- (id)transitionContext;
- (void)setTransitionContext:(id)arg1;
- (id)pageBrowseInfo;
- (void)setPageBrowseInfo:(id)arg1;
- (id)pageActionInfo;
- (void)setPageActionInfo:(id)arg1;
- (id)animationLogic;
- (void)setAnimationLogic:(id)arg1;
- (id)leftEdgeGestureHandler;
- (void)setLeftEdgeGestureHandler:(id)arg1;
- (id)rightEdgeGestureHandler;
- (void)setRightEdgeGestureHandler:(id)arg1;
- (BOOL)shouldAutoRotate;
- (void)setShouldAutoRotate:(BOOL)arg1;
- (void).cxx_destruct;
@end

