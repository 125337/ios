@interface QGPPlaySkeletonAnimationParam : QGPBaseModel
{
    BOOL _repeat; // +0x8
    long long _index; // +0x10
    double _speed; // +0x18
}
- (long long)index;
- (void)setIndex:(long long)arg1;
- (double)speed;
- (void)setSpeed:(double)arg1;
- (BOOL)repeat;
- (void)setRepeat:(BOOL)arg1;
@end

