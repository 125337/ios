@interface QAppleLocationManager : QLocationManager <CLLocationManagerDelegate>
{
    CLLocationManager * _manager; // +0x8
}
- (id)initWithKey:(id)arg1;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)requestWhenInUseAuthorization;
- (long long)accuracyAuthorization;
- (int)authorizationStatus;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end
