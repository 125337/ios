@interface WCWebNavigationEventActionContext : MMObject
{
    WebViewJSLogicImpl * _webJsImpl; // +0x8
    WCWebNavigationEventsStore * _webEventsStore; // +0x10
    MMWebViewController * _webViewController; // +0x18
    NSDictionary * _jsInitInfo; // +0x20
}
- (id)webJsImpl;
- (void)setWebJsImpl:(id)arg1;
- (id)webEventsStore;
- (void)setWebEventsStore:(id)arg1;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)jsInitInfo;
- (void)setJsInitInfo:(id)arg1;
- (void).cxx_destruct;
@end

