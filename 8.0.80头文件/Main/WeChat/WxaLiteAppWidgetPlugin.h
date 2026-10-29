@interface WxaLiteAppWidgetPlugin : NSObject <FlutterPlugin, WxaLiteAppWidgetHostPluginApi>
{
    BOOL _forLiteAppHost; // +0x8
    WxaLiteAppWidgetFlutterPluginApi * _api; // +0x10
    NSObject<FlutterTextureRegistry> * _registry; // +0x18
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x20
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x28
    FlutterEngine * _engine; // +0x30
    FlutterViewController * _flutterViewController; // +0x38
    NSNumber * _engineId; // +0x40
    WxaRouterPlugin * _routerPlugin; // +0x48
    NSMutableDictionary * _liteAppWidgetAdapterMap; // +0x50
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithRegistry:(id)arg1 registrar:(id)arg2 messenger:(id)arg3;
- (void)dealloc;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)cleanWxaLiteAppWidget;
- (unsigned long long)routerPluginKey;
- (void)initMsg:(id)arg1 error:(id *)arg2;
- (void)setLiteAppHostEngineIdMsg:(id)arg1 error:(id *)arg2;
- (id)getLiteAppEngineIdWithError:(id *)arg1;
- (void)checkAndGetLiteAppPathMsg:(id)arg1 completion:(id /* block */)arg2;
- (void)genLiteAppUuidAndSessionIdMsg:(id)arg1 completion:(id /* block */)arg2;
- (void)showLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (void)destroyLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (void)createStoreMsg:(id)arg1 error:(id *)arg2;
- (void)createStoreWithPkgPathMsg:(id)arg1 error:(id *)arg2;
- (void)releaseStoreMsg:(id)arg1 error:(id *)arg2;
- (id)storeIsAliveMsg:(id)arg1 error:(id *)arg2;
- (id)dispatchStoreMsg:(id)arg1 error:(id *)arg2;
- (void)subscribeStoreMsg:(id)arg1 error:(id *)arg2;
- (void)unsubscribeStoreMsg:(id)arg1 error:(id *)arg2;
- (void)publishGlobalEventToAllMsg:(id)arg1 error:(id *)arg2;
- (void)publishGlobalEventToAllByAppIdMsg:(id)arg1 error:(id *)arg2;
- (void)publishGlobalEventMsg:(id)arg1 error:(id *)arg2;
- (void)publishGlobalEventToTopPageMsg:(id)arg1 error:(id *)arg2;
- (void)publishEventToTopPageMsg:(id)arg1 error:(id *)arg2;
- (void)localStoreSendResultMsg:(id)arg1 error:(id *)arg2;
- (void)localStoreSendErrorMsg:(id)arg1 error:(id *)arg2;
- (void)localStoreSetDataMsg:(id)arg1 error:(id *)arg2;
- (void)setWidgetSizeMsg:(id)arg1 error:(id *)arg2;
- (void)triggerLiteAppEventMsg:(id)arg1 error:(id *)arg2;
- (void)triggerLiteAppEventByEventNameMsg:(id)arg1 error:(id *)arg2;
- (id)getLiteAppConfigModelMsg:(id)arg1 error:(id *)arg2;
- (id)getLiteAppEngineConfigModelWithError:(id *)arg1;
- (id)api;
- (void)setApi:(id)arg1;
- (id)registry;
- (id)registrar;
- (id)messenger;
- (id)engine;
- (void)setEngine:(id)arg1;
- (id)flutterViewController;
- (void)setFlutterViewController:(id)arg1;
- (id)engineId;
- (void)setEngineId:(id)arg1;
- (id)routerPlugin;
- (void)setRouterPlugin:(id)arg1;
- (BOOL)forLiteAppHost;
- (void)setForLiteAppHost:(BOOL)arg1;
- (id)liteAppWidgetAdapterMap;
- (void)setLiteAppWidgetAdapterMap:(id)arg1;
- (void).cxx_destruct;
@end
