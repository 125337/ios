@interface MMUINavigationBar : UINavigationBar
{
    BOOL _disable; // +0x8
    BOOL _customBlurEffectHidden; // +0x9
    id /* block */ _onLayoutSubviews; // +0x10
    UIView * _effectSubview; // +0x18
    long long _lastUpdateStyle; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configCustomBlurEffect;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (void)checkHookContentView;
- (void)setDisable:(BOOL)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)adjustContentViewToFitMargin;
- (void)adjustBlurEffect;
- (void)setCustomBlurEffectHidden:(BOOL)arg1;
- (id)findBlurEffectView:(id)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)setBarStyle:(long long)arg1;
- (void)setAlpha:(double)arg1;
- (id)getTopViewController;
- (BOOL)isTransparentNavBar;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTestInNavigationBar:(id)arg1 contentView:(id)arg2 point:(CGPoint)arg3 withEvent:(id)arg4 defaultHitView:(id /* block */)arg5;
- (id)descriptionForHitView:(id)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (id)navigationContentView;
- (BOOL)disable;
- (BOOL)customBlurEffectHidden;
- (id /* block */)onLayoutSubviews;
- (void)setOnLayoutSubviews:(id /* block */)arg1;
- (id)effectSubview;
- (void)setEffectSubview:(id)arg1;
- (long long)lastUpdateStyle;
- (void)setLastUpdateStyle:(long long)arg1;
- (void).cxx_destruct;
@end
