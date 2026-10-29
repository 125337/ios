@interface MMLiveHapticsParameterCurveControlPoint : NSObject
{
    double _timeSinceBeginOfCurve; // +0x8
    double _value; // +0x10
}
+ (id)controlPointWithTimeSinceBeginOfCurve:(double)arg1 value:(double)arg2;
- (id)initWithTimeSinceBeginOfCurve:(double)arg1 value:(double)arg2;
- (id)coreHapticsParameterCurveControlPoint;
- (double)timeSinceBeginOfCurve;
- (void)setTimeSinceBeginOfCurve:(double)arg1;
- (double)value;
- (void)setValue:(double)arg1;
@end
