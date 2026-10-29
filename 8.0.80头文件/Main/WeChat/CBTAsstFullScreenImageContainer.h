@interface CBTAsstFullScreenImageContainer : MMUIScrollView <FullScreenGestureDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    WXFullScreenGestureRecognizer * m_gesture; // +0x8
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x10
    UIImage * m_image; // +0x18
    CGSize m_initalContentSize; // +0x20
    BOOL m_isAnimating; // +0x30
    BOOL m_isShowing; // +0x31
    SightIconView * m_placeholderIconView; // +0x38
    CBTAsstFullScreenImageInfo * _imgInfo; // +0x40
    CBTAsstFullScreenImageView * _containerView; // +0x48
    id <CBTAsstFullScreenImageContainerDelegate> _containerDelegate; // +0x50
    unsigned long long _placeholderState; // +0x58
    CGRect _originImageRectInScreen; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setImgInfo:(id)arg1;
- (void)syncPlaceholderStateFromImage;
- (void)updatePlaceholderState:(unsigned long long)arg1;
- (void)layoutPlaceholderIfNeeded;
- (id)placeholderIconView;
- (CGRect)getCenterRectWithMaxSize:(CGSize)arg1;
- (void)setContentOffsetAndSize;
- (void)initScrollViewHelper;
- (void)clearStatus;
- (void)animationShow;
- (void)animationShowDidStop;
- (void)animationHideWithRotate;
- (void)animationHideDidStop;
- (void)tryDownloadImage;
- (void)releaseImg;
- (void)reloadImage;
- (void)resetZoom;
- (void)onDeviceRotate:(BOOL)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZooming;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (BOOL)bBanDoubleTap;
- (BOOL)shouldPreventDragDownCloseGesture;
- (void)onFullScreenSingleTap;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenLongPressBegin;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (id)fullScreenGesture;
- (id)imgInfo;
- (CGRect)originImageRectInScreen;
- (void)setOriginImageRectInScreen:(CGRect)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)containerDelegate;
- (void)setContainerDelegate:(id)arg1;
- (unsigned long long)placeholderState;
- (void)setPlaceholderState:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
