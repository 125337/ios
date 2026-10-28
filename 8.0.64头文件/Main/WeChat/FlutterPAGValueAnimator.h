@interface FlutterPAGValueAnimator : NSObject
{
    long long duration; // +0x8
    long long startTime; // +0x10
    long long playTime; // +0x18
    int repeatCount; // +0x20
    int repeatedTimes; // +0x24
    double animatedFraction; // +0x28
    unsigned long long animatorId; // +0x30
    id <PAGValueAnimatorListener> animatorListener; // +0x38
    BOOL running; // +0x40
}
+ (void)StartDisplayLink;
+ (void)StopDisplayLink;
+ (void)HandleDisplayLink:(id)arg1;
- (long long)AddAnimator:(id)arg1;
- (void)RemoveAnimator:(long long)arg1;
- (id)init;
- (void)onAnimationFrame:(long long)arg1;
- (void)setListener:(id)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (double)getAnimatedFraction;
- (void)setCurrentPlayTime:(long long)arg1;
- (BOOL)isPlaying;
- (int)repeatedTimes;
- (void)setRepeatedTimes:(int)arg1;
- (void)setRepeatCount:(int)arg1;
- (void)start;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)pause;
- (void)resume;
- (long long)animatorId;
- (void)dealloc;
- (void).cxx_destruct;
@end
