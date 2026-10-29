@interface WABlueToothDevicePool : MMObject
{
    NSMutableArray * m_devicePool; // +0x8
    NSRecursiveLock * m_oLock; // +0x10
}
- (id)initWithLock:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 RSSI:(id)arg2 adData:(id)arg3;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)getDeviceByUUID:(id)arg1;
- (void)clearDisconnectedDevice;
- (void)clearAllDevice;
- (id)allDevices;
- (void).cxx_destruct;
@end

