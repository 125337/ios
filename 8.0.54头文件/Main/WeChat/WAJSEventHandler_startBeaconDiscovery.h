@interface WAJSEventHandler_startBeaconDiscovery : WAJSEventHandler_BaseEvent <IWAJSContextBeaconProtocol>
- (void)handleJSEvent:(id)arg1;
- (void)innerHandleJSEventAfterAuth:(id)arg1;
- (void)didStartRangeBeacons:(id)arg1 errCode:(int)arg2 appid:(id)arg3;
- (void)dealloc;
- (id)beaconInstance;
@end

