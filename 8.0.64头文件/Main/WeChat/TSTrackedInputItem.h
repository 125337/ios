@interface TSTrackedInputItem : TSTrackedItem <TSFinalTrackedItem>
{
    TSTrackedTapSequence * _tapSequence; // +0x8
    TSTrackedMotionSequence * _motionSequence; // +0x10
    double _timestamp; // +0x18
    double _duration; // +0x20
}
- (id)initWithTapSequence:(id)arg1 motionSequence:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)tapSequence;
- (void)setTapSequence:(id)arg1;
- (id)motionSequence;
- (void)setMotionSequence:(id)arg1;
- (double)timestamp;
- (void)setTimestamp:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end
