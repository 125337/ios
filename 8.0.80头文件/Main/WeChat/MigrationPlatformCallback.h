@interface MigrationPlatformCallback : NSObject
{
    MigrationPlatformDispatcherBridgeObjcImpl * dispatcher_bridge; // +0x8
}
- (id)initWithCpp:(MigrationPlatformDispatcherBridgeObjcImpl *)arg1;
- (void)onDoOfflineCgiComplete:(unsigned long long)arg1 errType:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4 respBuf:(id)arg5 checkInterval:(int)arg6;
- (void)onGetAllConversationForUserNameComplete:(unsigned long long)arg1 convList:(id)arg2;
- (void)onSearchTalkerByKeywordsComplete:(unsigned long long)arg1 result:(id)arg2;
- (void)onIsPomEnableComplete:(unsigned long long)arg1 isEnable:(BOOL)arg2;
- (void)onCommonCallPlatform2Complete:(unsigned long long)arg1 rpcResp:(id)arg2;
- (void)onGetPcMinVersionComplete:(unsigned long long)arg1 windows:(int)arg2 mac:(int)arg3 linux:(int)arg4 ohosPc:(int)arg5;
- (void)onGetDeviceIdComplete:(unsigned long long)arg1 deviceId:(id)arg2;
- (void)onIsEnableCrossNearComplete:(unsigned long long)arg1 flag:(BOOL)arg2;
- (void)onCheckPermissionComplete:(unsigned long long)arg1 checked:(BOOL)arg2;
- (void)onGetWifiNameComplete:(unsigned long long)arg1 wifiName:(id)arg2;
- (void)onStartDeviceDiscoveryComplete:(unsigned long long)arg1;
- (void)onCreateGroupComplete:(unsigned long long)arg1 networkName:(id)arg2 passphrase:(id)arg3;
- (void)onConnectToGroupComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onStartBLEAdvertisingComplete:(unsigned long long)arg1 success:(BOOL)arg2 characteristicUUID:(id)arg3;
- (void)onStopBLEAdvertisingComplete:(unsigned long long)arg1;
- (void)onStartBLEScanningComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onStopBLEScanningComplete:(unsigned long long)arg1;
- (void)onSendBLEMessageComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onBroadcastBLEMessageComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onConnectBLEDeviceComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onDisconnectBLEDeviceComplete:(unsigned long long)arg1 success:(BOOL)arg2;
- (void)onSetBLEAuthKeyComplete:(unsigned long long)arg1;
- (void)onRequestBluetoothPermissionComplete:(unsigned long long)arg1 result:(BOOL)arg2;
- (void)onNetworkChangedEvent;
- (void)onIsWifiExpensiveComplete:(unsigned long long)arg1 isExpensive:(BOOL)arg2;
- (void)onBLEDeviceDiscoveredEvent:(id)arg1 deviceName:(id)arg2 rssi:(int)arg3;
- (void)onBLEMessageReceivedEvent:(id)arg1 type:(int)arg2 data:(id)arg3;
- (void)onBLEDeviceConnectedEvent:(id)arg1;
- (void)onBLEDeviceDisconnectedEvent:(id)arg1;
- (void)onBluetoothPowerOnEvent;
- (void)onBluetoothPowerOffEvent;
@end
