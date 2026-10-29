@interface MMNearbyPoiInfo : MMObject
{
    double _latitude; // +0x8
    double _longitude; // +0x10
    double _radius; // +0x18
    NSString * _poiName; // +0x20
}
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 radius:(double)arg3 name:(id)arg4;
- (double)latitude;
- (double)longitude;
- (double)radius;
- (id)poiName;
- (void).cxx_destruct;
@end

