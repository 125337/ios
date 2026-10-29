@interface UIView (FinderInterfaceStyle)
+ (id)colorWithMMUserInterfaceStyle:(long long)arg1 color:(id)arg2;
+ (id)colorWithMMUserInterfaceStyle:(long long)arg1 lightColor:(id)arg2 darkColor:(id)arg3;
- (long long)finderMMUserInterfaceStyle;
- (void)setFinderMMUserInterfaceStyle:(long long)arg1;
- (void)configFinderUserInterfaceUpdateBlock:(id /* block */)arg1;
- (id)dynamicColorWithViewInterfaceStyle:(id)arg1;
- (id)dynamicColorWithViewInterfaceStyleInLight:(id)arg1 dark:(id)arg2;
@end
