@interface WASystemCenterHideAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    UIViewController * animatedTransitionRespondViewController; // +0x10
    WAWebViewController * _currentWebviewController; // +0x18
    CGRect _simulatedNativeAnimationScreenRect; // +0x20
}
- (id)initWithCurrentViewController:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)currentWebviewController;
- (void)setCurrentWebviewController:(id)arg1;
- (CGRect)simulatedNativeAnimationScreenRect;
- (void)setSimulatedNativeAnimationScreenRect:(CGRect)arg1;
- (void).cxx_destruct;
@end
