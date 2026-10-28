@interface WAJSEventHandler_getBLEDeviceCharacteristics : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * m_deviceId; // +0x8
    NSString * m_serviceId; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothCharacteristicsDiscovered:(id)arg1 service:(id)arg2 device:(id)arg3 errorCode:(int)arg4 errMsg:(id)arg5 appid:(id)arg6;
- (void)dealloc;
- (id)bleInstance;
- (void).cxx_destruct;
@end
