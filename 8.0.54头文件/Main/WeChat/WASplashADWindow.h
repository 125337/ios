@interface WASplashADWindow : MMUIWindow <CAAnimationDelegate, WAAppTansitionControllerDelegate>
{
    WASplashADViewController * _adRootViewController; // +0x8
    UIViewController * _firstScreenViewController; // +0x10
    WAAppTansitionController * _transitionController; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showRootViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)closeRootViewControllerAnimated:(BOOL)arg1 circleCenter:(CGPoint)arg2 finalHeihgt:(double)arg3 completion:(id /* block */)arg4;
- (void)doCircleRevealAnimationWith:(double)arg1 view:(id)arg2 cirleCenter:(CGPoint)arg3 finalHeihgt:(double)arg4 completion:(id /* block */)arg5;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)adRootViewController;
- (id)firstScreenViewController;
- (id)transitionController;
- (BOOL)presentationControllerNeedZoom;
- (BOOL)presentationControllerNeedMask;
- (BOOL)dismissControllerNeedZoom;
- (BOOL)dismissControllerNeedMask;
- (void)setAdRootViewController:(id)arg1;
- (void)setFirstScreenViewController:(id)arg1;
- (void)setTransitionController:(id)arg1;
- (void).cxx_destruct;
@end

