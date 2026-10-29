@interface TSTrackedMotionSequence : TSTrackedItem <TSFinalTrackedItem>
{
    NSArray * _accelerationItems; // +0x8
    NSArray * _gyroItems; // +0x10
    NSArray * _motionItems; // +0x18
}
- (id)initWithAccelerationItems:(id)arg1 gyroItems:(id)arg2 motionItems:(id)arg3;
- (double)timestamp;
- (double)duration;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accelerationItems;
- (void)setAccelerationItems:(id)arg1;
- (id)gyroItems;
- (void)setGyroItems:(id)arg1;
- (id)motionItems;
- (void)setMotionItems:(id)arg1;
- (void).cxx_destruct;
@end

