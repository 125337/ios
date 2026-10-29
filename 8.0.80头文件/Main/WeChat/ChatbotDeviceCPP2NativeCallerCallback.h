@interface ChatbotDeviceCPP2NativeCallerCallback : NSObject
{
    ChatbotDeviceCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotDeviceCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onGetDeviceInfoComplete:(unsigned long long)arg1 info:(id)arg2;
@end
