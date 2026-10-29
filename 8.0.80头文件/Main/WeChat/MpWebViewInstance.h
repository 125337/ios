@interface MpWebViewInstance : NSObject <FlutterPlatformView, WKNavigationDelegate, WKURLSchemeHandler, WKScriptMessageHandler>
{
    long long _viewId; // +0x8
    MpWKWebView * _webView; // +0x10
    MpWebViewFlutterApi * _flutterApi; // +0x18
    NSMutableDictionary * _pendingTasks; // +0x20
    NSMutableSet * _cancelledRequestIds; // +0x28
    NSMutableArray * _jsChannelNames; // +0x30
}
- (id)initWithViewId:(long long)arg1 customSchemes:(id)arg2 flutterApi:(id)arg3;
- (id)initWithViewId:(long long)arg1 preloadedWebView:(id)arg2 customSchemes:(id)arg3 schemeProxy:(id)arg4 jsChannelProxies:(id)arg5 flutterApi:(id)arg6;
- (id)viewIdNumber;
- (id)view;
- (void)addJavaScriptChannel:(id)arg1;
- (void)respondToSchemeRequest:(id)arg1 statusCode:(long long)arg2 data:(id)arg3 mimeType:(id)arg4;
- (void)cancelAllPendingTasks;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (long long)viewId;
- (void)setViewId:(long long)arg1;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id)pendingTasks;
- (void)setPendingTasks:(id)arg1;
- (id)cancelledRequestIds;
- (void)setCancelledRequestIds:(id)arg1;
- (id)jsChannelNames;
- (void)setJsChannelNames:(id)arg1;
- (void).cxx_destruct;
@end
