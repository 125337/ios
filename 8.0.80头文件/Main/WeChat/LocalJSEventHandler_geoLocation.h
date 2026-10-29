@interface LocalJSEventHandler_geoLocation : LocalJSEventHandler_BaseEvent <LocationRetrieveDelegate>
{
    LocationRetriever * _locationRetriever; // +0x8
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (unsigned long long)eventAuthScene;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (void).cxx_destruct;
@end
