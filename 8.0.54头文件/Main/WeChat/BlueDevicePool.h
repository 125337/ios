@interface BlueDevicePool : NSObject
{
    NSMutableArray * _devicePool; // +0x8
    NSRecursiveLock * m_oLock; // +0x10
}
- (id)initWithLock:(id)arg1;
- (id)addDeviceWithAccessory:(id)arg1;
- (id)addDeviceWithPeripheral:(id)arg1 WithDID:(long long)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithMacData:(id)arg2;
- (id)addDeviceWithPeripheral:(id)arg1 WithUUID:(id)arg2;
- (id)getDeviceByAccessory:(id)arg1;
- (id)getDeviceByDID:(long long)arg1;
- (id)getDeviceBySessionID:(long long)arg1;
- (id)getDeviceByPeripheral:(id)arg1;
- (id)getDeviceByInputStream:(id)arg1;
- (id)getDeviceByOutputStream:(id)arg1;
- (void)removeDevice:(id)arg1;
- (void)removeDisconnected;
- (void)removeAllObjectsWithDelegate:(id)arg1;
- (id)devicePool;
- (void)setDevicePool:(id)arg1;
- (void).cxx_destruct;
@end

