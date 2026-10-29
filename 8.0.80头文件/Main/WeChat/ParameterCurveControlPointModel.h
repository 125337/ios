@interface ParameterCurveControlPointModel : NSObject
{
    double _Time; // +0x8
    double _ParameterValue; // +0x10
}
- (double)Time;
- (void)setTime:(double)arg1;
- (double)ParameterValue;
- (void)setParameterValue:(double)arg1;
@end
