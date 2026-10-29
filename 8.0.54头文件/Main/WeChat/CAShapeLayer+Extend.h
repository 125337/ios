@interface CAShapeLayer (Extend)
- (id)init;
- (void)addDarkModeObserverForKey:(id)arg1;
- (void)applyUiColors:(BOOL)arg1;
- (CGColor *)getCGColorFrom:(id)arg1 forDarkMode:(BOOL)arg2;
- (void)setUiFillColor:(id)arg1;
- (void)setUiStrokeColor:(id)arg1;
- (id)uiFillColor;
- (id)uiStrokeColor;
- (void)setColor:(id)arg1 forKey:(id)arg2;
- (id)colorForKey:(id)arg1;
- (void)coordinateUIViewAnimationWithPath:(id)arg1;
@end

