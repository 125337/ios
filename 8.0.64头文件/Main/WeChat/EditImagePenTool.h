@interface EditImagePenTool : MMObject <WCEditImageToolProtocol>
{
    CGPath * _path; // +0x8
    CGPoint _initialPoint; // +0x10
    BOOL _initial; // +0x20
    CAShapeLayer * slayer; // +0x28
    UIImageView * tView; // +0x30
    CGPath * _subpath; // +0x38
    CAShapeLayer * _tmpLayer; // +0x40
    UIColor * lineColor; // +0x48
    double lineWidth; // +0x50
}
- (id)init;
- (id)createLayer:(CGRect)arg1;
- (id)createView:(CGRect)arg1;
- (void)setInitialPoint:(CGPoint)arg1;
- (CGRect)addPathWithP2Point:(CGPoint)arg1 withP1Point:(CGPoint)arg2 withCPoint:(CGPoint)arg3;
- (void)drawLayer;
- (id)getCurrentShapeLayer;
- (void)dealloc;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (void).cxx_destruct;
@end
