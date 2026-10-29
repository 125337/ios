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
    id <WCSplitDetailDismissTransitionProviding> _bizDismissProvider; // +0x30
    WCSplitDetailPresentationController * _presentController; // +0x38
    WCSplitPropertyAnimator * _animator; // +0x40
    UIPanGestureRecognizer * _panGesture; // +0x48
    UIView * _pushBackdropView; // +0x50
    unsigned long long _dismissTransitionOwner; // +0x58
    id <UIViewControllerAnimatedTransitioning> _bizDismissAnimator; // +0x60
    id <UIViewControllerInteractiveTransitioning> _bizDismissInteractor; // +0x68
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
- (id)bizDismissGestureViews;
- (BOOL)isBizDismissGestureRecognizer:(id)arg1;
- (id)bizDismissGestureRecognizer;
- (id)bizDismissDelegate;
- (void)resetDismissTransitionSession;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)interruptibleAnimatorForTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)addPushAnimationInContainerView:(id)arg1 foregroundView:(id)arg2 targetFrame:(CGRect)arg3 backgroundSnapshot:(id)arg4 backgroundWindowRect:(CGRect)arg5 sourceWindow:(id)arg6 showing:(BOOL)arg7;
- (void)setupAnimator:(id)arg1;
- (void)setupShowAnimation:(id)arg1 backgroundSnapshot:(id)arg2 backgroundWindowRect:(CGRect)arg3 sourceWindow:(id)arg4;
- (void)setupDismissAnimation:(id)arg1 backgroundSnapshot:(id)arg2 backgroundWindowRect:(CGRect)arg3 sourceWindow:(id)arg4;
- (long long)currTransitionType;
- (BOOL)isAnimateEnable;
- (void)onPresentingBeginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (void)onPresentingEndAppearance;
- (void)onDetailViewControllerWillChangeMode:(BOOL)arg1;
- (void)onDetailViewControllerDidChangeMode:(BOOL)arg1;
- (void)onDetailViewControllerDismissalTransitionDidEnd:(BOOL)arg1;
- (void)onDetailViewControllerDidDismissed;
- (BOOL)isForceFullScreen;
- (BOOL)isInSplitMode;
- (BOOL)wantsInteractiveStart;
- (void)configurePushCompletionTimingForProgress:(double)arg1 finishing:(BOOL)arg2;
- (void)handlePanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
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
- (id)bizDismissProvider;
- (void)setBizDismissProvider:(id)arg1;
- (id)presentController;
- (void)setPresentController:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)isPresent;
- (void)setIsPresent:(BOOL)arg1;
- (id)pushBackdropView;
- (void)setPushBackdropView:(id)arg1;
- (unsigned long long)dismissTransitionOwner;
- (void)setDismissTransitionOwner:(unsigned long long)arg1;
- (id)bizDismissAnimator;
- (void)setBizDismissAnimator:(id)arg1;
- (id)bizDismissInteractor;
- (void)setBizDismissInteractor:(id)arg1;
- (void).cxx_destruct;
@end
