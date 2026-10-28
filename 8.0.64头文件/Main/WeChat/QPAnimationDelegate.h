@interface QPAnimationDelegate : NSObject <CAAnimationDelegate>
{
    id /* block */ _onStart; // +0x8
    id /* block */ _onComplete; // +0x10
}
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)onStart;
- (void)setOnStart:(id /* block */)arg1;
- (id /* block */)onComplete;
- (void)setOnComplete:(id /* block */)arg1;
- (void).cxx_destruct;
@end
