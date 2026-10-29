@interface VoIPLocalScreenWindowView : VoIPMPUIv2ScreenWindowView <VoIPOrientationServiceExtension>
{
    unsigned long long _landscapeTransitionId; // +0x8
    BOOL _inZoomAnimation; // +0x10
    XImageViewRenderer * _landscapeRenderer; // +0x18
    UIView * _contentTopShadowView; // +0x20
    UIView * _contentBottomShadowView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)supportDynamicRatio;
- (void)setIsMainWindow:(BOOL)arg1;
- (void)layoutLandscapeRenderer;
- (unsigned long long)landscapeImageContentMode;
- (id)activeRenderer;
- (BOOL)isDisplayInMainWindow;
- (void)updateXimageViewSize:(BOOL)arg1;
- (void)_updateXimageViewSize:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_updateSmallWindowXimageViewSize:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_updateMainWindowXimageViewSize:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_finishCurrentAnimation;
- (void)_animateLandscapeViewWithFrame:(CGRect)arg1 completion:(id /* block */)arg2;
- (CGRect)landscapeModeFrame;
- (CGRect)fullScreenFrame;
- (CGRect)largeSquareFrame;
- (void)updateShadowView:(BOOL)arg1;
- (void)updateAspectRatioIfNeed;
- (void)layoutShadowView;
- (void)doLandscapeAnimationWithCompletion:(id /* block */)arg1;
- (BOOL)isDeviceOrientationLandscape;
- (void)voIPOrientationServiceDidChangeDeviceAngleDegree;
- (id)landscapeRenderer;
- (void)setLandscapeRenderer:(id)arg1;
- (id)contentTopShadowView;
- (void)setContentTopShadowView:(id)arg1;
- (id)contentBottomShadowView;
- (void)setContentBottomShadowView:(id)arg1;
- (BOOL)inZoomAnimation;
- (void)setInZoomAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
