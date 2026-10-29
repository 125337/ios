@interface AffMigPlatformProviderCallback : NSObject
{
    AffMigPlatformProviderDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(AffMigPlatformProviderDispatcherBridgeObjcImpl *)arg1;
- (void)onGetChatPackageComplete:(unsigned long long)arg1 isLastPkg:(BOOL)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onInsertChatPackageComplete:(unsigned long long)arg1;
- (void)onInsertRefMediaComplete:(unsigned long long)arg1 failedCount:(int)arg2;
- (void)onFilterRestoreMediaComplete:(unsigned long long)arg1 filteredSize:(unsigned long long)arg2 filteredMediaIdList:(id)arg3;
- (void)onRequestSetupEnvWithUsernameComplete:(unsigned long long)arg1 result:(int)arg2;
- (void)onVerifyUserDBComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onGetBatteryLevelComplete:(unsigned long long)arg1 batteryLevel:(int)arg2;
- (void)onGetWifiNameComplete:(unsigned long long)arg1 wifiName:(id)arg2;
- (void)onCheckWiFiDirectPermissionComplete:(unsigned long long)arg1 flag:(BOOL)arg2;
- (void)onStartBLEAdvertisingComplete:(unsigned long long)arg1 success:(BOOL)arg2 characteristicUUID:(id)arg3;
- (void)onStopBLEAdvertisingComplete:(unsigned long long)arg1;
- (void)onStartBLEScanningComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onStopBLEScanningComplete:(unsigned long long)arg1;
- (void)onSendBLEMessageComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onBroadcastBLEMessageComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onConnectBLEDeviceComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onDisconnectBLEDeviceComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onBLEDeviceDiscoveredEvent:(id)arg1 deviceName:(id)arg2 rssi:(int)arg3;
- (void)onBLEMessageReceivedEvent:(id)arg1 type:(int)arg2 data:(id)arg3;
- (void)onBLEDeviceConnectedEvent:(id)arg1;
- (void)onBLEDeviceDisconnectedEvent:(id)arg1;
- (void)onGetMigrationConvListComplete:(unsigned long long)arg1 talkerList:(id)arg2;
- (void)onGetAllConversationComplete:(unsigned long long)arg1 convList:(id)arg2;
- (void)onBluetoothPowerOnEvent;
- (void)onBluetoothPowerOffEvent;
- (void)onGetChatPackageForWholeDbComplete:(unsigned long long)arg1 isLastPkg:(BOOL)arg2 offset:(unsigned long long)arg3 chatPackage:(id)arg4;
- (void)onGetConvDbIndexAlgorithmComplete:(unsigned long long)arg1 algorithmName:(id)arg2 dbCount:(int)arg3;
@end
