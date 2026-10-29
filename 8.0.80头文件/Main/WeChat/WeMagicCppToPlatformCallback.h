@interface WeMagicCppToPlatformCallback : NSObject
{
    WeMagicCppToPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(WeMagicCppToPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onOnBizDestroyComplete:(unsigned long long)arg1;
- (void)onOnCanvasCreateComplete:(unsigned long long)arg1;
- (void)onOnCanvasLayoutComplete:(unsigned long long)arg1;
- (void)onOnCanvasDestroyComplete:(unsigned long long)arg1;
- (void)onOnCanvasFirstFrameRenderedComplete:(unsigned long long)arg1;
- (void)onInvokeJsApiComplete:(unsigned long long)arg1;
- (void)onOnCheckBizValidCallbackComplete:(unsigned long long)arg1;
- (void)onOnVConsoleJsLogComplete:(unsigned long long)arg1;
- (void)onOnVConsoleSwitchChangeComplete:(unsigned long long)arg1;
@end
