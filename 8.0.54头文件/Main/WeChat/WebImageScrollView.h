@interface WebImageScrollView : MMUIScrollView <FullScreenGestureDelegate, MMWebImageViewDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate, MediaFullScreenInterface>
{
    MMWebImageView * webImageView; // +0x8
    MMUIActivityIndicatorView * mActivityIndicator; // +0x10
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x18
    WXFullScreenGestureRecognizer * m_gesture; // +0x20
    BOOL m_bImageLoadDone; // +0x28
    BOOL m_bFullScreenAnimationDone; // +0x29
    BOOL _useWindowFrame; // +0x2a
    id <WebImageScrollViewDelegate> m_delegate; // +0x30
}
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setImageUrl:(id)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (id)viewForZooming;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)tryReloadView;
- (void)onLoadImageOK:(id)arg1;
- (void)updateScrollable;
- (id)getImageView;
- (double)screenWidth;
- (double)screenHeight;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)becomeInvisible;
- (void)becomeVisible;
- (void)resizeToFrame:(CGRect)arg1;
- (void)displayWithFrame:(CGRect)arg1;
- (void)resetLoadingIndicator;
- (void)beginFullScreenAnimation:(id)arg1;
- (void)finishFullScreenAnimation:(CGRect)arg1;
- (id)getQuitAnimationView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)useWindowFrame;
- (void)setUseWindowFrame:(BOOL)arg1;
- (void).cxx_destruct;
@end

