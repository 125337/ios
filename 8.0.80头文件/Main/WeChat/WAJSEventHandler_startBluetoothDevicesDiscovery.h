@interface WAJSEventHandler_startBluetoothDevicesDiscovery : WAJSEventHandler_BaseBluetooth <IWAJSContextBlueToothProtocol>
- (void)handleJSEvent:(id)arg1;
- (void)onBluetoothStartScan:(int)arg1 errMsg:(id)arg2 appid:(id)arg3;
- (void)dealloc;
@end
