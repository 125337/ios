@interface ChatbotBridgeEndpointCallback : NSObject
{
    ChatbotBridgeEndpointDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotBridgeEndpointDispatcherBridgeObjcImpl *)arg1;
- (void)onDispatchComplete:(unsigned long long)arg1 envelope:(id)arg2;
@end
