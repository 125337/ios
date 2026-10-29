@interface ChatbotBoardLegacyCPP2NativeCallerCallback : NSObject
{
    ChatbotBoardLegacyCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(ChatbotBoardLegacyCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnProbeRenderStrategyComplete:(unsigned long long)arg1 renderStrategy:(int)arg2 nativeFamily:(id)arg3 probePath:(id)arg4 reason:(id)arg5;
- (void)onOnLegacyItemDeactivatedComplete:(unsigned long long)arg1;
@end
