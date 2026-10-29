@interface MMLiveCoverPreviewView : UIView <UIScrollViewDelegate, FullScreenGestureDelegate>
{
    UIImage * _originImage; // +0x8
    UIImageView * _imageView; // +0x10
    UIScrollView * _scrollView; // +0x18
    WXFullScreenGestureRecognizer * _fullScreenGestrure; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setUpUI;
- (void)layoutSubviews;
- (void)setOriginImage:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)showInViewController:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (id)originImage;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)fullScreenGestrure;
- (void)setFullScreenGestrure:(id)arg1;
- (void).cxx_destruct;
@end

