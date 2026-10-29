@interface WAJSEventHandler_notifyBLECharacteristicValueChanged : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * m_deviceId; // +0x8
    NSString * m_serviceId; // +0x10
    NSString * m_charId; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothCharacteristicsDidSetNotify:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5 appid:(id)arg6;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;
@end

