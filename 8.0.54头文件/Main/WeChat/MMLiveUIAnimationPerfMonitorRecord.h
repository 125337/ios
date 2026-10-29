@interface MMLiveUIAnimationPerfMonitorRecord : MMLiveAnimationPerfMonitorRecord
{
    CALayer * _animationLayer; // +0x30
    CAAnimation * _animation; // +0x38
}
+ (id)getMonitorUIAnimationKey:(id)arg1;
+ (id)tryGetAnimationState:(id)arg1;
+ (double)getAnimationAbsoluteBeginTime:(id)arg1;
- (id)initWithAnimationLayer:(id)arg1 animationView:(id)arg2 animation:(id)arg3;
- (CGRect)currPresentFrame;
- (void)parseAnimation;
- (BOOL)isAnimationValid;
- (id)getRecordDesc;
- (id)getUniqueKey;
- (id)animationLayer;
- (void)setAnimationLayer:(id)arg1;
- (id)animation;
- (void)setAnimation:(id)arg1;
- (void).cxx_destruct;
@end

