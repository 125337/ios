@interface MMWebViewUniversalLinkMinitorLogic : MMObject
{
    unsigned int _navigateActionMatchControlAction; // +0x8
    WKWebView * _webview; // +0x10
    NSString * _weAppAppId; // +0x18
    NSString * _nsLastWebViewNavigationSourceUrl; // +0x20
    NSString * _nsLastWebViewNavigationUrl; // +0x28
    unsigned long long _uiLastNavigationTimeStampInMs; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)onAllowWebViewNavigation:(id)arg1 sourceUrl:(id)arg2;
- (void)onRewindWebViewNavigation:(id)arg1 sourceUrl:(id)arg2;
- (void)onWebViewDidStartLoadAllowedNavigation:(id)arg1;
- (void)clearAllNavigationInfo;
- (void)onEnterBackground;
- (void)__clearAllNavigationInfo;
- (void)reportUniversalLinkActionWithReportKey:(unsigned int)arg1;
- (void)__reportUniversalLinkNavigationKVStatWhenNavigationWork:(BOOL)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)weAppAppId;
- (void)setWeAppAppId:(id)arg1;
- (id)nsLastWebViewNavigationSourceUrl;
- (void)setNsLastWebViewNavigationSourceUrl:(id)arg1;
- (id)nsLastWebViewNavigationUrl;
- (void)setNsLastWebViewNavigationUrl:(id)arg1;
- (unsigned long long)uiLastNavigationTimeStampInMs;
- (void)setUiLastNavigationTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)navigateActionMatchControlAction;
- (void)setNavigateActionMatchControlAction:(unsigned int)arg1;
- (void).cxx_destruct;
@end

