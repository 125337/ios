@interface MMGConfig_ : NSObject
{
    BOOL _useVelocityCurve; // +0x8
    BOOL _useKeyframeAnimation; // +0x9
    BOOL _allowInterruptAnimation; // +0xa
    int _flickSpeed; // +0xc
    int _triggerAngle; // +0x10
    int _cardMaxRotateDegreeZ; // +0x14
    int _curveSampleCount; // +0x18
    double _animationPace; // +0x20
    double _velocityP1X; // +0x28
    double _velocityP1Y; // +0x30
    double _velocityP2X; // +0x38
    double _velocityP2Y; // +0x40
    double _positionP1X; // +0x48
    double _positionP1Y; // +0x50
    double _positionP2X; // +0x58
    double _positionP2Y; // +0x60
    double _continueAnimationDuration; // +0x68
}
+ (id)configFromBase64:(id)arg1;
- (id)toBase64;
- (int)flickSpeed;
- (void)setFlickSpeed:(int)arg1;
- (int)triggerAngle;
- (void)setTriggerAngle:(int)arg1;
- (int)cardMaxRotateDegreeZ;
- (void)setCardMaxRotateDegreeZ:(int)arg1;
- (double)animationPace;
- (void)setAnimationPace:(double)arg1;
- (BOOL)useVelocityCurve;
- (void)setUseVelocityCurve:(BOOL)arg1;
- (double)velocityP1X;
- (void)setVelocityP1X:(double)arg1;
- (double)velocityP1Y;
- (void)setVelocityP1Y:(double)arg1;
- (double)velocityP2X;
- (void)setVelocityP2X:(double)arg1;
- (double)velocityP2Y;
- (void)setVelocityP2Y:(double)arg1;
- (double)positionP1X;
- (void)setPositionP1X:(double)arg1;
- (double)positionP1Y;
- (void)setPositionP1Y:(double)arg1;
- (double)positionP2X;
- (void)setPositionP2X:(double)arg1;
- (double)positionP2Y;
- (void)setPositionP2Y:(double)arg1;
- (BOOL)useKeyframeAnimation;
- (void)setUseKeyframeAnimation:(BOOL)arg1;
- (double)continueAnimationDuration;
- (void)setContinueAnimationDuration:(double)arg1;
- (BOOL)allowInterruptAnimation;
- (void)setAllowInterruptAnimation:(BOOL)arg1;
- (int)curveSampleCount;
- (void)setCurveSampleCount:(int)arg1;
@end
