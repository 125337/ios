@interface UIView (DarkMode)
- (void)setLayerBorderColor:(id)arg1;
- (void)setLayerShadowColor:(id)arg1;
- (void)setLayerBackgroundColor:(id)arg1;
- (void)setLayerBorderWidth:(double)arg1;
- (void)performAtCurrentTraitCollection:(id /* block */)arg1;
- (void)addDarkModeObserver:(id /* block */)arg1;
- (void)addDarkModeObserver:(id /* block */)arg1 fireImmediately:(BOOL)arg2;
- (void)addDarkModeObserver:(id /* block */)arg1 forKey:(id)arg2 fireImmediately:(BOOL)arg3;
- (void)addDarkModeObserver:(id /* block */)arg1 forKey:(id)arg2;
- (void)removeDarkModeObserverForKey:(id)arg1;
- (void)removeDarkModeObserver;
- (void)fireDarkModeObserverIfExist:(id)arg1;
- (long long)findOverrideStyleFromResponders;
@end
