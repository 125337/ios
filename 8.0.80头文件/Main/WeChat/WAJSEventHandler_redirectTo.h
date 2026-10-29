@interface WAJSEventHandler_redirectTo : WAJSEventHandler_BaseEvent
{
    NSString * _routeId; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)redirectToURL:(id)arg1 withAppID:(id)arg2 webView:(id)arg3;
- (BOOL)isRedirectToTabWithURL:(id)arg1;
- (id)routeId;
- (void)setRouteId:(id)arg1;
- (void).cxx_destruct;
@end
