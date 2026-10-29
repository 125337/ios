@interface WCFinderFullScreenAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _enableProfileSlideTransitionOptimization; // +0x8
    unsigned int _transitioningType; // +0xc
    UIPercentDrivenInteractiveTransition * _interactive; // +0x10
    UIViewController * _animatedTransitionRespondViewController; // +0x18
    id /* block */ _transitioningCompletion; // +0x20
    UIPanGestureRecognizer * _gesture; // +0x28
    long long _profileSlidePushTriggerVelocity; // +0x30
    long long _profileSlidePushTriggerPositionStyle; // +0x38
}
+ (id)animatorWithGesture:(id)arg1 transitioningType:(unsigned int)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (double)__progressWithSender:(id)arg1;
- (double)__velocityWithSender:(id)arg1;
- (id)interactive;
- (void)setInteractive:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (id /* block */)transitioningCompletion;
- (void)setTransitioningCompletion:(id /* block */)arg1;
- (unsigned int)transitioningType;
- (void)setTransitioningType:(unsigned int)arg1;
- (id)gesture;
- (void)setGesture:(id)arg1;
- (BOOL)enableProfileSlideTransitionOptimization;
- (void)setEnableProfileSlideTransitionOptimization:(BOOL)arg1;
- (long long)profileSlidePushTriggerVelocity;
- (void)setProfileSlidePushTriggerVelocity:(long long)arg1;
- (long long)profileSlidePushTriggerPositionStyle;
- (void)setProfileSlidePushTriggerPositionStyle:(long long)arg1;
- (void).cxx_destruct;
@end
