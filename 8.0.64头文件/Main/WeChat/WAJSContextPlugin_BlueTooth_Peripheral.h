@interface WAJSContextPlugin_BlueTooth_Peripheral : WAJSContextPluginBase <WABlePeripheralAdapterLogicDelegate>
{
    BOOL m_hasInit; // +0x8
    NSMutableDictionary * m_adapterDic; // +0x10
    NSMutableDictionary * m_requestDic; // +0x18
    NSMutableDictionary * m_characDataDic; // +0x20
    NSRecursiveLock * m_lock; // +0x28
    long long m_state; // +0x30
    BOOL _isAllowBackground; // +0x38
}
- (id)init;
- (void)openBluetoothLowEnergyLib;
- (void)closeBluetoothLowEnergyLib;
- (BOOL)getBluetoothAdapterAvailableState;
- (int)checkAbilityForInvokingBleAPI;
- (id)createPeripheralServer;
- (int)closePeripheralServer:(id)arg1;
- (int)addBluetoothService:(id)arg1 toAdapter:(id)arg2 withCharacteristicsList:(id)arg3;
- (int)removeBluetoothService:(id)arg1 fromAdapter:(id)arg2;
- (int)startAdvertising:(id)arg1 deviceName:(id)arg2 serviceUUIDs:(id)arg3;
- (int)startBeaconAdvertising:(id)arg1 UUID:(id)arg2 identifier:(id)arg3 major:(unsigned short)arg4 minor:(unsigned short)arg5 measuredPower:(id)arg6;
- (int)stopAdvertising:(id)arg1;
- (id)createCharacteristic:(id)arg1 properties:(id)arg2 value:(id)arg3 permissions:(id)arg4;
- (id)createDescriptor:(id)arg1 value:(id)arg2;
- (int)writeValueToCharacteristics:(id)arg1 serviceID:(id)arg2 characteristics:(id)arg3 value:(id)arg4 callBackId:(id)arg5 needNotify:(BOOL)arg6;
- (void)onBleStateChanged:(id)arg1 serverID:(id)arg2;
- (void)onReceiveWriteRequests:(id)arg1 serverID:(id)arg2;
- (void)onReceiveReadRequest:(id)arg1 serverID:(id)arg2;
- (void)didAddService:(id)arg1 serverID:(id)arg2 errMsg:(id)arg3 errCode:(int)arg4;
- (void)didStartAdvertising:(id)arg1 errMsg:(id)arg2;
- (void)onConnected:(id)arg1 central:(id)arg2;
- (void)onDisconnected:(id)arg1 central:(id)arg2;
- (void)onSubscribedToCharacteristic:(id)arg1 central:(id)arg2 serverID:(id)arg3;
- (void)onUnsubscribedToCharacteristic:(id)arg1 central:(id)arg2 serverID:(id)arg3;
- (id)generateCallbackId;
- (id)generateServerId;
- (BOOL)isAllowBackground;
- (void)setIsAllowBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
