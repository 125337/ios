@interface FlutterLocationPlugin : NSObject <MMFlutterPlugin, MMLocationNativeApi, LocationRetrieveDelegate>
{
    LocationRetriever * _locationRetriever; // +0x8
    NSMutableArray * _requestQueue; // +0x10
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (id)convertWGS84LocationToGCJ02LocationInfo:(id)arg1 error:(id *)arg2;
- (void)getUserCurrentLocationAuthScene:(long long)arg1 locationGeoMode:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)startRetrieveLocation:(long long)arg1 locationGeoMode:(unsigned long long)arg2;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void).cxx_destruct;
@end
