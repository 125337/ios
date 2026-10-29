@interface WAJSEventHandler_openUrl : WAJSEventHandler_BaseEvent <MMWebViewDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)openUrl:(id)arg1 pageOrientation:(long long)arg2;
- (id)webVCDelegate;
- (void)webViewReturn:(id)arg1;
@end

