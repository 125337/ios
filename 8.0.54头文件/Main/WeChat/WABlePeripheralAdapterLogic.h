@interface WABlePeripheralAdapterLogic : NSObject <CBPeripheralManagerDelegate>
{
    NSString * m_serverID; // +0x8
    CBPeripheralManager * m_adapter; // +0x10
    NSRecursiveLock * m_lock; // +0x18
    NSObject<OS_dispatch_queue> * m_blueQueue; // +0x20
    NSMutableDictionary * m_services; // +0x28
    NSMutableDictionary * m_centralDevices; // +0x30
    NSMutableDictionary * m_serviceCharacteristicsDic; // +0x38
    NSMutableArray * m_notifyQueue; // +0x40
    NSMutableDictionary * m_connectedDevices; // +0x48
    id <WABlePeripheralAdapterLogicDelegate> _delegate; // +0x50
}
- (id)init;
- (id)initWithDelegate:(id)arg1 lock:(id)arg2 serverID:(id)arg3;
- (void)dealloc;
- (long long)state;
- (int)addService:(id)arg1 isPrimary:(BOOL)arg2 withCharacteristics:(id)arg3;
- (int)writeCharacteristics:(id)arg1 value:(id)arg2 forService:(id)arg3;
- (id)readCharacteristics:(id)arg1 service:(id)arg2;
- (int)notifyCharacteristicChange:(id)arg1 service:(id)arg2;
- (void)startAdvertisingWithRequest:(id)arg1;
- (void)stopAdvertising;
- (int)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1;
- (void)onConnected:(id)arg1;
- (void)onPowerOff;
- (void)peripheralManagerDidUpdateState:(id)arg1;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didSubscribeToCharacteristic:(id)arg3;
- (void)peripheralManager:(id)arg1 central:(id)arg2 didUnsubscribeFromCharacteristic:(id)arg3;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)peripheralManager:(id)arg1 didAddService:(id)arg2 error:(id)arg3;
- (void)peripheralManager:(id)arg1 didReceiveReadRequest:(id)arg2;
- (void)peripheralManager:(id)arg1 didReceiveWriteRequests:(id)arg2;
- (void)peripheralManagerIsReadyToUpdateSubscribers:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

