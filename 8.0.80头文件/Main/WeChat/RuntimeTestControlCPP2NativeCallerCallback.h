@interface RuntimeTestControlCPP2NativeCallerCallback : NSObject
{
    RuntimeTestControlCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(RuntimeTestControlCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOpenLeftPanelComplete:(unsigned long long)arg1;
@end
