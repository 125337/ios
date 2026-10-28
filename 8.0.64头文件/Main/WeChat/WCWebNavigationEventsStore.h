@interface WCWebNavigationEventsStore : WCWebEventsStore
{
    WKWebView * _curWebView; // +0x30
    WKNavigation * _curNavigation; // +0x38
    NSURL * _curURLInNavigation; // +0x40
}
- (id)currentNavigation;
- (id)currentWebView;
- (id)currentURL;
- (id)currentFullUrlString;
- (void)webView:(id)arg1 navigationDidCommit:(id)arg2;
- (void)webView:(id)arg1 navigationDidFinish:(id)arg2;
- (void)webView:(id)arg1 navigationDidFailed:(id)arg2 error:(id)arg3;
- (void)webView:(id)arg1 navigationDidBridged:(id)arg2;
- (void)webView:(id)arg1 gotPermissionForURLString:(id)arg2;
- (void)webView:(id)arg1 didGetA8keyReqUrl:(id)arg2 fullUrl:(id)arg3;
- (id)curWebView;
- (void)setCurWebView:(id)arg1;
- (id)curNavigation;
- (void)setCurNavigation:(id)arg1;
- (id)curURLInNavigation;
- (void)setCurURLInNavigation:(id)arg1;
- (void).cxx_destruct;
@end
