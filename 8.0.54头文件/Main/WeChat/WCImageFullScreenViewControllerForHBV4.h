@interface WCImageFullScreenViewControllerForHBV4 : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegateForHBV4, IVOIPUILogicMgrExt, SessionSelectControllerDelegate>
{
    UIView * m_fakeScreenView; // +0x68
    CGRect m_originImageRectInScreen; // +0x70
    BOOL m_isAnimating; // +0x90
    MMScrollView * m_scrollView; // +0x98
    UIPageControl * m_pageCtrl; // +0xa0
    UIView * m_blackMask; // +0xa8
    NSArray * m_arrMediaDataWrap; // +0xb0
    NSArray * m_arrMediaData; // +0xb8
    NSMutableArray * m_arrImage; // +0xc0
    unsigned int m_iCurIndex; // +0xc8
    BOOL m_hasScroll; // +0xcc
    BOOL m_isAnimationShowing; // +0xcd
    BOOL m_isRotating; // +0xce
    BOOL m_forbidPreloadImg; // +0xcf
    MMUIWindow * m_fullScreenWindow; // +0xd0
    NSString * m_visibleTitle; // +0xd8
    id <WCImageFullScreenViewControllerDelegateV4> m_delegate; // +0xe0
}
- (void)viewDidLoad;
- (id)getDataItem;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldRotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)clearStatus;
- (void)resetScrollView;
- (void)windowNeed2Show;
- (void)windowNeed2Hide;
- (void)animationShowWithMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3;
- (void)downloadImage;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)getVisibleViewController;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)showNavigationBar;
- (void)captureFakeWindow;
- (void)cancelCaptureFakeWindow;
- (void)showErrorTip:(id)arg1;
- (void)startImageLoadingBlocked;
- (void)stopImageLoading;
- (void)onDetailViewReturn;
- (BOOL)isContainerVisible:(id)arg1;
- (BOOL)shouldHideContainerOnRotate;
- (void)animationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onAnimateFadeOut;
- (void)animationHideWithRotate;
- (void)captureScreen;
- (void)onLongPressedWithMediaItem:(id)arg1;
- (void)onExposeWithDataItem:(id)arg1;
- (id)onGetViewController;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (unsigned int)m_iCurIndex;
- (void)setM_iCurIndex:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

