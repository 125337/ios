@interface WSWebViewPlugin_NavBarShadow : WSWebViewPluginBase
{
    BOOL _enableAddShadow; // +0x8
    UIView * _navShadowView; // +0x10
    double _animateDuration; // +0x18
}
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)showNavBarShadow:(id)arg1;
- (void)layoutNavShadowView;
- (double)shadowViewHeight;
- (void)manuallyHideNavShadowView;
- (void)hideNavBarShadow:(id)arg1;
- (id)navShadowView;
- (void)setNavShadowView:(id)arg1;
- (double)animateDuration;
- (void)setAnimateDuration:(double)arg1;
- (BOOL)enableAddShadow;
- (void)setEnableAddShadow:(BOOL)arg1;
- (void).cxx_destruct;
@end

