@interface WAJSEventHandler_startBLEPeripheralAdvertising : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * m_serverId; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothStartAdvertising:(id)arg1 errMsg:(id)arg2 appid:(id)arg3 errCode:(int)arg4;
- (id)bleInstance;
- (void).cxx_destruct;
@end

