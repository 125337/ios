@interface MiniTaskPresentAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    MiniTaskAnimiatedTransitioningConfig * _config; // +0x8
}
- (id)initWithConfig:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

