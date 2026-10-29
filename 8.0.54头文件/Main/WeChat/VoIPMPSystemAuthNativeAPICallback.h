@interface VoIPMPSystemAuthNativeAPICallback : NSObject
{
    VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(VoIPMPSystemAuthNativeAPIDispatcherBridgeObjcImpl *)arg1;
- (void)onRequestComplete:(unsigned long long)arg1 isAuthorized:(BOOL)arg2;
@end

