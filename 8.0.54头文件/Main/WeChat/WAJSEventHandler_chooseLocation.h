@interface WAJSEventHandler_chooseLocation : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>
{
    id <IWALocationService> _locationService; // +0x8
    CLLocationCoordinate2D _startCoord; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)doNavigate;
- (void)openLocation:(id)arg1;
- (void)onCancelChooseLocation;
- (void)onChooseLocation:(id)arg1;
- (id)locationService;
- (void)setLocationService:(id)arg1;
- (CLLocationCoordinate2D)startCoord;
- (void)setStartCoord:(CLLocationCoordinate2D)arg1;
- (void).cxx_destruct;
@end

