@interface MMMusicMVEditorCardThickSlider : MMMVSafeSlider
{
    double _thickness; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (id)trackImgWithColor:(id)arg1;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (double)thickness;
- (void)setThickness:(double)arg1;
@end

