@interface WALocationGetter : MMObject <LocationRetrieveDelegate>
{
    BOOL _retrivingLocation; // +0x8
    id <WALocationGetterDelegate> _delegate; // +0x10
    double _requiredHorizonAccuracy; // +0x18
    LocationRetriever * _locationRetriever; // +0x20
    WALocationCacheInfo * _cacheInfo; // +0x28
}
+ (BOOL)isUserDenyToLocationService;
- (id)init;
- (void)startGetLocationWithAuthorizedChallenge:(BOOL)arg1 authScene:(unsigned long long)arg2;
- (void)startGetLocationWithAuthorizedChallenge:(BOOL)arg1 requiredHorizonAccuracy:(double)arg2 busType:(unsigned long long)arg3 force:(BOOL)arg4 authScene:(unsigned long long)arg5;
- (void)dealloc;
- (id)tryGetValidLocationFromCache;
- (void)cancelGetLocation;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)updateCacheLocation:(id)arg1;
- (id)transferWrapFromCLLocaton:(id)arg1;
- (id)getLocationCachesFromFile;
- (void)saveLocationCacheToLocal:(id)arg1;
- (BOOL)retrivingLocation;
- (void)setRetrivingLocation:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)requiredHorizonAccuracy;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id)cacheInfo;
- (void)setCacheInfo:(id)arg1;
- (void).cxx_destruct;
@end

