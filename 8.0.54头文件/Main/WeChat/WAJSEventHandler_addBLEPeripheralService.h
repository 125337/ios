@interface WAJSEventHandler_addBLEPeripheralService : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * serverId; // +0x8
    NSString * serviceUUID; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)dealloc;
- (id)bleInstance;
- (void)onBluetoothDidAddService:(id)arg1 serverID:(id)arg2 errMsg:(id)arg3 errCode:(int)arg4 appid:(id)arg5;
- (void).cxx_destruct;
@end

