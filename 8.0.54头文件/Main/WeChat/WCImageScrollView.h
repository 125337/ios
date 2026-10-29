@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate>
{
    UIView * imageView; // +0x8
    unsigned long long index; // +0x10
    MMUIActivityIndicatorView * mActivityIndicator; // +0x18
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x20
    BOOL supportOrientation; // +0x28
    WXFullScreenGestureRecognizer * m_gesture; // +0x30
    id <WCImageScrollViewDelegate> m_delegate; // +0x38
    BOOL _isDraggingToClose; // +0x40
    BOOL _playGestureEnabled; // +0x41
    long long _browseScene; // +0x48
    MMScrollViewZoomReporter * _zoomReporter; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)dealloc;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZooming;
- (id)getScrollView;
- (void)onSingleTap:(id)arg1;
- (void)onLongPressBegin:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (long long)orientationToInt:(long long)arg1;
- (double)angelFromOldOrientation:(long long)arg1 newOrientation:(long long)arg2;
- (void)internalDisplayImage:(id)arg1 withFrame:(CGRect)arg2;
- (void)internalDisplayImageMaterial:(id)arg1 withFrame:(CGRect)arg2;
- (void)displayImage:(id)arg1 withFrame:(CGRect)arg2;
- (void)displayImage:(id)arg1 withPlayerArgs:(id)arg2 frame:(CGRect)arg3;
- (void)startPlaying;
- (void)pausePlaying;
- (void)clearPlayer;
- (void)playableImageView:(id)arg1 didChangePlayerState:(unsigned long long)arg2;
- (void)displayView:(id)arg1;
- (void)stopLoading;
- (void)willMoveToSuperview:(id)arg1;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (id)getImageView;
- (id)zoomReporter;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (BOOL)supportOrientation;
- (void)setSupportOrientation:(BOOL)arg1;
- (id)mActivityIndicator;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)isDraggingToClose;
- (long long)browseScene;
- (void)setBrowseScene:(long long)arg1;
- (BOOL)playGestureEnabled;
- (void)setPlayGestureEnabled:(BOOL)arg1;
- (void)setZoomReporter:(id)arg1;
- (void).cxx_destruct;
@end

