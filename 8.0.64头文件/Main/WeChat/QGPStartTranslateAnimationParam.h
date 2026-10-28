@interface QGPStartTranslateAnimationParam : QGPBaseModel
{
    BOOL _needRotate; // +0x8
    NSArray * _positions; // +0x10
    double _duration; // +0x18
    double _initRotation; // +0x20
}
- (id)positions;
- (void)setPositions:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)initRotation;
- (void)setInitRotation:(double)arg1;
- (BOOL)needRotate;
- (void)setNeedRotate:(BOOL)arg1;
- (void).cxx_destruct;
@end
