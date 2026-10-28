@interface CornerView : UIView
{
    BOOL _leftTop; // +0x8
    BOOL _rightTop; // +0x9
    BOOL _rightBottom; // +0xa
    BOOL _leftBottom; // +0xb
    int _lineSize; // +0xc
    double _borderWidth; // +0x10
    double _cornerRadius; // +0x18
    UIColor * _strokeColor; // +0x20
}
- (void)drawRect:(CGRect)arg1;
- (BOOL)leftTop;
- (void)setLeftTop:(BOOL)arg1;
- (BOOL)rightTop;
- (void)setRightTop:(BOOL)arg1;
- (BOOL)rightBottom;
- (void)setRightBottom:(BOOL)arg1;
- (BOOL)leftBottom;
- (void)setLeftBottom:(BOOL)arg1;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)strokeColor;
- (void)setStrokeColor:(id)arg1;
- (int)lineSize;
- (void)setLineSize:(int)arg1;
- (void).cxx_destruct;
@end
