@interface VoIPRemoteScreenWindowView : VoIPMPUIv2ScreenWindowView
{
    unsigned long long _landscapeTransitionId; // +0x8
    BOOL _inLandscapeTransition; // +0x10
    XImageViewRenderer * _landscapeRenderer; // +0x18
    unsigned long long _videoAspectAdaptationRenderPolicy; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setIsLandscapeModeOn:(BOOL)arg1;
- (void)layoutLandscapeRenderer;
- (void)setVideoAspectAdaptationRenderPolicy:(unsigned long long)arg1;
- (void)applyVideoAspectAdaptationRenderPolicy;
- (id)activeRenderer;
- (BOOL)isDisplayInMainWindow;
- (void)updateXimageViewSize:(BOOL)arg1;
- (void)_updateXimageViewSize:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_updateMainWindowXimageViewSize:(BOOL)arg1 completion:(id /* block */)arg2;
- (CGRect)landscapeModeFrame;
- (CGRect)fullScreenFrame;
- (void)doLandscapeAnimationWithCompletion:(id /* block */)arg1;
- (BOOL)isDeviceOrientationLandscape;
- (id)landscapeRenderer;
- (void)setLandscapeRenderer:(id)arg1;
- (BOOL)inLandscapeTransition;
- (void)setInLandscapeTransition:(BOOL)arg1;
- (unsigned long long)videoAspectAdaptationRenderPolicy;
- (void).cxx_destruct;
@end
