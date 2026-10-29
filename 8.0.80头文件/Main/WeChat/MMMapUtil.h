@interface MMMapUtil : MMObject
+ (struct)QMapRectForCoordinateRegion:(struct)arg1;
+ (struct)QMapRect:(struct *)arg1 KeepCenterUnionPoint:(struct)arg2;
+ (struct)QMapRect:(struct *)arg1 MakeCenterUnionPoint:(struct)arg2;
+ (double)convertSpeedToKMH:(double)arg1;
+ (BOOL)QCoordinateRegion:(struct)arg1 ContainsPoint:(struct)arg2;
+ (CLLocationCoordinate2D)convertWGS84toGCJ02:(CLLocationCoordinate2D)arg1;
+ (double)normalizeZoomLevel:(double)arg1;
+ (struct *)createMapPointForAnnotations:(id)arg1;
@end
