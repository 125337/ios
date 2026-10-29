@interface UIView (WeAppZIndex)
- (BOOL)wa_notAdd2ScrollViewWhenChanged;
- (void)setWa_notAdd2ScrollViewWhenChanged:(BOOL)arg1;
- (unsigned int)wa_nativeContainerId;
- (void)setWa_nativeContainerId:(unsigned int)arg1;
- (long long)wa_nativeViewZIndex;
- (void)setWa_nativeViewZIndex:(long long)arg1;
- (void)wa_tryAdjustIndexOfCurrentView:(long long)arg1;
@end

