@interface MMLiveMinimizationInteractiveLogic : NSObject <MinimizeNewTransitionControllerDelegate>
{
    BOOL _hasActivateMinimizeArea; // +0x8
    id <MMLiveMinimizationInteractiveDelegate> _minimizationInteractiveDelegate; // +0x10
    id <MMLiveCustomTransitionDelegate> _liveCustomTransitionDelegate; // +0x18
    MinimizeNewTransitionController * _transitionController; // +0x20
    MMLiveCustomTransition * _customTransition; // +0x28
    UIView * _minimizeContainerView; // +0x30
}
+ (id)minimizeInteractiveLogic;
- (id)init;
- (id)getDismissLeftToRightAnimationControllerForDismissedController:(id)arg1;
- (id)getDismissLeftToRightInteractionControllerForDismissal:(id)arg1;
- (void)setAttachViewController:(id)arg1;
- (id)attachViewController;
- (id)edgeGestureRecognizer;
- (id)customTransition;
- (BOOL)isSupportScreenEdgeSwipeFromLeftToRight:(id)arg1;
- (id)getPresentingViewControllerClassName:(id)arg1;
- (BOOL)shouldBeginMinimizeCircleInteraction;
- (BOOL)useNewMinimizeTransition:(id)arg1 withTransitionType:(unsigned int)arg2;
- (id)getMinimizationTransitionContext;
- (void)onMinimizeTransitionBegin:(unsigned int)arg1;
- (void)onMinimizeTransitionWillEnd:(unsigned int)arg1 isComplete:(BOOL)arg2;
- (void)onMinimizeAnimationCompleteDone;
- (void)onMinimizeAnimationRecoverDone;
- (void)onMinimizeTransitionWillEndWithCompleted:(BOOL)arg1;
- (void)onMinimizeTransitionDidEndWithCompleted:(BOOL)arg1;
- (id)minimizationInteractiveDelegate;
- (void)setMinimizationInteractiveDelegate:(id)arg1;
- (id)liveCustomTransitionDelegate;
- (void)setLiveCustomTransitionDelegate:(id)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (void)setCustomTransition:(id)arg1;
- (id)minimizeContainerView;
- (void)setMinimizeContainerView:(id)arg1;
- (void).cxx_destruct;
@end

