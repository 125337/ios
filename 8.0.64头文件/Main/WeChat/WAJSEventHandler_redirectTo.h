@interface WAJSEventHandler_redirectTo : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)redirectToURL:(id)arg1 withAppID:(id)arg2 webView:(id)arg3;
- (BOOL)isRedirectToTabWithURL:(id)arg1;
@end
