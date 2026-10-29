@interface WAWatermarkView : UIView
{
    NSString * _watermarkText; // +0x8
    UIColor * _textColor; // +0x10
    UIFont * _textFont; // +0x18
    double _opacity; // +0x20
    double _rotationAngle; // +0x28
}
- (id)initWithText:(id)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)drawWatermark:(id)arg1 atPoint:(CGPoint)arg2 textSize:(CGSize)arg3 attributes:(id)arg4;
- (id)watermarkText;
- (void)setWatermarkText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)textFont;
- (void)setTextFont:(id)arg1;
- (double)opacity;
- (void)setOpacity:(double)arg1;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg1;
- (void).cxx_destruct;
@end
