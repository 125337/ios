@interface MMLiveLikeAnimationRoute : NSObject
{
    BOOL _isAnimating; // +0x8
    double _firstAnimationOffsetX; // +0x10
    double _secondAnimationOffsetX; // +0x18
    double _thirdAnimationOffsetX; // +0x20
    double _firstAnimationOffsetY; // +0x28
    double _secondAnimationOffsetY; // +0x30
    double _thirdAnimationOffsetY; // +0x38
    double _firstAnimationDuration; // +0x40
    double _secondAnimationDuration; // +0x48
    double _thirdAnimationDuration; // +0x50
    double _finalAnimationViewAlpha; // +0x58
}
- (void)startLiveLikeAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)startLiveLikeHeadImageAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)startStageAnimationWithDuration:(double)arg1 transformScale:(double)arg2 alpha:(double)arg3 animationOption:(unsigned long long)arg4 offsetX:(double)arg5 offsetY:(double)arg6 animationView:(id)arg7 completion:(id /* block */)arg8;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)firstAnimationOffsetX;
- (void)setFirstAnimationOffsetX:(double)arg1;
- (double)secondAnimationOffsetX;
- (void)setSecondAnimationOffsetX:(double)arg1;
- (double)thirdAnimationOffsetX;
- (void)setThirdAnimationOffsetX:(double)arg1;
- (double)firstAnimationOffsetY;
- (void)setFirstAnimationOffsetY:(double)arg1;
- (double)secondAnimationOffsetY;
- (void)setSecondAnimationOffsetY:(double)arg1;
- (double)thirdAnimationOffsetY;
- (void)setThirdAnimationOffsetY:(double)arg1;
- (double)firstAnimationDuration;
- (void)setFirstAnimationDuration:(double)arg1;
- (double)secondAnimationDuration;
- (void)setSecondAnimationDuration:(double)arg1;
- (double)thirdAnimationDuration;
- (void)setThirdAnimationDuration:(double)arg1;
- (double)finalAnimationViewAlpha;
- (void)setFinalAnimationViewAlpha:(double)arg1;
@end

