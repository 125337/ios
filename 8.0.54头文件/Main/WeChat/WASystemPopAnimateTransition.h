@interface WASystemPopAnimateTransition : NSObject <UIViewControllerAnimatedTransitioning, MMUIViewControllerTransitionInfo>
{
    BOOL _isInteracting; // +0x8
    BOOL _forbidInsertToVC; // +0x9
    BOOL _maskEnable; // +0xa
    BOOL _toVCOffsetEnable; // +0xb
    BOOL _forbidShadow; // +0xc
    UIViewController * animatedTransitionRespondViewController; // +0x10
    WAWebViewController * _currentWebviewController; // +0x18
}
- (id)initWithCurrentViewController:(id)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (id)animatedTransitionRespondViewController;
- (void)setAnimatedTransitionRespondViewController:(id)arg1;
- (BOOL)isInteracting;
- (void)setIsInteracting:(BOOL)arg1;
- (id)currentWebviewController;
- (void)setCurrentWebviewController:(id)arg1;
- (BOOL)forbidInsertToVC;
- (void)setForbidInsertToVC:(BOOL)arg1;
- (BOOL)maskEnable;
- (void)setMaskEnable:(BOOL)arg1;
- (BOOL)toVCOffsetEnable;
- (void)setToVCOffsetEnable:(BOOL)arg1;
- (BOOL)forbidShadow;
- (void)setForbidShadow:(BOOL)arg1;
- (void).cxx_destruct;
@end

