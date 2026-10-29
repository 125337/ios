@interface WCFinderLocationManager : NSObject <LocationRetrieveDelegate, ILocationMgrExt>
{
    BOOL _updating; // +0x8
    BOOL _debugOn; // +0x9
    id <WCFinderLocationManagerDelegate> _delegate; // +0x10
    WCFinderCachedLocation * _cachedMapLocation; // +0x18
    LocationRetriever * _locationRetriever; // +0x20
    CLLocation * _currentLocation; // +0x28
    double _currentLocationTimestamp; // +0x30
    CLLocation * _debugLocation; // +0x38
    NSCache * _locationCodeCache; // +0x40
    WCFinderGetLocationToken * _token; // +0x48
    NSMutableArray * _complectionArray; // +0x50
    double _enterBackgroundTimestamp; // +0x58
    WCFinderMMKVKeyModel * _mmkv; // +0x60
}
- (id)initWithMMKV:(id)arg1;
- (void)dealloc;
- (void)setCurrentLocation:(id)arg1;
- (void)loadCacheMapLocation;
- (void)storeCahceMapLocationToMMKV;
- (void)setupLocationRetriever;
- (void)startRetrieveLocationFor:(unsigned long long)arg1 requiredMapLocation:(BOOL)arg2;
- (void)observeEnterForeground;
- (void)observeEnterBackground;
- (id)cachedLocation;
- (id)getLocationFor:(unsigned long long)arg1 withCompletion:(id /* block */)arg2 failed:(id /* block */)arg3;
- (id)getMapLocationFor:(unsigned long long)arg1 withCompletion:(id /* block */)arg2 failed:(id /* block */)arg3;
- (BOOL)getCodeFromLocation:(id)arg1 completion:(id /* block */)arg2 failed:(id /* block */)arg3;
- (BOOL)setLocationDebugOn:(BOOL)arg1 debugLocation:(id)arg2;
- (BOOL)isLocationDebugOn;
- (BOOL)isLocationServiceAuthrizedFor:(unsigned long long)arg1;
- (void)overTimeAction;
- (BOOL)stopUpdateRealTimeLocation;
- (id)locationKeyWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationCallbackTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (id)locationCodeCache;
- (void)registerLocationServiceAuthorizationStatusListener;
- (void)requestAuthorizationFor:(unsigned long long)arg1;
- (void)unregisterLocationServiceAuthorizationStatusListener;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cachedMapLocation;
- (void)setCachedMapLocation:(id)arg1;
- (id)locationRetriever;
- (void)setLocationRetriever:(id)arg1;
- (id)currentLocation;
- (double)currentLocationTimestamp;
- (void)setCurrentLocationTimestamp:(double)arg1;
- (BOOL)isUpdating;
- (void)setUpdating:(BOOL)arg1;
- (BOOL)isDebugOn;
- (void)setDebugOn:(BOOL)arg1;
- (id)debugLocation;
- (void)setDebugLocation:(id)arg1;
- (void)setLocationCodeCache:(id)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (id)complectionArray;
- (void)setComplectionArray:(id)arg1;
- (double)enterBackgroundTimestamp;
- (void)setEnterBackgroundTimestamp:(double)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

