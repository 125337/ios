@interface MMLiteAppViewControllerTransitionMgr : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>
{
    unsigned long long _transitionType; // +0x8
    double _delayTime; // +0x10
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (unsigned long long)transitionType;
- (void)setTransitionType:(unsigned long long)arg1;
- (double)delayTime;
- (void)setDelayTime:(double)arg1;
@end

