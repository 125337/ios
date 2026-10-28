@interface WCAdInteractionKeyframeAnimationInfo : WCAdInteractionAnimationInfo
{
    BOOL _remainPreviousAnimation; // +0x28
    NSArray * _timingFunctions; // +0x30
    NSArray * _values; // +0x38
    NSArray * _keyTimes; // +0x40
    double _repeatCount; // +0x48
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)timingFunctions;
- (void)setTimingFunctions:(id)arg1;
- (id)values;
- (void)setValues:(id)arg1;
- (id)keyTimes;
- (void)setKeyTimes:(id)arg1;
- (double)repeatCount;
- (void)setRepeatCount:(double)arg1;
- (BOOL)remainPreviousAnimation;
- (void)setRemainPreviousAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end
