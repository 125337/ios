@interface WASplitDetailOverlayAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isPresenting; // +0x8
    BOOL _isInteracting; // +0x9
    UIViewController * animatedTransitionRespondViewController; // +0x10
    WAWebViewController * _currentWebviewController; // +0x18
    long long _orientationToRestore; // +0x20
}
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)animatePresentation:(id)arg1;
- (void)animateDismissal:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isPresenting;
- (void)setIsPresenting:(BOOL)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)currentWebviewController;
- (void)setCurrentWebviewController:(id)arg1;
- (long long)orientationToRestore;
- (void)setOrientationToRestore:(long long)arg1;
- (void).cxx_destruct;
@end
