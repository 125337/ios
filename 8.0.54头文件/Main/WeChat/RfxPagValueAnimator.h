@interface RfxPagValueAnimator : NSObject
{
    long long duration; // +0x8
    long long startTime; // +0x10
    long long playTime; // +0x18
    int repeatCount; // +0x20
    int repeatedTimes; // +0x24
    double animatedFraction; // +0x28
    id <RfxPagValueAnimatorListener> animatorListener; // +0x30
    mutex lock; // +0x38
    long long _animatorId; // +0x78
}
+ (void)StartDisplayLink;
+ (void)StopDisplayLink;
+ (void)HandleDisplayLink:(id)arg1;
+ (long long)AddAnimator:(id)arg1;
+ (void)RemoveAnimator:(long long)arg1;
- (id)init;
- (void)onAnimationFrame:(long long)arg1;
- (void)setListener:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (double)getAnimatedFraction;
- (void)setCurrentPlayTime:(long long)arg1;
- (BOOL)isPlaying;
- (void)setRepeatCount:(int)arg1;
- (void)start;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (long long)animatorId;
- (void)setAnimatorId:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

