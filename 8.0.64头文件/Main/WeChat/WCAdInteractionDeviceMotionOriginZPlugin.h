@interface WCAdInteractionDeviceMotionOriginZPlugin : WCAdInteractionDeviceMotionEventHandlePlugin
{
    BOOL _clockwise; // +0x8
}
- (id)handleEventParams:(id)arg1;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
@end
