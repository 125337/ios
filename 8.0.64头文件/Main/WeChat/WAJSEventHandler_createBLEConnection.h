@interface WAJSEventHandler_createBLEConnection : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    MMTimer * m_timeOutTimer; // +0x8
    NSString * m_uuid; // +0x10
    unsigned long long m_connectTime; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothConnected:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3 appid:(id)arg4;
- (void)dealloc;
- (void)onTimeOut;
- (void)onSuccess;
- (id)bleInstance;
- (void).cxx_destruct;
@end
