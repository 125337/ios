@interface MMLiveStrokedLabel : UILabel
{
    UIColor * _strokeColor; // +0x8
    double _strokeWidth; // +0x10
}
- (void)drawTextInRect:(CGRect)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (void).cxx_destruct;
@end

