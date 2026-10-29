@interface MMRingView : UIView
{
    UIColor * _color; // +0x8
    double _from; // +0x10
    double _to; // +0x18
    double _lineWidth; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)setColor:(id)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setFrom:(double)arg1;
- (void)setTo:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)color;
- (double)from;
- (double)to;
- (double)lineWidth;
- (void).cxx_destruct;
@end

