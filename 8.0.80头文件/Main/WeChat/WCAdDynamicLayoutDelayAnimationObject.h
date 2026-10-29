@interface WCAdDynamicLayoutDelayAnimationObject : NSObject
{
    BOOL _repeat; // +0x8
    double _duration; // +0x10
    unsigned long long _animationOptions; // +0x18
    NSArray * _properties; // +0x20
    UIView * _view; // +0x28
    double _repeatInterval; // +0x30
    long long _repeatCount; // +0x38
    long long _repeatedCount; // +0x40
}
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned long long)animationOptions;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg1;
- (double)repeatInterval;
- (void)setRepeatInterval:(double)arg1;
- (long long)repeatCount;
- (void)setRepeatCount:(long long)arg1;
- (long long)repeatedCount;
- (void)setRepeatedCount:(long long)arg1;
- (void).cxx_destruct;
@end
