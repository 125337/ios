@interface TingFlutterPluginHelperCpp : UnitRCObjcBaseProxyClass <TingFlutterPluginHelper>
+ (void)setInstance:(id)arg1;
+ (id)getInstance;
- (void)setPluginAttached:(BOOL)arg1;
- (BOOL)getPluginAttached;
- (void)waitForPluginAttached:(long long)arg1 callback:(id /* block */)arg2;
@end

