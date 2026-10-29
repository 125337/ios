@interface ScreenshotView : UIView
{
    UIView * _viewToMagnify; // +0x8
    CGPoint _touchPoint; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setTouchPoint:(CGPoint)arg1;
- (void)drawRect:(CGRect)arg1;
- (id)viewToMagnify;
- (void)setViewToMagnify:(id)arg1;
- (CGPoint)touchPoint;
- (void).cxx_destruct;
@end
