@interface MMContentScrollView : UIScrollView <MMImageScrollViewHelperDelegate, UIScrollViewDelegate>
{
    id <MMContentScrollViewDelegate> _customDelegate; // +0x8
    MMImageScrollViewHelper * _scrollViewHelper; // +0x10
    UIView * _contentView; // +0x18
    CGSize _customContentSize; // +0x20
}
- (id)initWithContentView:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)zoomToRect:(CGRect)arg1 animated:(BOOL)arg2;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (BOOL)imageScrollViewHelper:(id)arg1 shouldIgnoreDoubleTap:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)customDelegate;
- (void)setCustomDelegate:(id)arg1;
- (id)scrollViewHelper;
- (void)setScrollViewHelper:(id)arg1;
- (CGSize)customContentSize;
- (void)setCustomContentSize:(CGSize)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
