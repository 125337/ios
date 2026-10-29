@interface PAGAnimator : NSObject
{
    shared_ptr<pag::PAGAnimator> animator; // +0x8
    shared_ptr<pag::AnimatorListener> animatorListener; // +0x18
}
- (id)initWithUpdater:(id)arg1;
- (void)addListener:(id)arg1;
- (void)removeListener:(id)arg1;
- (BOOL)isSync;
- (void)setSync:(BOOL)arg1;
- (long long)duration;
- (void)setDuration:(long long)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (double)progress;
- (void)setProgress:(double)arg1;
- (BOOL)isRunning;
- (void)start;
- (void)cancel;
- (void)update;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

