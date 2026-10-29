@interface MMLiveViewLoadingAnimationDelegate : NSObject <CAAnimationDelegate>
{
    long long _startTime; // +0x8
    MMLiveView * _liveView; // +0x10
    id /* block */ _overTimeBlock; // +0x18
}
- (void)start;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (id /* block */)overTimeBlock;
- (void)setOverTimeBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

