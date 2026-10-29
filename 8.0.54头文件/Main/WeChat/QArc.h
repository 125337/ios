@interface QArc : QShape <QOverlay>
{
    int _pointCount; // +0x8
    struct * _internalArcPoints; // +0x10
    double _radius; // +0x18
    double _tangentAngle; // +0x20
    struct _centerPoint; // +0x28
    struct _boundingMapRect; // +0x38
}
+ (id)arcWithStartPoint:(CLLocationCoordinate2D)arg1 endPoint:(CLLocationCoordinate2D)arg2 passedPoint:(CLLocationCoordinate2D)arg3;
+ (id)arcWithStartPoint:(CLLocationCoordinate2D)arg1 endPoint:(CLLocationCoordinate2D)arg2 tangentAngle:(double)arg3;
- (id)initWithStartPoint:(CLLocationCoordinate2D)arg1 endPoint:(CLLocationCoordinate2D)arg2 passedPoint:(CLLocationCoordinate2D)arg3;
- (id)initWithStartPoint:(CLLocationCoordinate2D)arg1 endPoint:(CLLocationCoordinate2D)arg2 tangentAngle:(double)arg3;
- (void)calculateCircleCenterWithStart:(struct)arg1 end:(struct)arg2 passed:(struct)arg3;
- (double)convertTangleLineAngle:(double)arg1;
- (void)calculateCircleCenterWithTangentLine:(struct)arg1 endPoint:(struct)arg2 angle:(double)arg3;
- (void)generateArcPoints:(BOOL)arg1 start:(struct)arg2 end:(struct)arg3;
- (void)calculateBoundingMapRect;
- (void)dealloc;
- (struct)boundingMapRect;
- (void)setBoundingMapRect:(struct)arg1;
- (struct *)internalArcPoints;
- (void)setInternalArcPoints:(struct *)arg1;
- (struct)centerPoint;
- (void)setCenterPoint:(struct)arg1;
- (double)radius;
- (void)setRadius:(double)arg1;
- (int)pointCount;
- (void)setPointCount:(int)arg1;
- (double)tangentAngle;
- (void)setTangentAngle:(double)arg1;
@end

