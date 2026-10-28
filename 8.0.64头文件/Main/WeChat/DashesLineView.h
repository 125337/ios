@interface DashesLineView : UIView
{
    BOOL _vertical; // +0x8
    UIColor * _lineColor; // +0x10
    double _lineWidth; // +0x18
}
- (id)init;
- (void)drawRect:(CGRect)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (double)lineWidth;
- (void)setLineWidth:(double)arg1;
- (BOOL)vertical;
- (void)setVertical:(BOOL)arg1;
- (void).cxx_destruct;
@end
