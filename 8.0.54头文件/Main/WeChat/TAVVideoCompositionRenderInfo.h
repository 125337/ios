@interface TAVVideoCompositionRenderInfo : NSObject
{
    CGSize _renderSize; // +0x8
    struct _time; // +0x18
    struct _timeRange; // +0x30
}
- (struct)time;
- (void)setTime:(struct)arg1;
- (CGSize)renderSize;
- (void)setRenderSize:(CGSize)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
@end

