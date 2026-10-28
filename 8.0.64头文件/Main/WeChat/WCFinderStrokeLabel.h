@interface WCFinderStrokeLabel : UILabel
{
    double _strokeWidth; // +0x8
    UIColor * _strokeColor; // +0x10
}
- (void)drawRect:(CGRect)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (void).cxx_destruct;
@end
