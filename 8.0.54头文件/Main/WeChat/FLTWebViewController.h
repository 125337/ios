@interface FLTWebViewController : NSObject <FlutterPlatformView, WKUIDelegate>
{
    FLTWKWebView * _webView; // +0x8
    long long _viewId; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    NSString * _currentUrl; // +0x20
    NSMutableSet * _javaScriptChannelNames; // +0x28
    FLTWKNavigationDelegate * _navigationDelegate; // +0x30
    FLTWKProgressionDelegate * _progressionDelegate; // +0x38
}
+ (BOOL)isValidStringArgument:(id)arg1 withErrorMessage:(id *)arg2;
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4;
- (void)dealloc;
- (id)view;
- (void)onMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)onUpdateSettings:(id)arg1 result:(id /* block */)arg2;
- (void)onLoadFile:(id)arg1 result:(id /* block */)arg2;
- (void)onLoadFlutterAsset:(id)arg1 result:(id /* block */)arg2;
- (void)onLoadHtmlString:(id)arg1 result:(id /* block */)arg2;
- (void)onLoadUrl:(id)arg1 result:(id /* block */)arg2;
- (void)onLoadRequest:(id)arg1 result:(id /* block */)arg2;
- (void)onCanGoBack:(id)arg1 result:(id /* block */)arg2;
- (void)onCanGoForward:(id)arg1 result:(id /* block */)arg2;
- (void)onGoBack:(id)arg1 result:(id /* block */)arg2;
- (void)onGoForward:(id)arg1 result:(id /* block */)arg2;
- (void)onReload:(id)arg1 result:(id /* block */)arg2;
- (void)onCurrentUrl:(id)arg1 result:(id /* block */)arg2;
- (void)onEvaluateJavaScript:(id)arg1 result:(id /* block */)arg2;
- (void)onRunJavaScript:(id)arg1 result:(id /* block */)arg2 sendReturnValue:(BOOL)arg3;
- (void)onAddJavaScriptChannels:(id)arg1 result:(id /* block */)arg2;
- (void)onRemoveJavaScriptChannels:(id)arg1 result:(id /* block */)arg2;
- (void)clearCache:(id /* block */)arg1;
- (void)onGetTitle:(id /* block */)arg1;
- (void)onScrollTo:(id)arg1 result:(id /* block */)arg2;
- (void)onScrollBy:(id)arg1 result:(id /* block */)arg2;
- (void)getScrollX:(id)arg1 result:(id /* block */)arg2;
- (void)getScrollY:(id)arg1 result:(id /* block */)arg2;
- (id)applySettings:(id)arg1;
- (void)applyConfigurationSettings:(id)arg1 toConfiguration:(id)arg2;
- (void)updateJsMode:(id)arg1;
- (void)updateAutoMediaPlaybackPolicy:(id)arg1 inConfiguration:(id)arg2;
- (id)buildNSURLRequest:(id)arg1;
- (void)registerJavaScriptChannels:(id)arg1 controller:(id)arg2;
- (void)updateUserAgent:(id)arg1;
- (id)webView:(id)arg1 createWebViewWithConfiguration:(id)arg2 forNavigationAction:(id)arg3 windowFeatures:(id)arg4;
- (id)webView;
- (void)setWebView:(id)arg1;
- (void).cxx_destruct;
@end

