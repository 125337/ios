@interface QGPRotation : QGPBaseModel
{
    double _rotationX; // +0x8
    double _rotationY; // +0x10
    double _rotationZ; // +0x18
}
+ (id)instanceWithRotationX:(double)arg1 RotationY:(double)arg2 RotationZ:(double)arg3;
- (double)rotationX;
- (void)setRotationX:(double)arg1;
- (double)rotationY;
- (void)setRotationY:(double)arg1;
- (double)rotationZ;
- (void)setRotationZ:(double)arg1;
@end
