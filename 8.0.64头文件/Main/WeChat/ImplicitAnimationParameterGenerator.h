@interface ImplicitAnimationParameterGenerator : NSObject
{
    int _reboundTimes; // +0x8
    unsigned long long _beginPosition; // +0x10
    double _minSpeedX; // +0x18
    double _maxSpeedX; // +0x20
    double _minSpeedY; // +0x28
    double _maxSpeedY; // +0x30
    double _accelerationY; // +0x38
    double _speedBuffY; // +0x40
    double _scaleSpeed; // +0x48
}
+ (id)presetGeneratorForType:(long long)arg1;
+ (id)presetGeneratorForType:(long long)arg1 isInteractive:(BOOL)arg2;
- (void)setAnimationParameterForView:(id)arg1;
- (BOOL)D2;
- (unsigned long long)beginPosition;
- (void)setBeginPosition:(unsigned long long)arg1;
- (double)minSpeedX;
- (void)setMinSpeedX:(double)arg1;
- (double)maxSpeedX;
- (void)setMaxSpeedX:(double)arg1;
- (int)reboundTimes;
- (void)setReboundTimes:(int)arg1;
- (double)minSpeedY;
- (void)setMinSpeedY:(double)arg1;
- (double)maxSpeedY;
- (void)setMaxSpeedY:(double)arg1;
- (double)accelerationY;
- (void)setAccelerationY:(double)arg1;
- (double)speedBuffY;
- (void)setSpeedBuffY:(double)arg1;
- (double)scaleSpeed;
- (void)setScaleSpeed:(double)arg1;
@end
