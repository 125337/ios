@interface CloudBackupPlatformProviderCallback : NSObject
{
    CloudBackupPlatformProviderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CloudBackupPlatformProviderDispatcherBridgeObjcImpl *)arg1;
- (void)onPushRouteComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onRemoveMediaComplete:(unsigned long long)arg1;
@end
