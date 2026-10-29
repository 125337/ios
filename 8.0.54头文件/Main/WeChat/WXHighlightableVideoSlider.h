@interface WXHighlightableVideoSlider : WXVideoSlider
{
    BOOL _hasTouched; // +0x8
    UIImage * _interactiveFrontgroundImage; // +0x10
    UIImage * _interactiveBackgroundImage; // +0x18
    UIImage * _customDotActiveImage; // +0x20
    UIImage * _customDotInactiveImage; // +0x28
}
- (void)setHasTouched:(BOOL)arg1;
- (id)dotImage;
- (id)interactiveBackgroundImage;
- (id)interactiveFrontgroundImage;
- (id)getBackgroundImage;
- (id)getFrontgroundImage;
- (id)getBackgroundImage:(BOOL)arg1;
- (id)getFrontgroundImage:(BOOL)arg1;
- (id)imageWithHeight:(double)arg1 alpha:(double)arg2;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (BOOL)hasTouched;
- (void)setInteractiveFrontgroundImage:(id)arg1;
- (void)setInteractiveBackgroundImage:(id)arg1;
- (id)customDotActiveImage;
- (void)setCustomDotActiveImage:(id)arg1;
- (id)customDotInactiveImage;
- (void)setCustomDotInactiveImage:(id)arg1;
- (void).cxx_destruct;
@end

