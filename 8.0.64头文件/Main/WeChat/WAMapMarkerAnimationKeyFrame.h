@interface WAMapMarkerAnimationKeyFrame : NSObject
{
    NSValue * _coordValue; // +0x8
    double _rotate; // +0x10
    double _duration; // +0x18
}
- (id)coordValue;
- (void)setCoordValue:(id)arg1;
- (double)rotate;
- (void)setRotate:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void).cxx_destruct;
@end
