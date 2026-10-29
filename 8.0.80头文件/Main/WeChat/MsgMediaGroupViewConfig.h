@interface MsgMediaGroupViewConfig : NSObject
{
    MMGConfig_ * _config; // +0x8
}
+ (id)sharedConfig;
+ (int)flickSpeed;
+ (void)setFlickSpeed:(int)arg1;
+ (int)triggerAngle;
+ (void)setTriggerAngle:(int)arg1;
+ (int)cardMaxRotateDegreeZ;
+ (void)setCardMaxRotateDegreeZ:(int)arg1;
+ (double)animationPace;
+ (void)setAnimationPace:(double)arg1;
+ (double)bezierP1X;
+ (double)bezierP1Y;
+ (double)bezierP2X;
+ (double)bezierP2Y;
+ (BOOL)useVelocityCurve;
+ (void)setUseVelocityCurve:(BOOL)arg1;
+ (double)velocityBezierP1X;
+ (void)setVelocityBezierP1X:(double)arg1;
+ (double)velocityBezierP1Y;
+ (void)setVelocityBezierP1Y:(double)arg1;
+ (double)velocityBezierP2X;
+ (void)setVelocityBezierP2X:(double)arg1;
+ (double)velocityBezierP2Y;
+ (void)setVelocityBezierP2Y:(double)arg1;
+ (double)positionBezierP1X;
+ (void)setPositionBezierP1X:(double)arg1;
+ (double)positionBezierP1Y;
+ (void)setPositionBezierP1Y:(double)arg1;
+ (double)positionBezierP2X;
+ (void)setPositionBezierP2X:(double)arg1;
+ (double)positionBezierP2Y;
+ (void)setPositionBezierP2Y:(double)arg1;
+ (BOOL)useKeyframeAnimation;
+ (void)setUseKeyframeAnimation:(BOOL)arg1;
+ (double)continueAnimationDuration;
+ (void)setContinueAnimationDuration:(double)arg1;
+ (BOOL)allowInterruptAnimation;
+ (void)setAllowInterruptAnimation:(BOOL)arg1;
+ (int)curveSampleCount;
+ (void)setCurveSampleCount:(int)arg1;
+ (id)currentBase64;
+ (BOOL)applyBase64:(id)arg1;
+ (void)persistCurrent;
+ (id)resetBase64;
+ (id)linerBase64;
- (void)setup;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
