@interface WCFinderDashedBorderRectangleView : UIView
{
    UIColor * _borderColor; // +0x8
    double _borderWidth; // +0x10
    double _cornerRadius; // +0x18
    NSArray * _dashPattern; // +0x20
    CAShapeLayer * _borderLayer; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupDefaults;
- (void)layoutSubviews;
- (void)setBorderColor:(id)arg1;
- (id)borderColor;
- (double)borderWidth;
- (void)setBorderWidth:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)dashPattern;
- (void)setDashPattern:(id)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (void).cxx_destruct;
@end
