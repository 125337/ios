@interface WCVideoCropImageSliderTouch : NSObject
{
    double _time; // +0x8
    UITouch * _touch; // +0x10
    CGPoint _point; // +0x18
}
- (CGPoint)point;
- (void)setPoint:(CGPoint)arg1;
- (double)time;
- (void)setTime:(double)arg1;
- (id)touch;
- (void)setTouch:(id)arg1;
- (void).cxx_destruct;
@end
