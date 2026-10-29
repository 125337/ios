@interface MJShootComposingAdaptiveBlurView : MMUIView
{
    BOOL _isLightStyle; // +0x8
    UIColor * _darkStyleTintColor; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 darkStyleTintColor:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)updateLightStyle:(BOOL)arg1;
- (void)_updateLightStyle:(BOOL)arg1;
- (BOOL)isLightStyle;
- (void)setIsLightStyle:(BOOL)arg1;
- (id)darkStyleTintColor;
- (void)setDarkStyleTintColor:(id)arg1;
- (void).cxx_destruct;
@end
