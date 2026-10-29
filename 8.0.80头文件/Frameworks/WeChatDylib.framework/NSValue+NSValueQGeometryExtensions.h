@interface NSValue (NSValueQGeometryExtensions)
+ (id)valueWithQMapPoint:(struct)arg1;
+ (id)valueWithQMapSize:(struct)arg1;
+ (id)valueWithQMapRect:(struct)arg1;
+ (id)valueWithCoordinate:(CLLocationCoordinate2D)arg1;
- (struct)QMapPointValue;
- (struct)QMapSizeValue;
- (struct)QMapRectValue;
- (CLLocationCoordinate2D)coordinateValue;
@end
