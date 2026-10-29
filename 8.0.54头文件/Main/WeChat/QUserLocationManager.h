@interface QUserLocationManager : NSObject <QLocationManagerDelegate>
{
    QMapContext * _mapContext; // +0x8
    id <QUserLocationManagerDelegate> _delegate; // +0x10
    QLocationManager * _manager; // +0x18
    QLocationMarkerWrapper * _locationMarkerWrapper; // +0x20
}
+ (id)correctLocation:(id)arg1;
- (void)setMapContext:(id)arg1;
- (void)dealloc;
- (void)constructLocator:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)requestTempPrecisedLocation:(id)arg1 completion:(id /* block */)arg2;
- (void)requestWhenInUseAuthorization;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;
- (void)startUpdatingHeading;
- (void)stopUpdatingHeading;
- (double)desiredAccuracy;
- (void)setDesiredAccuracy:(double)arg1;
- (double)distanceFilter;
- (void)setDistanceFilter:(double)arg1;
- (double)headingFilter;
- (long long)accuracyAuthorization;
- (int)authorizationStatus;
- (void)setHeadingFilter:(double)arg1;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (BOOL)pausesLocationUpdatesAutomatically;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (void)configureUserLocationPresentation:(id)arg1;
- (void)setLocationHidden:(BOOL)arg1;
- (void)setLocationCompassHidden:(BOOL)arg1;
- (void)setLocationRedlineHidden:(BOOL)arg1;
- (void)updateLocationAnimatedWithMapPoint:(struct)arg1 course:(double)arg2 horizontalAccuracy:(double)arg3;
- (void)updateLocationWithMapPoint:(struct)arg1 course:(double)arg2;
- (void)updateLocationWithHeading:(double)arg1;
- (void)setup;
- (id)init;
- (id)generateLocatorPayload:(id)arg1;
- (id)mapContext;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (id)locationMarkerWrapper;
- (void)setLocationMarkerWrapper:(id)arg1;
- (void).cxx_destruct;
@end

