@interface WABlueToothDevice : MMObject
{
    NSMutableDictionary * m_services; // +0x8
    NSMutableDictionary * m_characteristics; // +0x10
    NSString * _uuid; // +0x18
    NSString * _name; // +0x20
    NSNumber * _RSSI; // +0x28
    WABlueToothDeviceAdData * _adData; // +0x30
    CBPeripheral * _peripheral; // +0x38
}
- (id)init;
- (void)setPeripheral:(id)arg1;
- (void)addService:(id)arg1;
- (void)addServices:(id)arg1;
- (void)addCharacteristic:(id)arg1 forService:(id)arg2;
- (void)addCharacteristics:(id)arg1 forService:(id)arg2;
- (id)serviceForUUID:(id)arg1;
- (id)characteristicForUUID:(id)arg1 serviceUUID:(id)arg2;
- (void)clearInfo;
- (id)deviceDictionary;
- (unsigned long long)maximumWriteLengthForType:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (id)RSSI;
- (void)setRSSI:(id)arg1;
- (id)adData;
- (void)setAdData:(id)arg1;
- (id)peripheral;
- (void).cxx_destruct;
@end

