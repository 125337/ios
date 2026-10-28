@interface LiteAppVideoPlayerPlugin : NSObject <FlutterPlugin>
{
    NSObject<FlutterTextureRegistry> * _registry; // +0x8
    NSObject<FlutterBinaryMessenger> * _messenger; // +0x10
    NSMutableDictionary * _players; // +0x18
    NSObject<FlutterPluginRegistrar> * _registrar; // +0x20
}
+ (void)registerWithRegistrar:(id)arg1;
- (id)initWithRegistrar:(id)arg1;
- (void)becomeActive;
- (void)engineWillDestroy;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)onPlayerSetup:(id)arg1 frameUpdater:(id)arg2 result:(id /* block */)arg3;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)registry;
- (id)messenger;
- (id)players;
- (id)registrar;
- (void).cxx_destruct;
@end
