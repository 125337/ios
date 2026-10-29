@interface WeMagicAdCppToPlatformCallback : NSObject
{
    WeMagicAdCppToPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeMagicAdCppToPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onNotifyFlutterCanvasInfoComplete:(unsigned long long)arg1;
- (void)onOnCanvasCreateComplete:(unsigned long long)arg1;
- (void)onOnCanvasLayoutComplete:(unsigned long long)arg1;
- (void)onOnCanvasDestroyComplete:(unsigned long long)arg1;
- (void)onOnCanvasFirstFrameRenderedComplete:(unsigned long long)arg1;
- (void)onOnFrameSetBindComplete:(unsigned long long)arg1;
- (void)onOnFrameSetUnBindComplete:(unsigned long long)arg1;
- (void)onOnFrameSetResizeComplete:(unsigned long long)arg1;
- (void)onGetFrameSetSizeComplete:(unsigned long long)arg1 width:(int)arg2 height:(int)arg3;
@end
