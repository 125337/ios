@interface SpringInterpolator : NSObject
{
    double _value; // +0x8
    double _velocity; // +0x10
    double _target; // +0x18
    double _mass; // +0x20
    double _stiffness; // +0x28
    double _damping; // +0x30
}
- (id)initWithValue:(double)arg1 velocity:(double)arg2 target:(double)arg3 mass:(double)arg4 stiffness:(double)arg5 damping:(double)arg6;
- (double)stepWithDeltaTime:(double)arg1;
- (BOOL)isAtRest;
- (double)value;
- (void)setValue:(double)arg1;
- (double)velocity;
- (void)setVelocity:(double)arg1;
- (double)target;
- (void)setTarget:(double)arg1;
- (double)mass;
- (void)setMass:(double)arg1;
- (double)stiffness;
- (void)setStiffness:(double)arg1;
- (double)damping;
- (void)setDamping:(double)arg1;
@end
