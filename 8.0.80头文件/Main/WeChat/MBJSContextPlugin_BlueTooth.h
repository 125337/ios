@interface MBJSContextPlugin_BlueTooth : WAJSContextPlugin_BlueTooth
- (void)dispatchEvent:(id)arg1 data:(id)arg2;
- (void)forceStopBluetoothBackgroundKeepAliveHook;
- (void)didEnableBackgroundBluetoothHook;
- (void)didDisableBackgroundBluetoothHook;
- (void)bluetoothDidConnectDeviceHook;
- (void)bluetoothDidLostAllConnectionHook;
@end
