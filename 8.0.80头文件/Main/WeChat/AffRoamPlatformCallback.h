@interface AffRoamPlatformCallback : NSObject
{
    AffRoamPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffRoamPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onGetAllConversationsComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetAllLabelsComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetAllDevicesComplete:(unsigned long long)arg1 devices:(id)arg2;
- (void)onGetOnlineDevicesComplete:(unsigned long long)arg1 devices:(id)arg2;
- (void)onGetIotBoundDevicesComplete:(unsigned long long)arg1 devices:(id)arg2;
- (void)onBindDeviceComplete:(unsigned long long)arg1 deviceId:(id)arg2 isSuccess:(BOOL)arg3;
- (void)onGetBatteryCapacityComplete:(unsigned long long)arg1 capacity:(int)arg2;
- (void)onGetNetNameComplete:(unsigned long long)arg1 netName:(id)arg2;
@end
