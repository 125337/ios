@interface LiteAppJsApiAdGetLocation : LiteAppJsApiAdBase <LocationRetrieveDelegate, WCAdDetermineHalfScreenViewDelegate>
{
    WCAdDetermineHalfScreenView * _determineHalfScreenView; // +0x20
    LocationRetriever * _locationRetriever; // +0x28
    long long _geoMode; // +0x30
}
- (void)doAdInvokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)showLocationPermissionView;
- (void)onDetermineViewButtonClickedWithType:(long long)arg1 determineInfo:(id)arg2;
- (void)onDetermineViewDidClose:(BOOL)arg1;
- (void)retrieveLocation;
- (void)notifyRetrieveLocationSuccess:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (id)determineHalfScreenView;
- (void)setDetermineHalfScreenView:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (long long)geoMode;
- (void)setGeoMode:(long long)arg1;
- (void).cxx_destruct;
@end
