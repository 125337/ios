@interface WAWebViewPlugin_OpenVoice : WAWebViewPlugin_embedView
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)insertView:(id)arg1 callback:(id /* block */)arg2;
- (void)updateView:(id)arg1 callback:(id /* block */)arg2;
- (void)removeView:(id)arg1 callback:(id /* block */)arg2;
@end

