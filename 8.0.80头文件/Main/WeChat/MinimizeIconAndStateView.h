@interface MinimizeIconAndStateView : UIView
{
    NSArray * _icons; // +0x8
    UIView * _colorMaskView; // +0x10
}
+ (id)getIconMaskPath:(double)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setMaskColor:(id)arg1;
- (void)setMaskColorAlpha:(double)arg1;
- (void)makeSureColorMaskViewInited;
- (void)setRoundViewMaskPath:(double)arg1 RoundView:(id)arg2;
- (void)updateLoopIconList:(id)arg1;
- (void)startSwitchingAnimation;
- (id)icons;
- (void)setIcons:(id)arg1;
- (id)colorMaskView;
- (void)setColorMaskView:(id)arg1;
- (void).cxx_destruct;
@end
