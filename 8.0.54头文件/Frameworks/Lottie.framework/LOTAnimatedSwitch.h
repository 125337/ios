@interface LOTAnimatedSwitch : LOTAnimatedControl
{
    double _onStartProgress; // +0x8
    double _onEndProgress; // +0x10
    double _offStartProgress; // +0x18
    double _offEndProgress; // +0x20
    CGPoint _touchTrackingStart; // +0x28
    BOOL _on; // +0x38
    BOOL _suppressToggle; // +0x39
    BOOL _toggleToState; // +0x3a
    BOOL _interactiveGesture; // +0x3b
}
+ (id)switchNamed:(id)arg1;
+ (id)switchNamed:(id)arg1 inBundle:(id)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setAnimationComp:(id)arg1;
- (void)setProgressRangeForOnState:(double)arg1 toProgress:(double)arg2;
- (void)setProgressRangeForOffState:(double)arg1 toProgress:(double)arg2;
- (void)setOn:(BOOL)arg1;
- (void)setOn:(BOOL)arg1 animated:(BOOL)arg2;
- (id)accessibilityValue;
- (void)_toggle;
- (void)_toggleAndSendActions;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)isOn;
- (BOOL)interactiveGesture;
- (void)setInteractiveGesture:(BOOL)arg1;
@end

