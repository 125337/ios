@interface QPolygon : QMultiPoint
{
    NSArray * _interiorPolygons; // +0x38
}
+ (id)polygonWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithPoints:(struct *)arg1 count:(unsigned long long)arg2;
+ (id)polygonWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
+ (id)polygonWithPoints:(struct *)arg1 count:(unsigned long long)arg2 interiorPolygons:(id)arg3;
- (void)setUserData:(id)arg1;
- (id)userData;
- (struct)boundingMapRect;
- (id)initWithWithCoordinates:(CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(struct *)arg1 count:(unsigned long long)arg2;
- (id)interiorPolygons;
- (void)setInteriorPolygons:(id)arg1;
- (void).cxx_destruct;
@end

