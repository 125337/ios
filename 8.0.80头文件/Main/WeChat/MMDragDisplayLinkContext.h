@interface MMDragDisplayLinkContext : NSObject
{
    double _beginTopValue; // +0x8
    double _beginProgressValue; // +0x10
    double _beginAlpha; // +0x18
    double _endTopValue; // +0x20
    double _endProgressValue; // +0x28
    double _endAlpha; // +0x30
    double _totalDuration; // +0x38
    CAMediaTimingFunction * _timingFunction; // +0x40
}
- (double)changingTopValue:(double)arg1;
- (double)changingProgressValue:(double)arg1;
- (double)changingAlphaValue:(double)arg1;
- (double)beginTopValue;
- (void)setBeginTopValue:(double)arg1;
- (double)beginProgressValue;
- (void)setBeginProgressValue:(double)arg1;
- (double)beginAlpha;
- (void)setBeginAlpha:(double)arg1;
- (double)endTopValue;
- (void)setEndTopValue:(double)arg1;
- (double)endProgressValue;
- (void)setEndProgressValue:(double)arg1;
- (double)endAlpha;
- (void)setEndAlpha:(double)arg1;
- (double)totalDuration;
- (void)setTotalDuration:(double)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (void).cxx_destruct;
@end
