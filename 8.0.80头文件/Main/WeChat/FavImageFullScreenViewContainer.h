@interface FavImageFullScreenViewContainer : MMUIScrollView <FullScreenGestureDelegate, MMFullScreenItemViewDelegate, UIScrollViewDelegate, SimpleImgInfoDelegate, MMImageScrollViewHelperDelegate>
{
    CGRect m_originImageRectInScreen; // +0x8
    CGSize m_initalContentSize; // +0x28
    UIImage * m_image; // +0x38
    BOOL m_isAnimating; // +0x40
    BOOL m_isShowing; // +0x41
    BOOL m_bIsLongPressHandled; // +0x42
    BOOL m_isCompleteShowAnimationStep1; // +0x43
    SimpleImgInfo * imgInfo; // +0x48
    id <SimpleImgInfoDelegate> imgInfoDelegate; // +0x50
    MMFullScreenItemView * m_container; // +0x58
    MMLoadingView * m_loadingView; // +0x60
    MMProgressViewEx * m_processView; // +0x68
    SightIconView * m_thumbnailProgressView; // +0x70
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x78
    id <FavImageFullScreenViewContainerDelegate> m_delegate; // +0x80
    WXFullScreenGestureRecognizer * m_gesture; // +0x88
    BOOL _useOriginalLayoutForThumbnailPlaceholder; // +0x90
    id <FavImageFullScreenViewContainerDelegate> _strongDelegate; // +0x98
    double _animationDuration; // +0xa0
    UIImageView * _blackVideoTransitionImageView; // +0xa8
}
- (id)init;
- (double)animationDuration;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentSize:(CGSize)arg1;
- (void)startLoadingBlocked;
- (void)layoutSubviews;
- (id)getPlayerView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZooming;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (BOOL)bBanDoubleTap;
- (void)onShow;
- (void)onHide;
- (BOOL)isContainerShow;
- (void)initScrollViewHelper;
- (void)showThumbnailProgressView:(double)arg1;
- (void)hideThumbnailProgressView;
- (void)showProcessView;
- (void)hideProcessView;
- (CGRect)getCenterRectWithMaxSize:(CGSize)arg1;
- (void)clearBlackVideoTransition;
- (void)clearStatus;
- (void)setContentOffsetAndSize;
- (void)animationShowView;
- (void)animationShowDidStop;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2;
- (void)animationShow;
- (void)setImgInfo:(id)arg1;
- (void)tryDownloadImage;
- (void)tryPlaySight;
- (void)requestAllVideoData;
- (void)releaseImg;
- (void)reloadImage;
- (void)animationHideWithRotate;
- (void)realDoHideAnimation;
- (void)animationHideDidStop;
- (void)onDeviceRotate;
- (void)onDeviceRotate:(BOOL)arg1;
- (void)animationRotateDidStop;
- (void)LongPressEvents;
- (void)onBeginLongPress;
- (void)onImageDownloadProgress:(double)arg1;
- (void)onImageDownloadComplete:(BOOL)arg1;
- (void)updateImagePath:(id)arg1;
- (void)onRawImageDownloadProgressChanged:(double)arg1;
- (void)onRawImageDownloadComplete:(BOOL)arg1;
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
- (void)dismissCurrentView;
- (BOOL)isVideoMuted;
- (void)tryToDownLoadVideo;
- (BOOL)isItemNeedLazyDownload:(id)arg1;
- (void)onGetVideoViewBottomLineCenterY:(double *)arg1 leftPartOffset:(double *)arg2 rightPartWidth:(double *)arg3 rightPartMargin:(double *)arg4;
- (void)onFullScreenItemViewShowWithImgInfo:(id)arg1;
- (void)onPlayerDisplayFrameChanged:(CGRect)arg1;
- (void)onClickToolView;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (CGSize)m_initalContentSize;
- (void)setM_initalContentSize:(CGSize)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_loadingView;
- (id)m_container;
- (void)setM_container:(id)arg1;
- (id)imgInfo;
- (id)fullScreenGesture;
- (BOOL)useOriginalLayoutForThumbnailPlaceholder;
- (void)setUseOriginalLayoutForThumbnailPlaceholder:(BOOL)arg1;
- (id)strongDelegate;
- (void)setStrongDelegate:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (id)blackVideoTransitionImageView;
- (void)setBlackVideoTransitionImageView:(id)arg1;
- (void).cxx_destruct;
@end
