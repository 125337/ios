@interface LiteAppVideoPlayerPlugin : NSObject <FlutterPlugin>
{
    BOOL _willDestroy; // +0x8
    NSObject<FlutterTextureRegistry> * _registry; // +0x10
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x18
    NSMutableDictionary * _players; // +0x20
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x28
    FlutterEngine * _engine; // +0x30
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithRegistrar:(id)arg1;
- (void)becomeActive;
- (void)onEngineWillDestroy:(id)arg1;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)onPlayerSetup:(id)arg1 frameUpdater:(id)arg2 result:(id /* block */)arg3;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)registry;
- (id)messenger;
- (id)players;
- (id)registrar;
- (BOOL)willDestroy;
- (void)setWillDestroy:(BOOL)arg1;
- (id)engine;
- (void)setEngine:(id)arg1;
- (void).cxx_destruct;
@end
