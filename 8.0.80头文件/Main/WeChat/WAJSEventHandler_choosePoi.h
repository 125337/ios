@interface WAJSEventHandler_choosePoi : WAJSEventHandler_BaseEvent <WALocationServiceDelegate>
{
    id <IWALocationService> _locationService; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)doNavigate;
- (void)openPoi:(id)arg1;
- (void)onChoosePoiFinished:(id)arg1;
- (void)onChoosePoiCancel;
- (id)locationService;
- (void)setLocationService:(id)arg1;
- (void).cxx_destruct;
@end
