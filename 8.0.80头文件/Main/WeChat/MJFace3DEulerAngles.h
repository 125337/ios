@interface MJFace3DEulerAngles : NSObject
{
    float _pitch; // +0x8
    float _yaw; // +0xc
    float _roll; // +0x10
}
- (id)description;
- (float)pitch;
- (void)setPitch:(float)arg1;
- (float)yaw;
- (void)setYaw:(float)arg1;
- (float)roll;
- (void)setRoll:(float)arg1;
@end
