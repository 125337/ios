@interface WAJSEventHandler_navigateTo : WAJSEventHandler_BaseEvent
{
    NSDictionary * _singlePageData; // +0x8
    NSString * _routeId; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEvent:(id)arg1;
- (void)navigateToURL:(id)arg1 withAppID:(id)arg2 webView:(id)arg3;
- (BOOL)isNavigateToTabWithURL:(id)arg1;
- (id)singlePageData;
- (void)setSinglePageData:(id)arg1;
- (id)routeId;
- (void)setRouteId:(id)arg1;
- (void).cxx_destruct;
@end
