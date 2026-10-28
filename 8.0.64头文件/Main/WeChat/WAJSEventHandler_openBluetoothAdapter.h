@interface WAJSEventHandler_openBluetoothAdapter : WAJSEventHandler_BaseEvent <IWAJSContextBlueToothProtocol>
{
    BOOL _openBackground; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEventAfterAuth:(id)arg1;
- (void)onBluetoothLibOpen:(long long)arg1 appid:(id)arg2 mode:(id)arg3;
- (void)onBluetoothLibOpenTimeoutWithAppId:(id)arg1;
- (void)dealloc;
- (id)bleInstance;
- (id)peripheral_bleInstance;
- (BOOL)openBackground;
- (void)setOpenBackground:(BOOL)arg1;
@end
