@interface JZLocationConverter : NSObject
+ (double)transformLat:(double)arg1 bdLon:(double)arg2;
+ (double)transformLon:(double)arg1 bdLon:(double)arg2;
+ (BOOL)outOfChina:(double)arg1 bdLon:(double)arg2;
+ (CLLocationCoordinate2D)gcj02Encrypt:(double)arg1 bdLon:(double)arg2;
+ (CLLocationCoordinate2D)gcj02Decrypt:(double)arg1 gjLon:(double)arg2;
+ (CLLocationCoordinate2D)bd09Decrypt:(double)arg1 bdLon:(double)arg2;
+ (CLLocationCoordinate2D)bd09Encrypt:(double)arg1 bdLon:(double)arg2;
+ (CLLocationCoordinate2D)wgs84ToGcj02:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)gcj02ToWgs84:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)wgs84ToBd09:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)gcj02ToBd09:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)bd09ToGcj02:(CLLocationCoordinate2D)arg1;
+ (CLLocationCoordinate2D)bd09ToWgs84:(CLLocationCoordinate2D)arg1;
@end

