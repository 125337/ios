@interface OVCLocationManager : NSObject
{
    BOOL _isReversingGeocodeLocation; // +0x8
    CLGeocoder * _geocoder; // +0x10
}
- (id)init;
- (void)startLocatingWithLocations:(id)arg1 timeoutInSeconds:(double)arg2 completionHandler:(id /* block */)arg3;
- (BOOL)isReversingGeocodeLocation;
- (void)setIsReversingGeocodeLocation:(BOOL)arg1;
- (id)geocoder;
- (void).cxx_destruct;
@end
