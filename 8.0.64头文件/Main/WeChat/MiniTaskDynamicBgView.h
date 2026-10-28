@interface MiniTaskDynamicBgView : UIView <WADynamicBackgroundGLViewControllerDelegate, WCMainWindowExt>
{
    BOOL _canUseDynamicBackground; // +0x8
    BOOL _isInDarkMode; // +0x9
    UIView * _backgroundView; // +0x10
    CAGradientLayer * _backgroundLayer; // +0x18
    WADynamicBackgroundGLViewController * _dynamicBGVC; // +0x20
    DynamicBackgroundSystemConfig * _manualBackgroundSystemConfig; // +0x28
    CADisplayLink * _displayLink; // +0x30
    double _manualColorRatio; // +0x38
    UIView * _backgroundCoverView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)buildDynamicBackground;
- (void)buildBackgroundLayer;
- (void)buildGLLayer;
- (void)buildManualBackground;
- (void)buildManualBackgroundSystem;
- (void)buildManualBackgroundDisplayLink;
- (void)layoutSubviews;
- (void)showDynamicBgView;
- (void)pauseDynamicBgView;
- (void)updateBackgroundColorWithColor1:(_GLKVector4)arg1 color2:(_GLKVector4)arg2;
- (void)backgroundDisplayLink:(id)arg1;
- (_GLKVector4)getBGColorFromStartConfig:(id)arg1 endConfig:(id)arg2 bgIndex:(unsigned int)arg3 portion:(double)arg4;
- (_GLKVector4)mixColorWithA:(_GLKVector4)arg1 b:(_GLKVector4)arg2 portion:(double)arg3;
- (void)detectDarkMode;
- (void)mm_onColorAppearanceDidChange;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundLayer;
- (void)setBackgroundLayer:(id)arg1;
- (id)dynamicBGVC;
- (void)setDynamicBGVC:(id)arg1;
- (id)manualBackgroundSystemConfig;
- (void)setManualBackgroundSystemConfig:(id)arg1;
- (BOOL)canUseDynamicBackground;
- (void)setCanUseDynamicBackground:(BOOL)arg1;
- (id)displayLink;
- (void)setDisplayLink:(id)arg1;
- (double)manualColorRatio;
- (void)setManualColorRatio:(double)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (id)backgroundCoverView;
- (void)setBackgroundCoverView:(id)arg1;
- (void).cxx_destruct;
@end
