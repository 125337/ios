@interface WxaLiteAppWidgetPlugin : NSObject <FlutterPlugin, WxaLiteAppWidgetHostPluginApi>
{
    WxaLiteAppWidgetFlutterPluginApi * _api; // +0x8
    NSObject<FlutterTextureRegistry> * _registry; // +0x10
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x18
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x20
    FlutterEngine * _engine; // +0x28
    FlutterViewController * _flutterViewController; // +0x30
    NSNumber * _engineId; // +0x38
    WxaRouterPlugin * _routerPlugin; // +0x40
    NSMutableDictionary * _liteAppWidgetAdapterMap; // +0x48
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithRegistry:(id)arg1 registrar:(id)arg2 messenger:(id)arg3;
- (void)dealloc;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)cleanWxaLiteAppWidget;
- (id)getLiteAppEngineIdWithError:(id *)arg1;
- (id)checkAndGetLiteAppPathMsg:(id)arg1 error:(id *)arg2;
- (id)genLiteAppUuidMsg:(id)arg1 error:(id *)arg2;
- (void)showLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (void)destroyLiteAppViewMsg:(id)arg1 error:(id *)arg2;
- (void)setEngineId:(id)arg1;
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
- (id)routerPlugin;
- (void)setRouterPlugin:(id)arg1;
- (id)liteAppWidgetAdapterMap;
- (void)setLiteAppWidgetAdapterMap:(id)arg1;
- (void).cxx_destruct;
@end

