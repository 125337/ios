@interface MagicFlutterPluginCppToPlatformCallback : NSObject
{
    MagicFlutterPluginCppToPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(MagicFlutterPluginCppToPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onNotifyCreateFlutterCanvasComplete:(unsigned long long)arg1;
- (void)onNotifyDestroyFlutterCanvasComplete:(unsigned long long)arg1;
@end
