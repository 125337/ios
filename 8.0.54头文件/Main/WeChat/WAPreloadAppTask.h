@interface WAPreloadAppTask : NSObject
{
    WAApptaskPublicResLogic * _publicResLogic; // +0x8
    WAWebViewController * _webView; // +0x10
    WAJSCoreService * _appService; // +0x18
}
- (id)webView;
- (void)dealloc;
- (id)init;
- (id)publicResLogic;
- (void)setPublicResLogic:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)appService;
- (void)setAppService:(id)arg1;
- (void).cxx_destruct;
@end

