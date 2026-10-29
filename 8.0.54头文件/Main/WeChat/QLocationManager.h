@interface QLocationManager : NSObject <CLLocationManagerDelegate, QLocationManagerAPIProcotol>
{
    id <QLocationManagerDelegate> _delegate; // +0x8
    id <QLocationManagerAPIProcotol> _manager; // +0x10
}
- (id)initWithKey:(id)arg1;
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
- (void)setHeadingFilter:(double)arg1;
- (BOOL)allowsBackgroundLocationUpdates;
- (void)setAllowsBackgroundLocationUpdates:(BOOL)arg1;
- (int)headingOrientation;
- (void)setHeadingOrientation:(int)arg1;
- (BOOL)pausesLocationUpdatesAutomatically;
- (long long)accuracyAuthorization;
- (int)authorizationStatus;
- (void)setPausesLocationUpdatesAutomatically:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)manager;
- (void)setManager:(id)arg1;
- (void).cxx_destruct;
@end

