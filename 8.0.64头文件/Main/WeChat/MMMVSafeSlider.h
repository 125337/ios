@interface MMMVSafeSlider : WCNetworkMediaSlider
- (id)initWithFrame:(CGRect)arg1;
- (void)safeSetMinimumValue:(float)arg1 defValue:(float)arg2;
- (void)safeSetMaximumValue:(float)arg1 defValue:(float)arg2;
- (void)safeSetValue:(float)arg1 defValue:(float)arg2;
- (void)safeSetValue:(float)arg1 defValue:(float)arg2 animated:(BOOL)arg3;
@end
