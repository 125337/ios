@interface MMFinderLiveGlobalRankShiningConfig : NSObject
{
    double _initialScale; // +0x8
    double _initialAlpha; // +0x10
    double _targetScale; // +0x18
    double _targetAlpha; // +0x20
    double _animationDuration; // +0x28
    double _startTime; // +0x30
    CGPoint _normalizedOrigin; // +0x38
    CGPoint _absoluteCenter; // +0x48
}
+ (id)configForAudienceJoin;
+ (id)configForGlobalRankSignWithRank:(unsigned long long)arg1;
+ (id)configWithNormalizedOrigin:(CGPoint)arg1 initScale:(double)arg2 initAlpha:(double)arg3 targetScale:(double)arg4 targetAlpha:(double)arg5 duration:(double)arg6 startTime:(double)arg7;
+ (id)configWithAbsoluteCenter:(CGPoint)arg1 initScale:(double)arg2 initAlpha:(double)arg3 targetScale:(double)arg4 targetAlpha:(double)arg5 duration:(double)arg6 startTime:(double)arg7;
- (CGPoint)normalizedOrigin;
- (void)setNormalizedOrigin:(CGPoint)arg1;
- (CGPoint)absoluteCenter;
- (void)setAbsoluteCenter:(CGPoint)arg1;
- (double)initialScale;
- (void)setInitialScale:(double)arg1;
- (double)initialAlpha;
- (void)setInitialAlpha:(double)arg1;
- (double)targetScale;
- (void)setTargetScale:(double)arg1;
- (double)targetAlpha;
- (void)setTargetAlpha:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
@end

