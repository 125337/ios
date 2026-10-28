@interface MMWebViewPlugin_NativeView : MMWebViewPluginBase
- (BOOL)insertNativeView:(id)arg1 viewIdentity:(id)arg2;
- (id)getNativeView:(unsigned int)arg1;
- (BOOL)removeNativeView:(unsigned int)arg1;
- (id)getWebView;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
@end
