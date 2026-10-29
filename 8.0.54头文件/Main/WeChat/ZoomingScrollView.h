@interface ZoomingScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView * _photoImageView; // +0x8
    double _doubleTapExpandZoomScale; // +0x10
    id <ZoomingScrollViewDelegate> _zoomViewDelegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setPhotoImageView:(id)arg1;
- (void)updateZoomScaleWithTouchPoint:(CGPoint)arg1;
- (BOOL)isCurrMaximumZoomScale;
- (void)calcuateZoomScaleFillDoubleTapExpandUseMaximumZoomScale;
- (void)calcuateZoomScaleFillDoubleTapExpandUseCustomZoomScale;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)handleSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (CGRect)zoomRectForScale:(float)arg1 withCenter:(CGPoint)arg2;
- (id)photoImageView;
- (double)doubleTapExpandZoomScale;
- (void)setDoubleTapExpandZoomScale:(double)arg1;
- (id)zoomViewDelegate;
- (void)setZoomViewDelegate:(id)arg1;
- (void).cxx_destruct;
@end

