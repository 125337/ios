@interface WAJSEventHandler_switchTab : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)switchTabWithURL:(id)arg1 pagePath:(id)arg2 currentWebView:(id)arg3;
- (void)popAllAndCreateTabWebViewWithURL:(id)arg1 currentWebView:(id)arg2;
- (void)switchInMainTabWebView:(id)arg1 pagePath:(id)arg2 currentWebView:(id)arg3;
- (void)directSwitchInMainTabWebView:(id)arg1 withPagePath:(id)arg2;
- (void)popChildrenAndSwitchInMainTabWebView:(id)arg1 withPagePath:(id)arg2;
- (void)newPopChildrenAndSwitchInMainTabWebView:(id)arg1 withPagePath:(id)arg2;
@end

