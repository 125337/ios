@interface MMGrowAnimStopDelegate : NSObject <CAAnimationDelegate>
{
    id /* block */ _onStop; // +0x8
}
- (id)initWithCompletion:(id /* block */)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id /* block */)onStop;
- (void)setOnStop:(id /* block */)arg1;
- (void).cxx_destruct;
@end
