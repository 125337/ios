@interface ACLifeKeeper : NSObject <CLLocationManagerDelegate>
{
    unsigned long long _backgroundTaskIdentifier; // +0x8
    BOOL _isActive; // +0x10
    CLLocationManager * _locationManager; // +0x18
}
- (id)init;
- (void)active;
- (void)deactive;
- (void)startBackgroundTask;
- (void)startBackgroundTaskIfNeeded;
- (void)stopBackgroundTask;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)locationManager;
- (void)startUpdatingLocation:(BOOL)arg1;
- (void)stopUpdatingLocation;
- (void)_locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (BOOL)isActive;
- (void).cxx_destruct;
@end
