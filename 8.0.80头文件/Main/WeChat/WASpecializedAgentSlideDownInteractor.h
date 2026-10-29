@interface WASpecializedAgentSlideDownInteractor : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _isInteracting; // +0x8
    BOOL _isDismissingTask; // +0x9
    UIPercentDrivenInteractiveTransition * _interactiveTransition; // +0x10
    long long _operation; // +0x18
    UIViewController * _fromVCWhenPop; // +0x20
    id /* block */ _onSwipeBackFinished; // +0x28
    UIViewController<WASpecializedAgentSlideDownInteractiveProvider> * _viewController; // +0x30
}
- (id)initWithOperation:(long long)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
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
- (id /* block */)onSwipeBackFinished;
- (void)setOnSwipeBackFinished:(id /* block */)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (BOOL)isDismissingTask;
- (void)setIsDismissingTask:(BOOL)arg1;
- (void).cxx_destruct;
@end
