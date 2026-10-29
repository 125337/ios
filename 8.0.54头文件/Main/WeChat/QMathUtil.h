@interface QMathUtil : NSObject
+ (id)singleton;
+ (double)radian2Angle:(double)arg1;
+ (double)angleToRadian:(double)arg1;
+ (double)calcLineSlope:(struct)arg1 pointB:(struct)arg2;
+ (double)calcLineAngle:(struct)arg1 pointB:(struct)arg2;
+ (double)calcLineAngleOffset:(double)arg1 offsetAngle:(double)arg2;
+ (double)isPointInLineSide:(struct)arg1 endPoint:(struct)arg2 checkPoint:(struct)arg3;
+ (double)calculateDistanceForPointA:(struct)arg1 pointB:(struct)arg2;
+ (double)calculateCircleCenterAndRadiusWithThreePoints:(struct)arg1 endPoint:(struct)arg2 passedPoint:(struct)arg3 center:(struct *)arg4;
+ (double)calculateCircleCenterAndRadiusWithTangentAngle:(double)arg1 startPoint:(struct)arg2 endPoint:(struct)arg3 center:(struct *)arg4 clockwise:(BOOL)arg5;
+ (BOOL)validateDeltaKChanged:(const struct *)arg1 centerSide:(double)arg2 end:(const struct *)arg3 isClockwise:(BOOL)arg4 start:(const struct *)arg5;
+ (id)generateArcPointWithCenter:(struct)arg1 startPoint:(struct)arg2 endPoint:(struct)arg3 radius:(double)arg4 clockwise:(BOOL)arg5;
@end

