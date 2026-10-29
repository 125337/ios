@interface CBTHalfScreenLaunchCPP2NativeCallerCallback : NSObject
{
    CBTHalfScreenLaunchCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTHalfScreenLaunchCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnTTSReadEnabledChangedComplete:(unsigned long long)arg1;
- (void)onOnHalfScreenHeightChangedComplete:(unsigned long long)arg1;
@end
