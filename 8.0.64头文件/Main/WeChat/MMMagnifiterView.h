@interface MMMagnifiterView : UIView
{
    UIImageView * _imageView; // +0x8
    ScreenshotView * _screenshotView; // +0x10
    double _width; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setTouchPoint:(CGPoint)arg1;
- (void)setViewToMagnify:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)screenshotView;
- (void)setScreenshotView:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (void).cxx_destruct;
@end
