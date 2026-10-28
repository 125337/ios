@interface WSTemplateLogicController : NSObject <WSTemplateBaseJSHandlerDelegate>
{
    BOOL _shouldEncodeURL; // +0x8
    WKWebView<YYWebViewInterface> * _webView; // +0x10
    WSTemplateBaseJSHandler * _jsHandler; // +0x18
    WSTemplateJSLogicImpl * _jsLogicImpl; // +0x20
    NSString * _templatePath; // +0x28
    NSDictionary * _oriUrlParams; // +0x30
}
- (void)loadTemplateWithParh:(id)arg1 urlParams:(id)arg2 jsHandler:(id)arg3;
- (id)webView;
- (void)initWebView;
- (BOOL)loadH5ForWebView;
- (void)sendEventToJSBridge:(id)arg1 params:(id)arg2;
- (void)ackWithCallBackID:(id)arg1 withParams:(id)arg2;
- (void)ackWithCallBackID:(id)arg1 errorMsg:(id)arg2;
- (void)setWebView:(id)arg1;
- (id)jsHandler;
- (void)setJsHandler:(id)arg1;
- (id)jsLogicImpl;
- (void)setJsLogicImpl:(id)arg1;
- (BOOL)shouldEncodeURL;
- (void)setShouldEncodeURL:(BOOL)arg1;
- (id)templatePath;
- (void)setTemplatePath:(id)arg1;
- (id)oriUrlParams;
- (void)setOriUrlParams:(id)arg1;
- (void).cxx_destruct;
@end
