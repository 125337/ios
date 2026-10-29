@interface TencentLBSLocationUtils : NSObject
+ (double)distanceBetweenTwoCoordinate2D:(const CLLocationCoordinate2D *)arg1 coordinateTwo:(const CLLocationCoordinate2D *)arg2;
+ (double)distanceBetweenTwoCLLocations:(id)arg1 locationTwo:(id)arg2;
+ (double)distanceBetweenTwoTencentLBSLocations:(id)arg1 locationTwo:(id)arg2;
+ (BOOL)isInRegionWithLatitude:(double)arg1 longitude:(double)arg2 addTaiwan:(BOOL)arg3;
+ (CLLocationCoordinate2D)WGS84TOGCJ02:(CLLocationCoordinate2D)arg1;
+ (BOOL)isInChinaPolygonWithLatitude:(double)arg1 longitude:(double)arg2;
+ (BOOL)isInChinaWithLatitude:(double)arg1 longitude:(double)arg2;
@end

