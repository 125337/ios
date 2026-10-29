@interface MMModalTransitionAnimator : UIPercentDrivenInteractiveTransition <UIViewControllerAnimatedTransitioning>
{
    BOOL _hidesShadowMask; // +0x8
    BOOL _isTransitionFromPanGesture; // +0x9
    BOOL _canceled; // +0xa
    unsigned long long _transitionType; // +0x10
    double _velocityThreshold; // +0x18
    id /* block */ _transitionComplete; // +0x20
    id /* block */ _transitionCancel; // +0x28
    id /* block */ _shouldInterceptInteractiveFinish; // +0x30
    UIPanGestureRecognizer * _panGesture; // +0x38
    unsigned long long _panGestureType; // +0x40
    CGRect _presentedFinianFrame; // +0x48
}
- (CGRect)finalFrameForPresentedView:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (BOOL)wantsInteractiveStart;
- (void)setPanGesture:(id)arg1 forType:(unsigned long long)arg2;
- (void)handlePanGesture:(id)arg1;
- (unsigned long long)transitionType;
- (void)setTransitionType:(unsigned long long)arg1;
- (BOOL)hidesShadowMask;
- (void)setHidesShadowMask:(BOOL)arg1;
- (double)velocityThreshold;
- (void)setVelocityThreshold:(double)arg1;
- (CGRect)presentedFinianFrame;
- (void)setPresentedFinianFrame:(CGRect)arg1;
- (id /* block */)transitionComplete;
- (void)setTransitionComplete:(id /* block */)arg1;
- (id /* block */)transitionCancel;
- (void)setTransitionCancel:(id /* block */)arg1;
- (id /* block */)shouldInterceptInteractiveFinish;
- (void)setShouldInterceptInteractiveFinish:(id /* block */)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)isTransitionFromPanGesture;
- (void)setIsTransitionFromPanGesture:(BOOL)arg1;
- (BOOL)canceled;
- (void)setCanceled:(BOOL)arg1;
- (unsigned long long)panGestureType;
- (void)setPanGestureType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
