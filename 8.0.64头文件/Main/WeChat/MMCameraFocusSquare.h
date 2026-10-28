@interface MMCameraFocusSquare : UIView
{
    CABasicAnimation * _selectionBlink; // +0x8
    double _widthMax; // +0x10
    double _widthMin; // +0x18
    double _borderColorRedComponent; // +0x20
    double _borderColorGreenComponent; // +0x28
    double _borderColorBlueComponent; // +0x30
    double _borderColorAlphaComponent; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initBorderColorAndColorComponents;
- (void)drawRect:(CGRect)arg1;
- (void)drawRectWithFirstPoint:(CGPoint)arg1 secondPoint:(CGPoint)arg2;
- (void)updatePoint:(CGPoint)arg1;
- (double)widthMax;
- (void)setWidthMax:(double)arg1;
- (double)widthMin;
- (void)setWidthMin:(double)arg1;
- (double)borderColorRedComponent;
- (void)setBorderColorRedComponent:(double)arg1;
- (double)borderColorGreenComponent;
- (void)setBorderColorGreenComponent:(double)arg1;
- (double)borderColorBlueComponent;
- (void)setBorderColorBlueComponent:(double)arg1;
- (double)borderColorAlphaComponent;
- (void)setBorderColorAlphaComponent:(double)arg1;
- (void).cxx_destruct;
@end
