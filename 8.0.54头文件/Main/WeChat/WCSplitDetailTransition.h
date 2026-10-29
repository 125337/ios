@interface WCSplitDetailTransition : UIPercentDrivenInteractiveTransition <WCSplitDetailPresentationControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    BOOL _forceFullScreen; // +0x8
    BOOL _animatedShow; // +0x9
    BOOL _animatedDismiss; // +0xa
    BOOL _isPresent; // +0xb
    id <WCSplitDetailTransitionDelegate> _delegate; // +0x10
    id <WCSplitBaseTransitionDelegate> _baseDelegate; // +0x18
    long long _showTransitionType; // +0x20
    double _primaryWidth; // +0x28
    WCSplitDetailPresentationController * _presentController; // +0x30
    WCSplitPropertyAnimator * _animator; // +0x38
    UIPanGestureRecognizer * _panGesture; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)updatePresentedFrame:(CGRect)arg1 displayMode:(long long)arg2;
- (void)setPrimaryWidth:(double)arg1;
- (void)setupInteractiveGesture:(id)arg1;
- (void)updateContentLayout;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)setupAnimator:(id)arg1;
- (void)setupShowAnimation:(id)arg1;
- (void)setupDismissAnimation:(id)arg1;
- (long long)currTransitionType;
- (BOOL)isAnimateEnable;
- (void)onPresentingBeginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onPresentingEndAppearance;
- (void)onDetailViewControllerWillChangeMode:(BOOL)arg1;
- (void)onDetailViewControllerDidChangeMode:(BOOL)arg1;
- (void)onDetailViewControllerDidDismissed;
- (BOOL)isForceFullScreen;
- (BOOL)isInSplitMode;
- (BOOL)wantsInteractiveStart;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)baseDelegate;
- (void)setBaseDelegate:(id)arg1;
- (long long)showTransitionType;
- (void)setShowTransitionType:(long long)arg1;
- (double)primaryWidth;
- (BOOL)forceFullScreen;
- (void)setForceFullScreen:(BOOL)arg1;
- (BOOL)animatedShow;
- (void)setAnimatedShow:(BOOL)arg1;
- (BOOL)animatedDismiss;
- (void)setAnimatedDismiss:(BOOL)arg1;
- (id)presentController;
- (void)setPresentController:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (void).cxx_destruct;
@end

