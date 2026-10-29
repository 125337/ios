@interface BezierCurveEvaluator : NSObject
{
    double _ax; // +0x8
    double _bx; // +0x10
    double _cx; // +0x18
    double _ay; // +0x20
    double _by; // +0x28
    double _cy; // +0x30
}
- (id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2;
- (id)initWithTimingFunction:(id)arg1;
- (double)solveCurveXForT:(double)arg1 epsilon:(double)arg2;
- (double)curveProgress:(double)arg1;
@end
