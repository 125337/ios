@interface NSValue (NSValueQGeometryExtensions)
+ (id)valueWithFloatRange:(struct)arg1;
+ (id)valueWithLzRange:(_LzRange)arg1;
+ (id)valueWithQMapPoint:(struct)arg1;
+ (id)valueWithQMapSize:(struct)arg1;
+ (id)valueWithQMapRect:(struct)arg1;
+ (id)valueWithCoordinate:(CLLocationCoordinate2D)arg1;
- (struct)floatRangeValue;
- (_LzRange)lzrangeValue;
- (long long)lzRangeCompare:(id)arg1;
- (MCOffsetRange)MCOffsetRangeValue;
- (struct)QMapPointValue;
- (struct)QMapSizeValue;
- (struct)QMapRectValue;
- (CLLocationCoordinate2D)coordinateValue;
@end
