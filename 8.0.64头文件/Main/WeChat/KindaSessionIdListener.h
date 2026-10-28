@interface KindaSessionIdListener : NSObject <MMKindaSessionIdListener>
{
    MMWebViewController * _webViewController; // +0x8
    WAAppTask * _appTask; // +0x10
    LiteAppDynamicModuleCallback * _liteappCallback; // +0x18
}
- (void)onSessionId:(id)arg1;
- (BOOL)isWebViewInUI;
- (void)setAppTask:(id)arg1;
- (BOOL)isLiteAppAlive;
- (void)unlisten;
- (id)webViewController;
- (void)setWebViewController:(id)arg1;
- (id)appTask;
- (id)liteappCallback;
- (void)setLiteappCallback:(id)arg1;
- (void).cxx_destruct;
@end
