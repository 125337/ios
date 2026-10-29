@interface WXVideoSlider : UISlider
{
    UIImage * _dotImage; // +0x8
    UIImage * _frontgroundImage; // +0x10
    UIImage * _backgroundImage; // +0x18
    UIColor * _frontgroundColor; // +0x20
    UIColor * _backgroundColor; // +0x28
    double _cornerRadius; // +0x30
    double _dotImgOverScrollMode; // +0x38
    double _sliderHeight; // +0x40
    double _additionalSliderHeightWhenHighlighted; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (void)initView;
- (void)setAnimateHighlighted:(BOOL)arg1 dotImage:(id)arg2;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (id)getBackgroundImage:(BOOL)arg1;
- (id)getFrontgroundImage:(BOOL)arg1;
- (double)cornerRadius;
- (id)dotImage;
- (void)setDotImage:(id)arg1;
- (id)frontgroundImage;
- (void)setFrontgroundImage:(id)arg1;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)frontgroundColor;
- (void)setFrontgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (double)dotImgOverScrollMode;
- (void)setDotImgOverScrollMode:(double)arg1;
- (double)sliderHeight;
- (void)setSliderHeight:(double)arg1;
- (double)additionalSliderHeightWhenHighlighted;
- (void)setAdditionalSliderHeightWhenHighlighted:(double)arg1;
- (void).cxx_destruct;
@end
