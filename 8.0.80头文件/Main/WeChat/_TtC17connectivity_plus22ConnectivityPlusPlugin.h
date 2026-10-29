@interface _TtC17connectivity_plus22ConnectivityPlusPlugin : NSObject <FlutterPlugin, FlutterStreamHandler>
{
     connectivityProvider; // +0x8
     eventSink; // +0x18
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)detachFromEngineForRegistrar:(id)arg1;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (id)onListenWithArguments:(id)arg1 eventSink:(id /* block */)arg2;
- (id)onCancelWithArguments:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
