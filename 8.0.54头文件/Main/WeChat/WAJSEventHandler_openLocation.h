@interface WAJSEventHandler_openLocation : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>
{
    id <IWALocationService> _locationService; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)navigateToLocationView:(id)arg1 navigationController:(id)arg2;
- (void)onCancelOpenLocation;
- (id)locationService;
- (void)setLocationService:(id)arg1;
- (void).cxx_destruct;
@end

