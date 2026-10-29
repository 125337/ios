@interface WAVConsoleWebLogicController : MMObject <WAVConsoleJSLogicImplDelegate, YYWebViewDelegate>
{
    BOOL _isWebviewFirstLoad; // +0x8
    unsigned int _htmlId; // +0xc
    unsigned int _requestID; // +0x10
    WAJSContextPlugin_vConsole * _plugin; // +0x18
    UIViewController * _viewController; // +0x20
    id <WAVConsoleWebLogicControllerDelegate> _delegate; // +0x28
    YYBaseWebView * _webView; // +0x30
    WAVConsoleJSLogicImpl * _jsLogicImpl; // +0x38
    NSURL * _oInitUrl; // +0x40
    long long _nHttpRspCode; // +0x48
    NSString * _nsLoadingUrl; // +0x50
    NSString * _appID; // +0x58
}
- (id)initWithUrl:(id)arg1 appID:(id)arg2 viewController:(id)arg3 delegate:(id)arg4 plugin:(id)arg5;
- (void)dealloc;
- (id)webView;
- (id)fetchPublicResLogic;
- (void)initWebJSLogic;
- (void)initWebView;
- (void)notifyToJSBridgeVisibilityChanged:(BOOL)arg1;
- (void)doInitialize;
- (id)getCurrentUrl;
- (void)loadFrameContent:(id)arg1;
- (id)getFrameContent;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(BOOL)arg4 navigationAction:(id)arg5;
- (void)webViewDidStartLoad:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveServerRedirect:(id)arg1 navigation:(id)arg2;
- (void)webViewDidReceiveResponse:(id)arg1 isMainFrame:(BOOL)arg2 andGetIsCancelNavigation:(BOOL *)arg3;
- (void)webViewDidFinishLoad:(id)arg1 navigation:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 nnavigation:(id)arg3;
- (void)webviewDidReceiveScriptMessage:(id)arg1 handler:(id)arg2 rawMessage:(id)arg3;
- (void)onDomReady;
- (void)onWebInvokeAppService:(id)arg1;
- (unsigned int)htmlId;
- (void)setHtmlId:(unsigned int)arg1;
- (id)plugin;
- (void)setPlugin:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)jsLogicImpl;
- (void)setJsLogicImpl:(id)arg1;
- (id)oInitUrl;
- (void)setOInitUrl:(id)arg1;
- (long long)nHttpRspCode;
- (void)setNHttpRspCode:(long long)arg1;
- (id)nsLoadingUrl;
- (void)setNsLoadingUrl:(id)arg1;
- (id)appID;
- (void)setAppID:(id)arg1;
- (unsigned int)requestID;
- (void)setRequestID:(unsigned int)arg1;
- (BOOL)isWebviewFirstLoad;
- (void)setIsWebviewFirstLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end

