@interface LocalJSEventHandler_getCurrentLocation : LocalJSEventHandler_BaseEvent <LocationRetrieveDelegate>
{
    LocationRetriever * _locationRetriever; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)startRetrievingLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (void).cxx_destruct;
@end
