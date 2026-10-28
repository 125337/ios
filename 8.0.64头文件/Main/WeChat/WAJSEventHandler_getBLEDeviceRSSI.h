@interface WAJSEventHandler_getBLEDeviceRSSI : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    NSString * _deviceUUID; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onBLEDevice:(id)arg1 didReadRSSI:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4 appId:(id)arg5;
- (id)deviceUUID;
- (void)setDeviceUUID:(id)arg1;
- (void).cxx_destruct;
@end
