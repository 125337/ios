@interface WASystemCenterShowAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    CGRect _simulatedNativeAnimationScreenRect; // +0x8
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (CGRect)simulatedNativeAnimationScreenRect;
- (void)setSimulatedNativeAnimationScreenRect:(CGRect)arg1;
@end

