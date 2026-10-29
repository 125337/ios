@interface TencentLBSLocationManager : NSObject <CLLocationManagerDelegate>
{
    BOOL _pausesLocationUpdatesAutomatically; // +0x8
    BOOL _allowsBackgroundLocationUpdates; // +0x9
    BOOL _indoorMode; // +0xa
    BOOL _isStartPedometer; // +0xb
    BOOL _isAllowIndoorPdrStart; // +0xc
    BOOL _started; // +0xd
    BOOL _isDelloc; // +0xe
    BOOL _isSingleLocationUpdate; // +0xf
    BOOL _isSingleLocationFinish; // +0x10
    BOOL _isHighAccuracyMode; // +0x11
    BOOL _beginTimer; // +0x12
    BOOL _firstRequestPoi; // +0x13
    BOOL _beaconStarted; // +0x14
    BOOL _isFirstBleLocation; // +0x15
    BOOL _initAll; // +0x16
    BOOL _isBleRequest; // +0x17
    int _headingOrientation; // +0x18
    int _authorizationStatus; // +0x1c
    NSString * _apiKey; // +0x20
    NSString * _smallAppKey; // +0x28
    id <TencentLBSLocationManagerDelegate> _delegate; // +0x30
    double _distanceFilter; // +0x38
    double _desiredAccuracy; // +0x40
    long long _activityType; // +0x48
    double _headingFilter; // +0x50
    long long _accuracyAuthorization; // +0x58
    unsigned long long _requestLevel; // +0x60
    unsigned long long _coordinateType; // +0x68
    long long _poiUpdateInterval; // +0x70
    NSString * _openid; // +0x78
    NSString * _idfa; // +0x80
    CLLocationManager * _locationManager; // +0x88
    NSString * _appName; // +0x90
    NSString * _cacheWifi; // +0x98
    CLLocation * _location; // +0xa0
    TencentLBSWifiLocation * _linkWifiLocation; // +0xa8
    id /* block */ _completionBlock; // +0xb0
    NSObject<OS_dispatch_source> * _timer; // +0xb8
    TencentLBSLocationReGeocoder * _reGeocoder; // +0xc0
    TencentLBSTrace * _trace; // +0xc8
    TencentLBSLocation * _tencentLocation; // +0xd0
    TencentLBSLocation * _cacheLocation; // +0xd8
    TencentLBSLocation * _lastGpsLocation; // +0xe0
    double _locationTimeout; // +0xe8
    double _highAccuracyTimeOut; // +0xf0
    double _expirationTime; // +0xf8
    unsigned long long _singleRequestLevel; // +0x100
    long long _areaStat; // +0x108
    NSMutableArray * _beacons; // +0x110
    double _lastBeaconUpdate; // +0x118
    double _singleLocationStartTime; // +0x120
    double _iBeaconScanCallBackTime; // +0x128
    double _rejectbleTime; // +0x130
    NSThread * _runThread; // +0x138
    TencentLBSPedometer * _tencentPedometer; // +0x140
    NSNumber * _numOfSteps; // +0x148
    id /* block */ _pdrResultCallback; // +0x150
    id /* block */ _bleResultBlock; // +0x158
    id /* block */ _singleFixContinueBlock; // +0x160
}
+ (void)setTencentCoreLogWtihBlock:(id /* block */)arg1;
+ (long long)accuracyAuthorization;
+ (void)upLoadData;
+ (id)getLocationLog;
+ (void)newLocationLog;
- (id)init;
- (void)initManagerOnLocationThread;
- (void)asynUpdateStepValue:(id)arg1;
- (void)asynPerformCallBackOnThreadwithDictionary:(id)arg1;
- (void)asynPerformSingleLocationCallBack;
- (void)asynPerformSingleLocaitionUpdateOnLocationThread;
- (void)setDistanceFilter:(double)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (void)setActivityType:(long long)arg1;
- (void)setHeadingFilter:(double)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestLevel:(unsigned long long)arg1;
- (void)setCoordinateType:(unsigned long long)arg1;
- (void)setApiKey:(id)arg1;
- (void)setSmallAppKey:(id)arg1;
- (void)setIndoorMode:(BOOL)arg1;
- (void)setOpenid:(id)arg1;
- (void)setIdfa:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestAlwaysAuthorization;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1 completion:(id /* block */)arg2;
- (void)requestTemporaryFullAccuracyAuthorizationWithPurposeKey:(id)arg1;
- (id)getLBSSDKVersion;
- (id)getLBSSDKbuild;
- (BOOL)requestLocationWithCompletionBlock:(id /* block */)arg1;
- (BOOL)requestLocationWithRequestLevel:(unsigned long long)arg1 locationTimeout:(double)arg2 isStartIndoorLocation:(BOOL)arg3 useHighAccuracyLocation:(BOOL)arg4 useHighAccuracyLocationExpiratTime:(double)arg5 completionBlock:(id /* block */)arg6;
- (double)getIntervalSinceStartSingleLocation:(double)arg1;
- (void)startiBeaconScan;
- (void)stopiBeaconScan;
- (void)cancelRequestLocation;
- (void)startRangingAllRegions;
- (void)stopRangingAllRegions;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (void)dismissHeadingCalibrationDisplay;
- (id)createDispatchTimerWithInterval:(double)arg1;
- (void)timerEventHandler;
- (void)addSingleFixBlockWhenStartContinue;
- (void)destroySingleFixBlockWhenStartContinue;
- (void)traceAndUpdate:(id)arg1 timestamp:(double)arg2 error:(id)arg3;
- (void)finishUpdateLocation:(id)arg1 error:(id)arg2;
- (void)singleLocationUpdate:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)handleSystemLocation:(id)arg1;
- (void)handleSystemContinueLocation:(id)arg1;
- (void)handleSystemSingleLocation:(id)arg1;
- (void)requestLinkWifiLocationUpdate:(BOOL)arg1;
- (void)getLocationWithWifi:(id)arg1 force:(BOOL)arg2;
- (long long)getAccAuthorizationFromLocMgr:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)updateBeaconsAsync:(id)arg1 inRegion:(id)arg2;
- (void)initTencentLBSBleManager;
- (void)handleSingleBleLocation:(id)arg1;
- (void)selectBleLoc84or02ToFinishUpdate;
- (void)selectPdrLoc84or02ToFinishUpdate;
- (void)handleBleContinueLocation:(id)arg1;
- (void)handleBleResponseWith:(id)arg1 withError:(id)arg2 withLevel:(unsigned long long)arg3 withCoorType:(unsigned long long)arg4 isSingleCallback:(BOOL)arg5;
- (void)setPDRCallback;
- (id)getIndoorPdrSteps;
- (BOOL)isTencentLocationValid:(id)arg1 withThreshold:(double)arg2;
- (void)resetTencentPDR;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)runBlockAsync:(id /* block */)arg1;
- (void)tencentLBSLogPrintInit;
- (void)tencentLBSLogreset;
- (id)getLogStringWithLocation:(id)arg1;
- (void)dealloc;
- (id)apiKey;
- (id)smallAppKey;
- (id)delegate;
- (double)distanceFilter;
- (double)desiredAccuracy;
- (BOOL)pausesLocationUpdatesAutomatically;
- (BOOL)allowsBackgroundLocationUpdates;
- (long long)activityType;
- (double)headingFilter;
- (int)headingOrientation;
- (long long)accuracyAuthorization;
- (void)setAccuracyAuthorization:(long long)arg1;
- (int)authorizationStatus;
- (void)setAuthorizationStatus:(int)arg1;
- (unsigned long long)requestLevel;
- (unsigned long long)coordinateType;
- (long long)poiUpdateInterval;
- (void)setPoiUpdateInterval:(long long)arg1;
- (BOOL)indoorMode;
- (BOOL)isStartPedometer;
- (void)setIsStartPedometer:(BOOL)arg1;
- (BOOL)isAllowIndoorPdrStart;
- (void)setIsAllowIndoorPdrStart:(BOOL)arg1;
- (id)openid;
- (id)idfa;
- (id)locationManager;
- (void)setLocationManager:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)cacheWifi;
- (void)setCacheWifi:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)linkWifiLocation;
- (void)setLinkWifiLocation:(id)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)reGeocoder;
- (void)setReGeocoder:(id)arg1;
- (id)trace;
- (void)setTrace:(id)arg1;
- (id)tencentLocation;
- (void)setTencentLocation:(id)arg1;
- (id)cacheLocation;
- (void)setCacheLocation:(id)arg1;
- (id)lastGpsLocation;
- (void)setLastGpsLocation:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)isDelloc;
- (void)setIsDelloc:(BOOL)arg1;
- (BOOL)isSingleLocationUpdate;
- (void)setIsSingleLocationUpdate:(BOOL)arg1;
- (BOOL)isSingleLocationFinish;
- (void)setIsSingleLocationFinish:(BOOL)arg1;
- (double)locationTimeout;
- (void)setLocationTimeout:(double)arg1;
- (double)highAccuracyTimeOut;
- (void)setHighAccuracyTimeOut:(double)arg1;
- (double)expirationTime;
- (void)setExpirationTime:(double)arg1;
- (BOOL)isHighAccuracyMode;
- (void)setIsHighAccuracyMode:(BOOL)arg1;
- (unsigned long long)singleRequestLevel;
- (void)setSingleRequestLevel:(unsigned long long)arg1;
- (long long)areaStat;
- (void)setAreaStat:(long long)arg1;
- (BOOL)beginTimer;
- (void)setBeginTimer:(BOOL)arg1;
- (BOOL)firstRequestPoi;
- (void)setFirstRequestPoi:(BOOL)arg1;
- (BOOL)beaconStarted;
- (void)setBeaconStarted:(BOOL)arg1;
- (id)beacons;
- (void)setBeacons:(id)arg1;
- (double)lastBeaconUpdate;
- (void)setLastBeaconUpdate:(double)arg1;
- (double)singleLocationStartTime;
- (void)setSingleLocationStartTime:(double)arg1;
- (double)iBeaconScanCallBackTime;
- (void)setIBeaconScanCallBackTime:(double)arg1;
- (BOOL)isFirstBleLocation;
- (void)setIsFirstBleLocation:(BOOL)arg1;
- (double)rejectbleTime;
- (void)setRejectbleTime:(double)arg1;
- (BOOL)initAll;
- (void)setInitAll:(BOOL)arg1;
- (BOOL)isBleRequest;
- (void)setIsBleRequest:(BOOL)arg1;
- (id)runThread;
- (void)setRunThread:(id)arg1;
- (id)tencentPedometer;
- (void)setTencentPedometer:(id)arg1;
- (id)numOfSteps;
- (void)setNumOfSteps:(id)arg1;
- (id /* block */)pdrResultCallback;
- (void)setPdrResultCallback:(id /* block */)arg1;
- (id /* block */)bleResultBlock;
- (void)setBleResultBlock:(id /* block */)arg1;
- (id /* block */)singleFixContinueBlock;
- (void)setSingleFixContinueBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
