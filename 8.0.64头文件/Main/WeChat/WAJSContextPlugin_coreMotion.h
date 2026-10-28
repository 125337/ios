@interface WAJSContextPlugin_coreMotion : WAJSContextPluginBase <TencentLBSLocationManagerDelegate, IWAJSContextPlugin_coreMotion>
{
    CMMotionManager * _motionMgr; // +0x8
    TencentLBSLocationManager * m_locationMgr; // +0x10
    TencentLBSLocationManager * m_headingMgr; // +0x18
    unsigned int[7] m_moduleStatus; // +0x20
    long long _lastOrientation; // +0x40
    double lastTimeUpdateLocation; // +0x48
    BOOL _enableIndoor; // +0x50
    NSString * _mapSubKey; // +0x58
    unsigned long long _coordType; // +0x60
}
- (id)init;
- (void)dealloc;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (BOOL)isRunningModule:(int)arg1;
- (BOOL)startModule:(int)arg1;
- (void)setModuleInterval:(double)arg1 name:(int)arg2;
- (BOOL)isModuleRunning:(int)arg1;
- (void)stopModule:(int)arg1;
- (void)stopModule:(int)arg1 suspend:(BOOL)arg2;
- (void)moduleDidStop:(int)arg1;
- (BOOL)enableAccelerometer;
- (void)stopAccelerometer;
- (id)getOpenId;
- (BOOL)enableCompass;
- (void)stopCompass;
- (void)updateParamByDic:(id)arg1;
- (void)stopPreviousLocationUpdate;
- (BOOL)enableLocationUpdate;
- (BOOL)enableBackgroundLocationUpdate;
- (void)stopLocationUpdate;
- (void)stopBackgroundLocationUpdate;
- (void)forceStopForegroundLocating;
- (void)forceStopBackgroundLocating;
- (void)forceStopLocating;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)tencentLBSLocationManager:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)enableDeviceOrientationChangeListening;
- (void)stopDeviceOrientationChangeListening;
- (void)didRotate:(id)arg1;
- (BOOL)startDeviceAxisChange;
- (void)stopDeviceAxisChange;
- (BOOL)startGyroscope;
- (void)stopGyroscope;
- (BOOL)isUpdatingLocation;
- (BOOL)isUpdatingForegroundLocation;
- (BOOL)isUpdatingBackgroundLocation;
- (id)mapSubKey;
- (void)setMapSubKey:(id)arg1;
- (BOOL)enableIndoor;
- (void)setEnableIndoor:(BOOL)arg1;
- (unsigned long long)coordType;
- (void)setCoordType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
