@interface WASpecializedAgentCapsuleZoomInteractor : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isInteracting; // +0x8
    BOOL _isDismissingTask; // +0x9
    BOOL _popThresholdFired; // +0xa
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x10
    long long _operation; // +0x18
    UIViewController * _fromVCWhenPop; // +0x20
    id /* block */ _capsuleFrameProvider; // +0x28
    id /* block */ _onSwipeBackFinished; // +0x30
    id /* block */ _onPopProgressReachedThreshold; // +0x38
    double _popProgressThreshold; // +0x40
    UIViewController<WASpecializedAgentCapsuleZoomInteractiveProvider> * _viewController; // +0x48
}
- (id)initWithOperation:(long long)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animatePush:(id)arg1;
- (void)animatePop:(id)arg1;
- (CGRect)capsuleRectInView:(id)arg1;
- (CGRect)fallbackCapsuleRectInView:(id)arg1;
- (double)safeStatusBarHeight;
- (double)safeNavBarHeight;
- (void)attachToViewController:(id)arg1;
- (void)handleEdgePan:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)interactiveTransition;
- (void)setInteractiveTransition:(id)arg1;
- (long long)operation;
- (void)setOperation:(long long)arg1;
- (id)fromVCWhenPop;
- (void)setFromVCWhenPop:(id)arg1;
- (id /* block */)capsuleFrameProvider;
- (void)setCapsuleFrameProvider:(id /* block */)arg1;
- (id /* block */)onSwipeBackFinished;
- (void)setOnSwipeBackFinished:(id /* block */)arg1;
- (id /* block */)onPopProgressReachedThreshold;
- (void)setOnPopProgressReachedThreshold:(id /* block */)arg1;
- (double)popProgressThreshold;
- (void)setPopProgressThreshold:(double)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)isDismissingTask;
- (void)setIsDismissingTask:(BOOL)arg1;
- (BOOL)popThresholdFired;
- (void)setPopThresholdFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
