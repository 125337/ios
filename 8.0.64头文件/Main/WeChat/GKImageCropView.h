@interface GKImageCropView : UIView <UIScrollViewDelegate>
{
    BOOL resizableCropArea; // +0x8
    UIScrollView * scrollView; // +0x10
    UIImageView * imageView; // +0x18
    GKImageCropOverlayView * cropOverlayView; // +0x20
    double xOffset; // +0x28
    double yOffset; // +0x30
    double _faktoredWidth; // +0x38
    double _faktoredHeight; // +0x40
}
- (void)setImageToCrop:(id)arg1;
- (id)imageToCrop;
- (void)setCropSize:(CGSize)arg1;
- (CGSize)cropSize;
- (id)croppedImage;
- (CGRect)_calcVisibleRectForResizeableCropArea;
- (CGRect)_calcVisibleRectForCropArea;
- (CGAffineTransform)_orientationTransformedRectOfImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)cropOverlayView;
- (void)setCropOverlayView:(id)arg1;
- (BOOL)resizableCropArea;
- (void)setResizableCropArea:(BOOL)arg1;
- (double)xOffset;
- (void)setXOffset:(double)arg1;
- (double)yOffset;
- (void)setYOffset:(double)arg1;
- (double)faktoredWidth;
- (void)setFaktoredWidth:(double)arg1;
- (double)faktoredHeight;
- (void)setFaktoredHeight:(double)arg1;
- (void).cxx_destruct;
@end
