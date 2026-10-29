@interface UIColor (WCColorExt)
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)colorInLightMode:(id)arg1 DarkMode:(id)arg2;
- (id)colorInLightMode;
- (id)colorInDarkMode;
- (BOOL)isDynamicColor;
- (id)resolvedColorInCurrentStyle;
- (id)colorDescription;
@end

