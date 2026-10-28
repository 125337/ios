@interface MMImagePreviewActionSheet_ImageView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    UIView * _containerView; // +0x8
    UIImageView * _imageView; // +0x10
    MMImageScrollViewHelper * _scrollViewHelper; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)containerView;
- (id)imageView;
- (void)zoomToRect:(CGRect)arg1 animated:(BOOL)arg2;
- (id)viewForZooming;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)displayImage:(id)arg1 withFrame:(CGRect)arg2;
- (void)updateScrollable;
- (id)getImage;
- (id)getImageView;
- (CGRect)calculateImageRealFitRectForPreview:(CGSize)arg1 maxSize:(CGSize)arg2 contentRatio:(CGPoint)arg3;
- (CGSize)calculateImageFitSizeForPreview:(CGSize)arg1 maxSize:(CGSize)arg2;
- (void)setContainerView:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)scrollViewHelper;
- (void)setScrollViewHelper:(id)arg1;
- (void).cxx_destruct;
@end
