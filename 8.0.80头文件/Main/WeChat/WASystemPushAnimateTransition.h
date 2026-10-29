@interface WASystemPushAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    BOOL _forbidShadow; // +0x8
    BOOL _animationComptible; // +0x9
}
- (id)initWithAnimationComptible;
- (BOOL)isPushAnimationUseNewImplementation;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (BOOL)forbidShadow;
- (void)setForbidShadow:(BOOL)arg1;
- (BOOL)animationComptible;
- (void)setAnimationComptible:(BOOL)arg1;
@end
