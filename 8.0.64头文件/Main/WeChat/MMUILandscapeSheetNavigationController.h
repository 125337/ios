@interface MMUILandscapeSheetNavigationController : MMUINavigationController
{
    BOOL _wasPortrait; // +0x8
    CAShapeLayer * _maskLayer; // +0x10
}
+ (double)navBarBottomtInLandscape;
- (id)init;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (void)viewDidLayoutSubviews;
- (void)reloadIfNeeded;
- (void)doReload;
- (void)toggleNavExtraSpaceHidden:(BOOL)arg1;
- (BOOL)isPortrait;
- (void)setupMaskLayerIfNeeded;
- (void)updateSupportedOrientationMaskInNavStack:(unsigned long long)arg1;
- (void)PushViewController:(id)arg1 animated:(BOOL)arg2 isForceFullScreen:(BOOL)arg3 isAutoRotatePortrait:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (BOOL)wasPortrait;
- (void)setWasPortrait:(BOOL)arg1;
- (void).cxx_destruct;
@end
