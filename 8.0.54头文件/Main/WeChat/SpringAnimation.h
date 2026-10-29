@interface SpringAnimation : NSObject
{
    double _stiffness; // +0x8
    double _damping; // +0x10
    double _mass; // +0x18
    double _initialVelocity; // +0x20
    double _fromValue; // +0x28
    double _toValue; // +0x30
    double _zeta; // +0x38
    double _omega0; // +0x40
    double _omega1; // +0x48
    double _v0; // +0x50
}
- (id)initWithStiffness:(double)arg1 damping:(double)arg2 mass:(double)arg3 initialVelocity:(double)arg4 fromValue:(double)arg5 toValue:(double)arg6;
- (double)curveFunction:(double)arg1;
- (double)stiffness;
- (double)damping;
- (double)mass;
- (double)initialVelocity;
- (double)fromValue;
- (void)setFromValue:(double)arg1;
- (double)toValue;
- (void)setToValue:(double)arg1;
- (double)zeta;
- (void)setZeta:(double)arg1;
- (double)omega0;
- (void)setOmega0:(double)arg1;
- (double)omega1;
- (void)setOmega1:(double)arg1;
- (double)v0;
- (void)setV0:(double)arg1;
@end

