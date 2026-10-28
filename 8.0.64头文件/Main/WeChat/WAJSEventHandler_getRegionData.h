@interface WAJSEventHandler_getRegionData : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>
{
    id <IWALocationService> _locationService; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onGetRegionData:(id)arg1;
- (id)locationService;
- (void)setLocationService:(id)arg1;
- (void).cxx_destruct;
@end
