@interface FlutterBizLocationPlugin : NSObject <LocationRetrieveDelegate, MMFlutterPlugin, BizLocationApi>
{
    BizLocationCallbackApi * _bizLocationApiCallback; // +0x8
    LocationRetriever * _locationRetriever; // +0x10
    id /* block */ _locationCompletion; // +0x18
    BizUserLocationInfo * _fetchedUserLocation; // +0x20
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)dealloc;
- (id)toUserLocationInfoWithPoi:(id)arg1 isOpenK1kLocation:(id)arg2 isOpenSystemLocation:(id)arg3;
- (BOOL)enablePOIPrefetch;
- (void)fetchBizPOIInfoWhenEnter;
- (void)onPOIFetchedUserLocation:(id)arg1 endTimeMs:(long long)arg2;
- (void)getBizPOIInfoWithCompletion:(id /* block */)arg1;
- (void)isUnderFreqControlWithCompletion:(id /* block */)arg1;
- (void)markLastGetPOITimeWithCompletion:(id /* block */)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)gotoSystemLocationSettingsWithCompletion:(id /* block */)arg1;
- (id)isOpenK1kLocationWithError:(id *)arg1;
- (id)isOpenSystemLocationWithError:(id *)arg1;
- (void)requestLocationAuthWithCompletion:(id /* block */)arg1;
- (void)requestLocationWithSystemAuthWithCompletion:(id /* block */)arg1;
- (void)getCacheLocationInfoWithCompletion:(id /* block */)arg1;
- (id)getUserLocationWithError:(id *)arg1;
- (id)bizLocationApiCallback;
- (void)setBizLocationApiCallback:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id /* block */)locationCompletion;
- (void)setLocationCompletion:(id /* block */)arg1;
- (id)fetchedUserLocation;
- (void)setFetchedUserLocation:(id)arg1;
- (void).cxx_destruct;
@end
