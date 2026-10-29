@interface YYWKGameSchemeHandler : NSObject <WKURLSchemeHandler, GameURLSessionWrapperDelegate>
{
    BOOL _isGameCenterScene; // +0x8
    NSLock * _networkLock; // +0x10
    YYWKGameWebView * _webview; // +0x18
    YYWKGamePkgCachesStastics * _pkgStastics; // +0x20
    GameURLSessionWrapper * _urlSessionWrapper; // +0x28
    WKHTTPCookieStore * _wkCookieStore; // +0x30
    NSMutableDictionary * _md5ToCertifacateDict; // +0x38
}
- (id)init;
- (void)markRequestBegin:(id)arg1 webView:(id)arg2;
- (BOOL)handleIntercept:(id)arg1 urlSchemeTask:(id)arg2;
- (id)webViewCookieStore;
- (id)htmlInjectStrBeforeHead;
- (void)didReceiveData:(id)arg1 response:(id)arg2 urlSchemeTask:(id)arg3;
- (void)innerDidReceiveData:(id)arg1 response:(id)arg2 urlSchemeTask:(id)arg3;
- (void)webView:(id)arg1 startURLSchemeTask:(id)arg2;
- (void)webView:(id)arg1 stopURLSchemeTask:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)networkLock;
- (void)setNetworkLock:(id)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)pkgStastics;
- (void)setPkgStastics:(id)arg1;
- (id)urlSessionWrapper;
- (void)setUrlSessionWrapper:(id)arg1;
- (id)wkCookieStore;
- (void)setWkCookieStore:(id)arg1;
- (BOOL)isGameCenterScene;
- (void)setIsGameCenterScene:(BOOL)arg1;
- (id)md5ToCertifacateDict;
- (void)setMd5ToCertifacateDict:(id)arg1;
- (void).cxx_destruct;
@end

