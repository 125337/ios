@interface TAVVideoTransitionRenderInfo : NSObject
{
    double _tweenFactor; // +0x8
    CGSize _renderSize; // +0x10
    struct _time; // +0x20
}
- (struct)time;
- (void)setTime:(struct)arg1;
- (CGSize)renderSize;
- (void)setRenderSize:(CGSize)arg1;
- (double)tweenFactor;
- (void)setTweenFactor:(double)arg1;
@end
