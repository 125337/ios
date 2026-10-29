@interface WABleAdpterLogic : MMObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager * m_bleAdapter; // +0x8
    NSObject<OS_dispatch_queue> * m_blueQueue; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    BOOL hasFirstUpdateState; // +0x20
    NSMutableDictionary * m_connectedDevices; // +0x28
    NSArray * m_currentScanServices; // +0x30
    NSDictionary * m_currentScanOptions; // +0x38
    WABlueToothDevicePool * _devices; // +0x40
    id <WABleAdpterLogicDelegate> _delegate; // +0x48
}
- (id)init;
- (id)initWithDelegate:(id)arg1 lock:(id)arg2;
- (long long)state;
- (BOOL)scan;
- (BOOL)scanForServices:(id)arg1 allowDuplicatesKey:(BOOL)arg2;
- (void)stopScan;
- (void)clearAndDisconnectAllDevices;
- (void)disconnectAllDevicesAndStopScan;
- (void)disconnectAllDevices;
- (void)restoreScanIfNeeded;
- (id)getConnectedDevicesForServices:(id)arg1;
- (id)getDeviceInSysytemHistory:(id)arg1;
- (int)connectPeripheral:(id)arg1;
- (int)disConnectPeripheral:(id)arg1;
- (int)discoverServiceForPeripheral:(id)arg1 services:(id)arg2;
- (int)discoverCharacteristicsForService:(id)arg1 peripheral:(id)arg2;
- (int)writeCharacteristicsForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3 value:(id)arg4 writeType:(unsigned long long)arg5;
- (int)readCharacteristicsForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3;
- (int)setNotifyForPeripheral:(id)arg1 service:(id)arg2 charUUID:(id)arg3 state:(BOOL)arg4;
- (int)readRSSIForPeripheral:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)__didRetrieveConnectedPeripherals:(id)arg1;
- (void)centralManagerUpdateStateTimeout;
- (id)devices;
- (void)setDevices:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
