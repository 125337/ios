@interface KindaSessionIdListener : NSObject <MMKindaSessionIdListener>
{
    BOOL _includeLiteUseCaseSessionId; // +0x8
    MMWebViewController * _webViewController; // +0x10
    WAAppTask * _appTask; // +0x18
    LiteAppDynamicModuleCallback * _liteappCallback; // +0x20
}
+ (id)globalListenersArrayFromBizMgr;
+ (void)registerGlobalListener:(id)arg1;
+ (void)unregisterGlobalListener:(id)arg1;
+ (void)notifyAllWithSessionId:(id)arg1;
- (id)init;
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
- (BOOL)includeLiteUseCaseSessionId;
- (void)setIncludeLiteUseCaseSessionId:(BOOL)arg1;
- (void).cxx_destruct;
@end
