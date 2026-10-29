@interface ImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate, FullScreenGestureDelegate>
{
    UIImageView * imageView; // +0x8
    MMUIActivityIndicatorView * mActivityIndicator; // +0x10
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x18
    BOOL m_bIsLongPressHandled; // +0x20
    BOOL disableDragToResize; // +0x21
    WXFullScreenGestureRecognizer * m_gesture; // +0x28
    CGSize m_originSize; // +0x30
    BOOL m_isEnablePlayLivePhoto; // +0x40
    WCLivePhotoView * livePhotoView; // +0x48
    UILongPressGestureRecognizer * m_livePhotoLongPressRecognizer; // +0x50
    BOOL _useWindowFrame; // +0x58
    id <ImageScrollViewDelegate> m_delegate; // +0x60
    MMScrollViewZoomReporter * _zoomReporter; // +0x68
}
- (void)setOriginSize:(CGSize)arg1;
- (void)updateZoomScale;
- (void)setOriginImageData:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (void)disableScrollViewDragToResize;
- (CGPoint)gesturePointInImageView;
- (double)contentRatioY;
- (void)setContentRatioY:(double)arg1;
- (UIEdgeInsets)pageContentInset;
- (void)setPageContentInset:(UIEdgeInsets)arg1;
- (void)updateDisplayRect;
- (void)stopTiledImageDisplay;
- (id)viewForZooming;
- (id)getScrollView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)reloadView:(id)arg1 FullScreen:(BOOL)arg2;
- (void)inheritAccessibilityFromImageView:(id)arg1 toImageView:(id)arg2;
- (void)displayImage:(id)arg1 withFrame:(CGRect)arg2 CornerRadius:(double)arg3;
- (void)displayLoading:(CGRect)arg1;
- (void)updateScrollable;
- (void)dealloc;
- (void)displayImage:(id)arg1 withFrame:(CGRect)arg2;
- (void)displayImageCache:(id)arg1 withFrame:(CGRect)arg2;
- (void)updateImage:(id)arg1;
- (id)getImage;
- (id)getImageView;
- (double)screenWidth;
- (double)screenHeight;
- (id)m_livePhotoLongPressRecognizer;
- (void)enableLongPressRecognizer:(BOOL)arg1;
- (void)setEnableLeftToRightClose:(BOOL)arg1;
- (void)handleLivePhotoLongPress:(id)arg1;
- (void)displayLivePhoto:(id)arg1 withAsset:(id)arg2 withFrame:(CGRect)arg3;
- (void)displayLivePhoto:(id)arg1 withVideoPath:(id)arg2 withFrame:(CGRect)arg3;
- (void)updateLivePhoto:(id)arg1;
- (void)startPlayLivePhoto;
- (void)pausePlayLivePhoto;
- (void)clearLivePlayer;
- (void)isEnablePlayLivePhoto:(BOOL)arg1;
- (CGSize)calculateLivePhotoFitSizeForPreview:(CGSize)arg1 maxSize:(CGSize)arg2 fillWidth:(BOOL)arg3;
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
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)useWindowFrame;
- (void)setUseWindowFrame:(BOOL)arg1;
- (id)zoomReporter;
- (void)setZoomReporter:(id)arg1;
- (void).cxx_destruct;
@end
