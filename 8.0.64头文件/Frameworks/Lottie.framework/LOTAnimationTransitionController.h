@interface LOTAnimationTransitionController : NSObject <UIViewControllerAnimatedTransitioning>
{
    LOTAnimationView * transitionAnimationView_; // +0x8
    NSString * fromLayerName_; // +0x10
    NSString * toLayerName_; // +0x18
    NSBundle * inBundle_; // +0x20
    BOOL _applyTransform; // +0x28
}
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(BOOL)arg4;
- (id)initWithAnimationNamed:(id)arg1 fromLayerNamed:(id)arg2 toLayerNamed:(id)arg3 applyAnimationTransform:(BOOL)arg4 inBundle:(id)arg5;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void).cxx_destruct;
@end
