@interface CustomRoamDiskManagerCallback : NSObject
{
    CustomRoamDiskManagerDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(CustomRoamDiskManagerDispatcherBridgeObjcImpl *)arg1;
- (void)onDeviceDiscoveredEvent:(id)arg1 specialInfoPb:(id)arg2;
@end

