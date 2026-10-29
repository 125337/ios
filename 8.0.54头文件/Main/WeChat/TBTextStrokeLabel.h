@interface TBTextStrokeLabel : UILabel
{
    UIColor * _strokeColor; // +0x8
    double _strokeWidth; // +0x10
}
+ (id)strokeLabelWithText:(id)arg1 font:(id)arg2;
- (void)drawTextInRect:(CGRect)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (double)strokeWidth;
- (void)setStrokeWidth:(double)arg1;
- (void).cxx_destruct;
@end

