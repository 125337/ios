@interface KindaDashLineUIView : UIView
{
    BOOL _vertical; // +0x8
    UIColor * _strokeColor; // +0x10
    double _lineWidth; // +0x18
    CAShapeLayer * _shapePayer; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (BOOL)vertical;
- (void)setVertical:(BOOL)arg1;
- (id)shapePayer;
- (void)setShapePayer:(id)arg1;
- (void).cxx_destruct;
@end

