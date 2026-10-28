@interface WSLocalTemplateController : NSObject <WSJSEventHandleDelegate, FTSWebSearchDataSource>
{
    WKWebSearchView * _webview; // +0x8
    WSLocalTemplateConfig * _config; // +0x10
    WSJSEventHandler * _deprecatedSearchEventHandler; // +0x18
    WSResultViewLogic * _resultViewLogic; // +0x20
}
+ (id)getPreloadInstanceWith:(id)arg1 webviewOwner:(id)arg2;
+ (void)removeCache;
+ (void)preHeatSearchH5WithForceDarkMode:(BOOL)arg1;
+ (void)preHeatSearchH5WithForceDarkMode:(BOOL)arg1 shouldBeReusable:(BOOL)arg2;
+ (void)removePreHeatSearchH5;
- (void)_fetchH5FileThenLoad;
- (void)tryRecycleSelf;
- (id)initWithConfig:(id)arg1;
- (void)updateConfig:(id)arg1;
- (void)initWebview;
- (void)initJSLogic;
- (void)loadH5File;
- (void)loadH5FileFor:(unsigned long long)arg1;
- (void)setContentVC:(id)arg1;
- (id)jsLogic;
- (id)viewStacks;
- (id)htmlPath;
- (unsigned int)h5Version;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)deprecatedSearchEventHandler;
- (void)setDeprecatedSearchEventHandler:(id)arg1;
- (id)resultViewLogic;
- (void)setResultViewLogic:(id)arg1;
- (void).cxx_destruct;
@end
