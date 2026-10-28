@interface WCAdPlatformViewFormWebView : WCAdPlatformViewBase <YYWebViewDelegate, WCAdFormWebViewJSLogicDelegate, UIScrollViewDelegate>
{
    BOOL _hiddenBeforeLoad; // +0x8
    BOOL _bgTransparent; // +0x9
    YYWKWebView * _webView; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    WCAdFormWebViewJSLogic * _jsLogic; // +0x20
    NSString * _url; // +0x28
    NSString * _canvasKey; // +0x30
    NSString * _componentId; // +0x38
    NSString * _qrExtInfo; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 viewIdentifier:(long long)arg2 arguments:(id)arg3 binaryMessenger:(id)arg4 methodChannel:(id)arg5;
- (id)view;
- (void)dealloc;
- (id)getPreInjectScriptStr;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 navigation:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)publishEvent:(id)arg1 params:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleJsEvent:(id)arg1 params:(id)arg2 needCallback:(BOOL)arg3 result:(id /* block */)arg4;
- (id)webView;
- (void)setWebView:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)jsLogic;
- (void)setJsLogic:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)canvasKey;
- (void)setCanvasKey:(id)arg1;
- (id)componentId;
- (void)setComponentId:(id)arg1;
- (id)qrExtInfo;
- (void)setQrExtInfo:(id)arg1;
- (BOOL)hiddenBeforeLoad;
- (void)setHiddenBeforeLoad:(BOOL)arg1;
- (BOOL)bgTransparent;
- (void)setBgTransparent:(BOOL)arg1;
- (void).cxx_destruct;
@end
