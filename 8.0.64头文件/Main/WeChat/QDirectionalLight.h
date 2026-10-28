@interface QDirectionalLight : QCommonLight
{
    _GLKVector3 _direction; // +0x18
}
- (id)init;
- (_GLKVector3)direction;
- (void)setDirection:(_GLKVector3)arg1;
@end
