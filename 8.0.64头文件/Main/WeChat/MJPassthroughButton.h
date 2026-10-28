@interface MJPassthroughButton : MMUIButton
{
    double _lastTapTime; // +0x8
    id /* block */ _tapHandler; // +0x10
    double _throttleInterval; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id /* block */)tapHandler;
- (void)setTapHandler:(id /* block */)arg1;
- (double)throttleInterval;
- (void)setThrottleInterval:(double)arg1;
- (void).cxx_destruct;
@end
