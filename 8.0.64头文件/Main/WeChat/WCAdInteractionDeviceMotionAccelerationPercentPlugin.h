@interface WCAdInteractionDeviceMotionAccelerationPercentPlugin : WCAdInteractionDeviceMotionEventHandlePlugin
{
    double _triggerGForce; // +0x8
}
- (id)handleEventParams:(id)arg1;
- (double)triggerGForce;
- (void)setTriggerGForce:(double)arg1;
@end
