@interface MpWebViewPreloadResult : NSObject
{
    BOOL _isPageFinished; // +0x8
    BOOL _isWaitingResource; // +0x9
    MpWKWebView * _webView; // +0x10
    long long _loadSource; // +0x18
    MpSchemeHandlerProxy * _schemeProxy; // +0x20
    NSDictionary * _jsChannelProxies; // +0x28
    id <MpWebViewEntryHandle> _handle; // +0x30
}
- (id)webView;
- (void)setWebView:(id)arg1;
- (BOOL)isPageFinished;
- (void)setIsPageFinished:(BOOL)arg1;
- (BOOL)isWaitingResource;
- (void)setIsWaitingResource:(BOOL)arg1;
- (long long)loadSource;
- (void)setLoadSource:(long long)arg1;
- (id)schemeProxy;
- (void)setSchemeProxy:(id)arg1;
- (id)jsChannelProxies;
- (void)setJsChannelProxies:(id)arg1;
- (id)handle;
- (void)setHandle:(id)arg1;
- (void).cxx_destruct;
@end
