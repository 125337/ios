@interface WABluetoothDeviceMonitorMgr : MMUserService <WABleAdpterLogicDelegate, WAAppTaskMgrExt, WAAppItemManagerExtension, MMServiceProtocol>
{
    NSMutableArray * _monitoredDevices; // +0x8
    WABleAdpterLogic * _bleAdapter; // +0x10
    NSRecursiveLock * _lock; // +0x18
    NSString * _openingAppId; // +0x20
    NSMutableArray * _currentOpenJobs; // +0x28
    NSMutableArray * _pendingOpenJobs; // +0x30
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)startMonitoringBluetoothDevices;
- (void)setBluetoothMonitoredDevice:(id)arg1;
- (BOOL)deleteBluetoothMonitoredDeviceWithWechatToken:(id)arg1 appId:(id)arg2;
- (void)deleteBluetoothMonitoredDevice:(id)arg1;
- (id)getAllBluetoothMonitoredDevices;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1 debugType:(unsigned long long)arg2;
- (void)deleteBluetoothMonitoredDeviceByAppId:(id)arg1 debugType:(unsigned long long)arg2 allDebugType:(BOOL)arg3;
- (void)onBleStateChanged:(id)arg1;
- (void)onBleDeviceConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDisConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDidDisConnentedError:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)tryConnectingBluetoothDevice:(id)arg1;
- (void)tryDisconnectingBluetoothDevice:(id)arg1;
- (id)monitoredDevicePathSavePath;
- (void)loadMonitoredDeviceList;
- (void)saveMonitoredDeviceList;
- (void)openWeAppWithJob:(id)arg1;
- (void)checkAndOpenPendingJobs;
- (id)getMonitoredDeviceWithUUID:(id)arg1;
- (id)getMonitoredDeviceWithWechatToken:(id)arg1 appId:(id)arg2;
- (unsigned long long)getDebugModeTypeEnumByEnvVersion:(id)arg1;
- (BOOL)initBleAdapterIfAllowed;
- (id)popCurrentOpenJob:(id)arg1;
- (id)genOpenWeAppJob:(id)arg1;
- (void)onAppTaskTerminate:(id)arg1;
- (void)onAppTaskDidFinishLaunchWithAppId:(id)arg1;
- (void)onWeAppItemDeleted:(id)arg1;
- (void)deleteAllDevices;
- (void).cxx_destruct;
@end
