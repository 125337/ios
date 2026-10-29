@interface EditImageMosaicTool : MMObject <WCEditImageToolProtocol>
{
    CGPoint _initialPoint; // +0x8
    BOOL _initial; // +0x18
    CGPath * _path; // +0x20
    EditImageUIView * tView; // +0x28
    id <MosaicToolDelegate> _delegate; // +0x30
    UIColor * lineColor; // +0x38
    double lineWidth; // +0x40
    unsigned long long _style; // +0x48
}
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)createShapeLayer:(CGRect)arg1;
- (id)createView:(CGRect)arg1;
- (void)setInitialPoint:(CGPoint)arg1;
- (CGRect)addPathWithP2Point:(CGPoint)arg1 withP1Point:(CGPoint)arg2 withCPoint:(CGPoint)arg3;
- (id)getCurrentShapeLayer;
- (void)drawLayer;
- (id)getTraceView;
- (void)dealloc;
- (id)_delegate;
- (void)set_delegate:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (unsigned long long)_style;
- (void)set_style:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

