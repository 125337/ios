@interface WCAdInteractionDeviceMotionAxisZPercentPlugin : WCAdInteractionDeviceMotionEventHandlePlugin
{
    BOOL _clockwise; // +0x8
    double _triggerDegree; // +0x10
}
- (id)handleEventParams:(id)arg1;
- (double)triggerDegree;
- (void)setTriggerDegree:(double)arg1;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
@end

