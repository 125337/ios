@interface WAJSEventHandler_connectWifi : WAJSEventHandler_BaseEvent <IWAJSContextWifiProtocol>
- (void)handleJSEvent:(id)arg1;
- (void)connectWifiWithParam:(id)arg1;
- (void)dealloc;
- (void)onWifiConfigDone:(int)arg1 errMsg:(id)arg2;
- (id)wifiInstance;
- (unsigned int)getErrNoWithErrorCode:(int)arg1;
@end
