@interface WAJSEventHandler_createBLEPeripheralServer : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * m_serverID; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (id)bleInstance;
- (void)onBluetoothDidStartPeripheralServer:(id)arg1 errMsg:(id)arg2 errCode:(int)arg3 appid:(id)arg4 state:(long long)arg5;
- (void).cxx_destruct;
@end
