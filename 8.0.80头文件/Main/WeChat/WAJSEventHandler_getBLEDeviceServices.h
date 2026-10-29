@interface WAJSEventHandler_getBLEDeviceServices : WAJSEventHandler_BaseBluetooth <IWAJSContextBlueToothProtocol>
{
    NSString * m_uuid; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothServicesDiscovered:(id)arg1 device:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4 appid:(id)arg5;
- (void)dealloc;
- (void).cxx_destruct;
@end
