@interface MsgMediaGroupLayoutInfo : NSObject
{
    long long _zPosition; // +0x8
    double _scale; // +0x10
    double _rotateY; // +0x18
    double _rotateZ; // +0x20
    double _alpha; // +0x28
    double _maskAlpha; // +0x30
    CGPoint _center; // +0x38
}
- (long long)zPosition;
- (void)setZPosition:(long long)arg1;
- (CGPoint)center;
- (void)setCenter:(CGPoint)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (double)rotateY;
- (void)setRotateY:(double)arg1;
- (double)rotateZ;
- (void)setRotateZ:(double)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (double)maskAlpha;
- (void)setMaskAlpha:(double)arg1;
@end
