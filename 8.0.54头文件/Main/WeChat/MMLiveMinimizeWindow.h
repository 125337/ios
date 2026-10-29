@interface MMLiveMinimizeWindow : MMUIWindow <MMLiveMinimizeViewControllerDelegate>
{
    id <MMLiveMinimizeWindowDelegate> _liveMinimizeWindowDelegate; // +0x8
    SequenceAnimationObject * _animationObject; // +0x10
    SequenceAnimationObject * _animationObjectForAlpha; // +0x18
    MMLiveMinimizeViewController * _viewController; // +0x20
    CGRect _originMoveViewRect; // +0x28
}
- (id)initWithLiveView:(id)arg1;
- (CGRect)vaildFrame;
- (void)updateLiveView:(id)arg1;
- (void)setBackImage:(id)arg1;
- (void)restoreMoveViewOriginRect;
- (void)hideMinimizeWindowWithBackImage:(id)arg1 completion:(id /* block */)arg2;
- (void)showMinimizeWindowWithBackImage:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)makeKeyWindow;
- (CGRect)fullScreenRect;
- (void)onMMLiveMinimizeViewControllerTap;
- (long long)onMMLiveMinimizeViewControllerRequestPreviousOrientation;
- (BOOL)shouldHandleStatusBarAppearance;
- (id)liveMinimizeWindowDelegate;
- (void)setLiveMinimizeWindowDelegate:(id)arg1;
- (id)animationObject;
- (void)setAnimationObject:(id)arg1;
- (id)animationObjectForAlpha;
- (void)setAnimationObjectForAlpha:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (CGRect)originMoveViewRect;
- (void)setOriginMoveViewRect:(CGRect)arg1;
- (void).cxx_destruct;
@end

