@interface WSWebViewPlugin_NativeView : WSWebViewPluginBase
- (BOOL)insertNativeView:(id)arg1 viewIdentity:(id)arg2 withError:(id *)arg3;
- (BOOL)removeNativeView:(unsigned int)arg1 withError:(id *)arg2;
- (id)getNativeView:(unsigned int)arg1 withError:(id *)arg2;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
@end
