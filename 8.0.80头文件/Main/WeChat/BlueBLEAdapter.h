@interface BlueBLEAdapter : BlueAdapterBase <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager * m_bleAdapter; // +0x28
    NSMutableArray * m_data; // +0x30
    NSMutableArray * m_retainDevices; // +0x38
    BOOL m_isScanForWDevice; // +0x40
    BOOL m_isScanning; // +0x41
}
- (id)initWithDelegate:(id)arg1 withQueue:(id)arg2;
- (void)cleanUpAllDevices;
- (void)dealloc;
- (BOOL)scan;
- (int)connectProfile:(long long)arg1 ProfileType:(int)arg2;
- (void)closeProfile:(long long)arg1;
- (int)getProfileType:(long long)arg1;
- (int)getProfileConnectState:(long long)arg1;
- (int)readPedometerProfileCurPedometerInfo:(long long)arg1;
- (int)readPedometerProfileTarget:(long long)arg1;
- (int)writePedometerProfileTarget:(long long)arg1 Step:(int)arg2;
- (BOOL)scanForWDevice;
- (BOOL)scanAll;
- (void)stopScan;
- (id)getDeviceProtocols:(long long)arg1;
- (id)getDeviceName:(long long)arg1;
- (long long)createSession:(long long)arg1;
- (int)connectSession:(long long)arg1;
- (void)closeSession:(long long)arg1;
- (int)readSession:(long long)arg1 :(char *)arg2 :(int)arg3;
- (void)writeSession:(long long)arg1 :(const char *)arg2 :(int)arg3;
- (void)sendRemainDataToDevice:(id)arg1;
- (void)onBlueToothPowerOff;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)__didRetrieveConnectedPeripherals:(id)arg1;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (BOOL)__readInt32:(const char * *)arg1 Length:(int *)arg2 Value:(int *)arg3;
- (BOOL)__parsePedometerInfo:(id)arg1 Info:(id)arg2;
- (BOOL)__parseTarget:(id)arg1 Step:(int *)arg2;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheralDidUpdateName:(id)arg1;
- (void)peripheralDidUpdateRSSI:(id)arg1 error:(id)arg2;
- (void)cleanup:(id)arg1;
- (void)__onConnectedPeripheral:(id)arg1;
- (void)__closeConnectionForSupport3rdApp:(id)arg1;
- (id)__hexToString:(id)arg1;
- (void).cxx_destruct;
@end
