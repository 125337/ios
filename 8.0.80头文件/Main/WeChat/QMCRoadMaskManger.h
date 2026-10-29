@interface QMCRoadMaskManger : NSObject
+ (void)drawRoadMask:(id)arg1 onMapView:(id)arg2;
+ (void)removeRoadMaskOnMapView:(id)arg1;
+ (id)inflatePolyline:(id)arg1 byMeters:(double)arg2;
+ (void)normalAtIndex:(unsigned long long)arg1 coords:(CLLocationCoordinate2D *)arg2 count:(unsigned long long)arg3 outNx:(double *)arg4 outNy:(double *)arg5;
@end
