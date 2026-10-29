@interface MMLiveLikeAnimationRoute : NSObject
{
    BOOL _isAnimating; // +0x8
    double _firstAnimationOffsetX; // +0x10
    double _secondAnimationOffsetX; // +0x18
    double _thirdAnimationOffsetX; // +0x20
    double _fourthAnimationOffsetX; // +0x28
    double _firstAnimationOffsetY; // +0x30
    double _secondAnimationOffsetY; // +0x38
    double _thirdAnimationOffsetY; // +0x40
    double _fourthAnimationOffsetY; // +0x48
    double _firstAnimationDuration; // +0x50
    double _secondAnimationDuration; // +0x58
    double _thirdAnimationDuration; // +0x60
    double _fourthAnimationDuration; // +0x68
    double _finalAnimationViewAlpha; // +0x70
}
- (void)startLiveLikeAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)startLiveLikeHeadImageAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)startLiveLDoubleClickikeAnimation:(id)arg1 completion:(id /* block */)arg2;
- (void)startStageAnimationWithDuration:(double)arg1 transformScale:(double)arg2 alpha:(double)arg3 animationOption:(unsigned long long)arg4 offsetX:(double)arg5 offsetY:(double)arg6 animationView:(id)arg7 completion:(id /* block */)arg8;
- (void)startStageAnimationWithDuration:(double)arg1 transformScale:(double)arg2 transformRotation:(double)arg3 alpha:(double)arg4 animationOption:(unsigned long long)arg5 offsetX:(double)arg6 offsetY:(double)arg7 animationView:(id)arg8 completion:(id /* block */)arg9;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (double)firstAnimationOffsetX;
- (void)setFirstAnimationOffsetX:(double)arg1;
- (double)secondAnimationOffsetX;
- (void)setSecondAnimationOffsetX:(double)arg1;
- (double)thirdAnimationOffsetX;
- (void)setThirdAnimationOffsetX:(double)arg1;
- (double)fourthAnimationOffsetX;
- (void)setFourthAnimationOffsetX:(double)arg1;
- (double)firstAnimationOffsetY;
- (void)setFirstAnimationOffsetY:(double)arg1;
- (double)secondAnimationOffsetY;
- (void)setSecondAnimationOffsetY:(double)arg1;
- (double)thirdAnimationOffsetY;
- (void)setThirdAnimationOffsetY:(double)arg1;
- (double)fourthAnimationOffsetY;
- (void)setFourthAnimationOffsetY:(double)arg1;
- (double)firstAnimationDuration;
- (void)setFirstAnimationDuration:(double)arg1;
- (double)secondAnimationDuration;
- (void)setSecondAnimationDuration:(double)arg1;
- (double)thirdAnimationDuration;
- (void)setThirdAnimationDuration:(double)arg1;
- (double)fourthAnimationDuration;
- (void)setFourthAnimationDuration:(double)arg1;
- (double)finalAnimationViewAlpha;
- (void)setFinalAnimationViewAlpha:(double)arg1;
@end
