@interface WAAppDismissAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _maskEnable; // +0x9
    BOOL _needZoom; // +0xa
    BOOL _forbidRoundCorner; // +0xb
    UIViewController * animatedTransitionRespondViewController; // +0x10
    WAWebViewController * _currentWebviewController; // +0x18
    long long _orientationToRestore; // +0x20
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
- (BOOL)maskEnable;
- (void)setMaskEnable:(BOOL)arg1;
- (BOOL)needZoom;
- (void)setNeedZoom:(BOOL)arg1;
- (long long)orientationToRestore;
- (void)setOrientationToRestore:(long long)arg1;
- (BOOL)forbidRoundCorner;
- (void)setForbidRoundCorner:(BOOL)arg1;
- (void).cxx_destruct;
@end

