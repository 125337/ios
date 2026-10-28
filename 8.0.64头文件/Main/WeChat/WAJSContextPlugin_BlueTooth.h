@interface WAJSContextPlugin_BlueTooth : WAJSContextPluginBase <WABleAdpterLogicDelegate>
{
    BOOL m_hasInit; // +0x8
    WABleAdpterLogic * m_bleAdpter; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    long long m_state; // +0x20
    unsigned long long m_onDeviceFoundTriggerInterval; // +0x28
    NSMutableDictionary * m_foundDevices; // +0x30
    MMTimer * m_deviceOnTriggerTimer; // +0x38
    BOOL m_isScaning; // +0x40
    BOOL _isBackgroundModeEnabled; // +0x41
    BOOL _hasConnection; // +0x42
    BOOL _isSilentlyOpen; // +0x43
    BOOL _isAllowBackground; // +0x44
}
- (id)init;
- (void)openBluetoothLowEnergyLib;
- (void)closeBluetoothLowEnergyLib;
- (void)disconnectAllPeripheralAndStopScan;
- (void)restoreScanIfNeeded;
- (BOOL)isAllowBackground;
- (void)setIsAllowBackground:(BOOL)arg1;
- (BOOL)isBackgroundModeEnabled;
- (void)setIsBackgroundModeEnabled:(BOOL)arg1;
- (BOOL)getBluetoothAdapterAvailableState;
- (void)startBluetoothDevicesDiscoveryForServices:(id)arg1 allowDuplicatesKey:(BOOL)arg2 onFoundInterval:(unsigned long long)arg3;
- (int)stopBluetoothDevicesDiscovery;
- (void)onBleScanStateChanged;
- (id)getFoundBluethoothDevices;
- (id)getConnectedBluethoothDevices:(id)arg1;
- (int)createBluetoothLowEnergyConnection:(id)arg1;
- (int)closeBluetoothLowEnergyConnection:(id)arg1;
- (int)getBluetoothDeviceRSSI:(id)arg1;
- (int)discoverService:(id)arg1 forDevice:(id)arg2;
- (int)discovierCharacteristicForService:(id)arg1 forDevice:(id)arg2;
- (int)writeValueToCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 value:(id)arg4 writeType:(unsigned long long)arg5;
- (int)readValueFromCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3;
- (int)setNotifyOnCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 state:(BOOL)arg4;
- (long long)getMaximumWriteValueLengthForType:(id)arg1 forDevice:(id)arg2;
- (void)onBleStateChanged:(id)arg1;
- (void)onBleStateChangeTimeout:(id)arg1;
- (void)onBleDeviceFound:(id)arg1;
- (void)onTriggerDevicesSendToServices;
- (void)onBleDeviceConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDisConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDeviceDidDisConnentedError:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)onBleDevicesAllDisconnected;
- (BOOL)hasConnection;
- (void)setIsSilentlyOpen:(BOOL)arg1;
- (BOOL)isSilentlyOpen;
- (void)onBleDeviceDiscoverServices:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onBleDeviceDiscoverCharacteristicsInService:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onBleDeviceDidWriteValueToCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5;
- (void)onBleDeviceDidSetNotifyToCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5;
- (void)onBleDeviceDidUpdateValueInCharacteristics:(id)arg1 service:(id)arg2 device:(id)arg3 value:(id)arg4 errorCode:(int)arg5 errMsg:(id)arg6;
- (void)onBleDeviceDidReadRSSI:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (int)checkAbilityForInvokingBleAPI;
- (void)stopScan;
- (BOOL)m_isScaning;
- (void)setM_isScaning:(BOOL)arg1;
- (void)setHasConnection:(BOOL)arg1;
- (void).cxx_destruct;
@end
