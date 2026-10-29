@interface CircleToSearchScrollView : MMUIScrollView <UIScrollViewDelegate>
{
    double _bottomInset; // +0x8
    double _maxBottomInset; // +0x10
    CircleToSearchPreviewView * _previewView; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)previewView;
- (void)updateScrollContentInset;
- (void)setBottomInset:(double)arg1;
- (void)setMaxBottomInset:(double)arg1;
- (CGRect)normalizedFocusFrame;
- (void)loadPreviewImage:(id)arg1 andFrame:(CGRect)arg2;
- (void)updatePreviewImageFrame:(CGRect)arg1 andAnimated:(BOOL)arg2;
- (void)focusOn:(CGRect)arg1 andAnimationDuration:(double)arg2;
- (void)centerOnFocusAnimated:(BOOL)arg1;
- (void)showFakeOverlayView;
- (void)hideFakeOverlayView;
- (double)bottomInset;
- (double)maxBottomInset;
- (void)setPreviewView:(id)arg1;
- (void).cxx_destruct;
@end

