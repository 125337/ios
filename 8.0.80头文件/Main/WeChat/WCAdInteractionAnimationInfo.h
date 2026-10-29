@interface WCAdInteractionAnimationInfo : NSObject <NSCoding>
{
    NSString * _resourceId; // +0x8
    double _duration; // +0x10
    double _delay; // +0x18
    unsigned long long _animationType; // +0x20
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)delay;
- (void)setDelay:(double)arg1;
- (unsigned long long)animationType;
- (void)setAnimationType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
