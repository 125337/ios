@interface MMLocationMgr : MMUserService <PBMessageObserverDelegate, CLLocationManagerDelegate, MMServiceProtocol>
{
    MMLocationDB * m_locationDB; // +0x8
    MMLocationPoiDetailDB * m_poidetailDB; // +0x10
    CLLocationManager * m_locationMgrForAuthorization; // +0x18
    MMLocationCacheStorage * _locationCacheStorage; // +0x20
    CGPath * _chinaBorder; // +0x28
    MMLocationMgrUseInfoHandle * _useInfoHandler; // +0x30
    NSMutableArray * _reversGeolocators; // +0x38
    NSMutableArray * _fourthReversGeolocators; // +0x40
    RSAEncryptObject * _m_rsaEncryptObject; // +0x48
    AESEncryptObject * _m_aesEncryptObject; // +0x50
    MMLocationCacheItem * _m_realtimeLocationCache; // +0x58
}
+ (void)logForAccuracyAuthorizationChangedWithAuthType:(int)arg1 scene:(int)arg2;
+ (void)logForAccuracyAuthorizationOperationWithOpResult:(int)arg1 scene:(int)arg2;
+ (int)rangeTypeForDistance:(double)arg1;
- (id)getExtraInfoFromAddressDic:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)init;
- (void)dealloc;
- (id)requestForAuthorizationFor:(unsigned long long)arg1;
- (void)requestTemporaryFullAccuracyAuthorization:(id /* block */)arg1;
- (long long)currentLocationAccuracyAuthorization;
- (unsigned int)authStatusFor:(unsigned long long)arg1;
- (BOOL)isLocationSupportFullAccuracy;
- (id)authorizationLocationMgr;
- (unsigned long long)startUpdateGPSLocationWithoutRequestAuthorization;
- (unsigned long long)startUpdateGPSLocation:(BOOL)arg1 authScene:(unsigned long long)arg2;
- (void)stopUpdateGPSLocation:(unsigned long long)arg1;
- (unsigned long long)startUpdateHeadingFor:(unsigned long long)arg1;
- (void)stopUpdateHeading:(unsigned long long)arg1;
- (void)addSDKLocationUse:(unsigned long long)arg1 mgrType:(unsigned long long)arg2 updateType:(unsigned long long)arg3;
- (void)delSDKLocationUse:(unsigned long long)arg1;
- (unsigned long long)manualInitLocation;
- (void)manualDeallocLocationWithTag:(unsigned long long)arg1;
- (id)getCLLocationManagerByTag:(unsigned long long)arg1;
- (void)manualStopUpdateLocationWithTag:(unsigned long long)arg1;
- (void)manualStartRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (void)manualStopRangingBeaconsInRegion:(unsigned long long)arg1 withUUIDArray:(id)arg2;
- (id)getLocationCacheStorage;
- (void)loadLocationCacheStorage;
- (void)saveLocationCacheStorage;
- (void)updateLocationCache:(id)arg1 isMarsLocation:(BOOL)arg2;
- (id)getLastLocationCache;
- (id)getLastLocationCache:(BOOL)arg1;
- (id)getRealtimeLocationCache;
- (double)p_locationAccuracy:(id)arg1;
- (BOOL)p_isAccurateLocation:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)onUpdateLocationFromLocationManager:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (id)keyForLocation:(CLLocationCoordinate2D)arg1;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1 type:(long long)arg2;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1 type:(long long)arg2 language:(unsigned long long)arg3;
- (id)getAddressByLocation:(CLLocationCoordinate2D)arg1 floorName:(id)arg2 type:(long long)arg3 language:(unsigned long long)arg4;
- (unsigned long long)updateAddressByLocation:(CLLocationCoordinate2D)arg1;
- (unsigned long long)updateAddressByLocation:(CLLocationCoordinate2D)arg1 type:(long long)arg2;
- (unsigned long long)updateAddressByLocation:(CLLocationCoordinate2D)arg1 type:(long long)arg2 scene:(unsigned long long)arg3;
- (unsigned long long)updateAddressByLocation:(CLLocationCoordinate2D)arg1 type:(long long)arg2 scene:(unsigned long long)arg3 language:(unsigned long long)arg4;
- (unsigned long long)updateAddressByIndoorLocation:(id)arg1;
- (unsigned long long)requestGeoCoderLocation:(CLLocationCoordinate2D)arg1 scene:(unsigned long long)arg2 language:(unsigned long long)arg3;
- (void)stopGeoAddress:(id)arg1;
- (void)stopUpdateAddressByTag:(unsigned long long)arg1;
- (id)findDictionaryByKey:(id)arg1;
- (id)findFourthDictionaryByKey:(id)arg1;
- (id)parseAddressFrom:(id)arg1;
- (id)shortAddressFromAddressDic:(id)arg1;
- (id)cityFromAddressDic:(id)arg1;
- (id)evolvedCityFromAddressDic:(id)arg1;
- (id)evolvedAdCodeFromAddressDic:(id)arg1;
- (id)countryFromAddressDic:(id)arg1;
- (id)countryCodeFromAddressDic:(id)arg1;
- (BOOL)isCoordinateInChinaPartly:(CLLocationCoordinate2D)arg1;
- (BOOL)isCoordinateInChinaCompletely:(CLLocationCoordinate2D)arg1;
- (void)requestWXGeocodeWithParam:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getPoiDetail:(id)arg1;
- (void)updatePoiDetail:(id)arg1;
- (id)getReportWithLocation:(BOOL)arg1 WithSSID:(BOOL)arg2;
- (id)getEncryptReportInfo:(id)arg1;
- (id)getEncryptReportWithLocation:(BOOL)arg1 WithSSID:(BOOL)arg2;
- (id)getAESKeyWithRSAEncrypted;
- (void)updateWifiInfo;
- (void)clearLocationCache;
- (id)locationCacheStorage;
- (void)setLocationCacheStorage:(id)arg1;
- (CGPath *)chinaBorder;
- (void)setChinaBorder:(CGPath *)arg1;
- (id)useInfoHandler;
- (void)setUseInfoHandler:(id)arg1;
- (id)reversGeolocators;
- (void)setReversGeolocators:(id)arg1;
- (id)fourthReversGeolocators;
- (void)setFourthReversGeolocators:(id)arg1;
- (id)m_rsaEncryptObject;
- (void)setM_rsaEncryptObject:(id)arg1;
- (id)m_aesEncryptObject;
- (void)setM_aesEncryptObject:(id)arg1;
- (id)m_realtimeLocationCache;
- (void)setM_realtimeLocationCache:(id)arg1;
- (void).cxx_destruct;
@end
