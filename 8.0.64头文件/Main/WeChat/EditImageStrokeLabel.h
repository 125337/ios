@interface EditImageStrokeLabel : UILabel
{
    UIColor * _strokeColor; // +0x8
    double _strokeWidth; // +0x10
    UIEdgeInsets _edgeInsets; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (CGRect)textRectForBounds:(CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)drawTextInRect:(CGRect)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
