@interface QGPVector3 : QGPBaseModel
{
    double _x; // +0x8
    double _y; // +0x10
    double _z; // +0x18
}
- (_GLKVector3)toGLKVector3;
- (double)x;
- (void)setX:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)z;
- (void)setZ:(double)arg1;
@end

