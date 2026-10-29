@interface WAJSEventHandler_writeBLECharacteristicValue : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * m_deviceId; // +0x8
    NSString * m_serviceId; // +0x10
    NSString * m_charId; // +0x18
    unsigned long long m_writeTime; // +0x20
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothCharacteristicsDidWrite:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5 appid:(id)arg6;
- (void)onSuccess;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;
@end

