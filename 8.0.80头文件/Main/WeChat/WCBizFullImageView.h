@interface WCBizFullImageView : MMUIWindow <UIScrollViewDelegate, scrollViewDelegate, WCBizMultiImageBrowseViewContainerDelegate, SessionSelectControllerDelegate, WCActionSheetDelegate>
{
    UIView * m_fakeScreenView; // +0x8
    CGRect m_originImageRectInScreen; // +0x10
    BOOL m_isAnimating; // +0x30
    MMScrollView * m_scrollView; // +0x38
    UIPageControl * m_pageCtrl; // +0x40
    UIView * m_blackMask; // +0x48
    WCBizMultiImageBrowseData * m_oImageBrowseData; // +0x50
    NSMutableArray * m_arrImage; // +0x58
    unsigned int m_iCurIndex; // +0x60
    BOOL m_hasScroll; // +0x64
    long long m_lastDeviceOrientation; // +0x68
    id <WCBizFullImageViewDelegate> m_delegate; // +0x70
}
+ (id)getWCBizFullScreenView;
+ (void)freeWCBizFullScreenView;
- (id)init;
- (void)dealloc;
- (void)clearStatus;
- (void)resetScrollView;
- (void)downloadImage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)rotateToDeviceOrientation:(BOOL)arg1;
- (id)getVisibleViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (BOOL)shouldHideContainerOnRotate;
- (void)animationHideStop;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)animationHideWithRotate;
- (void)captureScreen;
- (void)onLongPressedWithWCBizImageBrowseItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)didDeviceRotate;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (unsigned int)m_iCurIndex;
- (void)setM_iCurIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
