@interface MMFinderLiveOlyBarragePubbleAnimationRoute : NSObject
{
    NSMutableArray * _positionValues; // +0x8
    NSMutableArray * _opacityValues; // +0x10
    NSMutableArray * _scaleValues; // +0x18
    NSMutableArray * _timeValues; // +0x20
    double _duration; // +0x28
    CGSize _containerSize; // +0x30
}
- (id)positionValues;
- (id)scaleValues;
- (id)opacityValues;
- (id)timeValues;
- (CGSize)containerSize;
- (void)setContainerSize:(CGSize)arg1;
- (void)setPositionValues:(id)arg1;
- (void)setOpacityValues:(id)arg1;
- (void)setScaleValues:(id)arg1;
- (void)setTimeValues:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end
