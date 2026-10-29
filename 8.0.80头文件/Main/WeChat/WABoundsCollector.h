@interface WABoundsCollector : NSObject
{
    UIView * _toView; // +0x8
    double _minx; // +0x10
    double _miny; // +0x18
    double _maxx; // +0x20
    double _maxy; // +0x28
}
- (CGRect)collectBoundsFromView:(id)arg1 ToView:(id)arg2;
- (void)collectView:(id)arg1;
- (void)collectPoint:(CGPoint)arg1;
- (id)toView;
- (void)setToView:(id)arg1;
- (double)minx;
- (void)setMinx:(double)arg1;
- (double)miny;
- (void)setMiny:(double)arg1;
- (double)maxx;
- (void)setMaxx:(double)arg1;
- (double)maxy;
- (void)setMaxy:(double)arg1;
- (void).cxx_destruct;
@end
