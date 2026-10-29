@interface WCAdDynamicLayoutDelayAnimationObject : NSObject
{
    double _duration; // +0x8
    unsigned long long _animationOptions; // +0x10
    NSArray * _properties; // +0x18
    UIView * _view; // +0x20
}
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned long long)animationOptions;
- (void)setAnimationOptions:(unsigned long long)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end

