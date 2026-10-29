@interface CBTAsstNotifyCPP2NativeCallerCallback : NSObject
{
    CBTAsstNotifyCPP2NativeCallerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CBTAsstNotifyCPP2NativeCallerDispatcherBridgeObjcImpl *)arg1;
- (void)onOnShowUnreadNotifyComplete:(unsigned long long)arg1;
@end
