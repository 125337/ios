@interface WCCanvasAbilitySlider : UISlider
{
    double _backgroundHeight; // +0x8
    UIColor * _frontgroundColor; // +0x10
    UIColor * _backgroundColor; // +0x18
    UIImage * _backgroundImage; // +0x20
    UIImage * _frontgroundImage; // +0x28
}
- (id)init;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (id)getImageWithColor:(id)arg1;
- (id)getImageWithImage:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrontgroundColor:(id)arg1;
- (void)setFrontgroundImage:(id)arg1;
- (double)backgroundHeight;
- (void)setBackgroundHeight:(double)arg1;
- (id)frontgroundColor;
- (id)backgroundColor;
- (id)backgroundImage;
- (void)setBackgroundImage:(id)arg1;
- (id)frontgroundImage;
- (void).cxx_destruct;
@end

