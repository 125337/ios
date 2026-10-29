@interface EcsNearbyFlutterViewController : MMFlutterViewController <CLLocationManagerDelegate, LocationRetrieveDelegate>
{
    id /* block */ _getPoiCallback; // +0x70
    CLLocationManager * _locationManager; // +0x78
}
+ (id)createViewController;
- (void)viewDidLoad;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)startGettingLocation;
- (void)promptForLBSUsageWarnning;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (id /* block */)getPoiCallback;
- (void)setGetPoiCallback:(id /* block */)arg1;
- (id)locationManager;
- (void)setLocationManager:(id)arg1;
- (void).cxx_destruct;
@end
