@interface WCBizMultiImageBrowseViewContainer : MMUIScrollView <CAAnimationDelegate, UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    WCBizImageBrowseItem * m_oImageBrowseItem; // +0x8
    CGRect m_originImageRectInScreen; // +0x10
    CGSize m_initalContentSize; // +0x30
    UIImage * m_image; // +0x40
    UIImageView * m_oBackGroundImageView; // +0x48
    BOOL m_isAnimating; // +0x50
    BOOL m_isShowing; // +0x51
    BOOL m_bIsLongPressHandled; // +0x52
    BOOL m_isImageReady; // +0x53
    UIImageView * m_container; // +0x58
    MMLoadingView * m_loadingView; // +0x60
    MMProgressViewEx * m_processView; // +0x68
    UIImage * m_processBackGroundImage; // +0x70
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x78
    WCActionSheet * m_actionSheet; // +0x80
    id <WCBizMultiImageBrowseViewContainerDelegate> m_delegate; // +0x88
}
- (id)init;
- (void)stopAllAnimation;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1;
- (void)setZoomScale:(double)arg1 animated:(BOOL)arg2;
- (void)setContentOffset:(CGPoint)arg1;
- (void)setContentSize:(CGSize)arg1;
- (void)startLoadingBlocked;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZooming;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)initScrollViewHelper;
- (void)showProcessView;
- (void)clearStatus;
- (void)setContentOffsetAndSize;
- (void)animationShowView;
- (void)animationShowDidStop;
- (void)animationShowStep2_ImageNotReady;
- (void)animationShowStep2_Animate;
- (void)animationShowStep2;
- (void)setImageWithoutAnimation:(id)arg1;
- (void)tryDownloadImage:(BOOL)arg1;
- (void)animationHideWithRotate;
- (void)animationHideDidStop;
- (void)onDeviceRotate;
- (void)animationRotateDidStop;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)LongPressEvents;
- (id)m_image;
- (void)setM_image:(id)arg1;
- (id)m_oImageBrowseItem;
- (void)setM_oImageBrowseItem:(id)arg1;
- (CGRect)m_originImageRectInScreen;
- (void)setM_originImageRectInScreen:(CGRect)arg1;
- (CGSize)m_initalContentSize;
- (void)setM_initalContentSize:(CGSize)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_loadingView;
- (void)setM_loadingView:(id)arg1;
- (void).cxx_destruct;
@end
