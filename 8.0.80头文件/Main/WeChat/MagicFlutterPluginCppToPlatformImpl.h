@interface MagicFlutterPluginCppToPlatformImpl : NSObject <MagicFlutterPluginCppToPlatformBase>
{
    MagicFlutterPluginCppToPlatformCallback * _callback; // +0x8
    NSMapTable * _flutterDelegateMap; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)delegateForInstanceId:(id)arg1;
- (void)registerDelegate:(id)arg1 forInstanceId:(id)arg2;
- (void)unregisterDelegateForInstanceId:(id)arg1;
- (void)notifyCreateFlutterCanvasAsync:(unsigned long long)arg1 instanceId:(id)arg2 frameSetId:(id)arg3 canvasId:(unsigned long long)arg4;
- (void)notifyDestroyFlutterCanvasAsync:(unsigned long long)arg1 instanceId:(id)arg2 frameSetId:(id)arg3 canvasId:(unsigned long long)arg4;
- (id)callback;
- (void)setCallback:(id)arg1;
- (id)flutterDelegateMap;
- (void).cxx_destruct;
@end
