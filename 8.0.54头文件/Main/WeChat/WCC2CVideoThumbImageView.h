@interface WCC2CVideoThumbImageView : UIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    BOOL _zoomEnabled; // +0x8
    UIImageView * _imageView; // +0x10
    id <WCC2CVideoThumbImageViewDelegate> _uiDelegate; // +0x18
    MMImageScrollViewHelper * _scrollViewHelper; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setImage:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onDoubleTap:(id)arg1;
- (void)updateZoomInfo:(CGSize)arg1;
- (BOOL)zoomEnabled;
- (void)setZoomEnabled:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (id)scrollViewHelper;
- (void)setScrollViewHelper:(id)arg1;
- (void).cxx_destruct;
@end

