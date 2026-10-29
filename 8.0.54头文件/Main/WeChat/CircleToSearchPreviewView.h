@interface CircleToSearchPreviewView : MMUIImageView
{
    CircleToSearchOverlayView * _overlayView; // +0x8
    MMUIView * _fakeOverlayView; // +0x10
    CGRect _normalizedFocusFrame; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)overlayView;
- (id)fakeOverlayView;
- (CGRect)focusFrame;
- (void)focusOn:(CGRect)arg1 andAnimationDuration:(double)arg2;
- (void)showFakeOverlayView;
- (void)hideFakeOverlayView;
- (CGRect)normalizedFocusFrame;
- (void)setOverlayView:(id)arg1;
- (void)setFakeOverlayView:(id)arg1;
- (void).cxx_destruct;
@end

