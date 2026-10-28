@interface MMLiveStrokeLabel : UILabel
{
    UIColor * _strokeColorFrom; // +0x8
    UIColor * _strokeColorTo; // +0x10
    UIColor * _fillColor; // +0x18
    double _strokeWidth; // +0x20
    CGPoint _strokeStartPoint; // +0x28
    CGPoint _strokeEndPoint; // +0x38
}
- (void)drawRect:(CGRect)arg1;
- (id)strokeColorFrom;
- (void)setStrokeColorFrom:(id)arg1;
- (id)strokeColorTo;
- (void)setStrokeColorTo:(id)arg1;
- (CGPoint)strokeStartPoint;
- (void)setStrokeStartPoint:(CGPoint)arg1;
- (CGPoint)strokeEndPoint;
- (void)setStrokeEndPoint:(CGPoint)arg1;
- (id)fillColor;
- (void)setFillColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (void).cxx_destruct;
@end
