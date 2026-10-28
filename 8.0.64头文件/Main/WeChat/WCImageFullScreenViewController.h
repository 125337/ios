@interface WCImageFullScreenViewController : FullScreenViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegate, IVOIPUILogicMgrExt, ShareDataToOpenSDKControllerDelegate, WCFacadeExt, ForwardMessageLogicDelegate, EditImageForwardAndEditLogicDelegate, WCPayControlMgrExt, WCMomentsForwardExt>
{
    UIView * m_fakeScreenView; // +0x78
    NSArray * m_arrOriginView; // +0x80
    CGRect m_originImageRectInScreen; // +0x88
    BOOL m_isAnimating; // +0xa8
    BOOL m_isForward2Contact; // +0xa9
    MMScrollView * m_scrollView; // +0xb0
    UIPageControl * m_pageCtrl; // +0xb8
    UIView * m_blackMask; // +0xc0
    NSArray * m_arrMediaDataWrap; // +0xc8
    NSArray * m_arrMediaData; // +0xd0
    NSMutableArray * m_arrImage; // +0xd8
    unsigned int m_iCurIndex; // +0xe0
    BOOL m_hasScroll; // +0xe4
    BOOL m_isAnimationShowing; // +0xe5
    BOOL m_isRotating; // +0xe6
    BOOL m_forbidPreloadImg; // +0xe7
    ShareDataToOpenSDKController * m_shareDataToOpenSDKController; // +0xe8
    ForwardMessageLogicController * m_forwardMsgLogic; // +0xf0
    unsigned int _startTime; // +0xf8
    EditImageForwardAndEditLogicController * m_editImageLogicController; // +0x100
    BOOL m_isAllowRotate; // +0x108
    double m_lastScreenWidth; // +0x110
    BOOL _bForbidLongPress; // +0x118
    BOOL _bSilencePlayLivePhotos; // +0x119
    BOOL _isPresentingNextViewController; // +0x11a
    BOOL _canShowInvisibleTipsView; // +0x11b
    BOOL _isInvisible; // +0x11c
    BOOL _isShareEmbedExcerptEnabled; // +0x11d
    id <WCImageFullScreenViewControllerDelegate> m_delegate; // +0x120
    id <WCImageFullScreenViewControllerNavigatingDelegate> _m_navigatingDelegate; // +0x128
    unsigned long long _contentItemScene; // +0x130
    WCMomentsPageContext * _pageContext; // +0x138
    UINavigationController * _presentedNavigationController; // +0x140
    WCImageFullScreenViewContainer * _invisibleTipsViewContainer; // +0x148
    WCMomentsInvisibleTipsView * _invisibleTipsView; // +0x150
    WCImageFullScreenButtonsContainerView * _bottomButtonsContainerView; // +0x158
    NSSet * _currentVisibleIndexSet; // +0x160
    unsigned long long _needsEditMediaIndex; // +0x168
}
- (id)init;
- (id)pageContext;
- (void)viewDidLoad;
- (void)onPageControllerChangePage:(id)arg1;
- (void)initBottomButtonsContainerView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldRotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)clearStatus;
- (void)resetScrollView;
- (void)showVCAnimation;
- (void)setMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned int)arg4 needEdit:(BOOL)arg5 scene:(unsigned long long)arg6;
- (void)setMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(BOOL)arg4 scene:(unsigned long long)arg5;
- (void)downloadImage;
- (id)getCurMediaItemWrap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)handleScrollViewDidEndScrolling:(id)arg1;
- (void)updateVisibleIndexSet;
- (void)didSwitchAndDisplayImageContainersAtIndexes:(id)arg1;
- (void)didSwitchAndEndDisplayingImageContainersAtIndexes:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)getVisibleViewController;
- (void)openOriginalArticle;
- (void)openEcsInfo;
- (void)openFinderInfo;
- (void)showInvisibleTipsView;
- (void)updateInvisibleTipsViewBeforeHiding;
- (void)onUpdateDataItemDetailFinished:(long long)arg1 itemId:(id)arg2 dataItem:(id)arg3;
- (id)getCurrentViewController;
- (void)onForwardOpDidSend:(id)arg1;
- (void)onForwardOpDidCancel:(id)arg1;
- (void)cancelForward;
- (void)onShareDataToOpenSDKCancel;
- (void)shouldHideFullScreenForWCPay;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (BOOL)isContainerVisible:(id)arg1;
- (BOOL)shouldHideContainerOnRotate;
- (void)animationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerCustomShowAnimation;
- (void)onContainerAnimationShowStop;
- (void)onContainerAnimationHideStart;
- (void)onWindowHide;
- (void)onContainerAnimationHideStop;
- (void)onAnimateFadeOut;
- (void)hideVCAnimationWillCompleted:(id /* block */)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)animationHideWithRotate;
- (void)hideWithoutAnimation;
- (void)captureScreen;
- (void)onLongPressedAddFav:(id)arg1;
- (void)onLongPressedWithMediaItem:(id)arg1 contact:(id)arg2;
- (void)onLongPressedEditImage:(id)arg1 atPath:(id)arg2 withFavItem:(id)arg3 editAtFirst:(BOOL)arg4;
- (void)onContainerDidZoomWithScale:(double)arg1 andIndex:(unsigned int)arg2;
- (void)onExposeWithDataItem:(id)arg1;
- (id)onGetViewController;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onPresentModalViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onBeginAnimateTranslate;
- (void)onFinishAnimatedTranslate;
- (void)onBeginShowMultiQRCodeView:(id)arg1;
- (void)onFinishShowMultiQRCodeView;
- (void)onShowTranslateImage:(id)arg1;
- (void)onShareToOpenSDKWithDataItem:(id)arg1 mediaItem:(id)arg2;
- (id)presentedNavigationController;
- (id)topMostNavigationVC;
- (void)imageFullScreenViewContainerDidClickOriginalArticle:(id)arg1;
- (void)imageFullScreenViewContainerDidClickJumpFinder:(id)arg1;
- (BOOL)imageFullScreenViewContainerIsAppearOnScreen:(id)arg1;
- (id)getPresentedNavigationController;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onShowingEditView;
- (void)onDismissEditView;
- (void)onForwardMessageSendOKInEditView;
- (void)onForwardMessageCancelInEditView;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (unsigned int)m_iCurIndex;
- (void)setM_iCurIndex:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_navigatingDelegate;
- (void)setM_navigatingDelegate:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (BOOL)bForbidLongPress;
- (void)setBForbidLongPress:(BOOL)arg1;
- (BOOL)bSilencePlayLivePhotos;
- (void)setBSilencePlayLivePhotos:(BOOL)arg1;
- (void)setPageContext:(id)arg1;
- (BOOL)isPresentingNextViewController;
- (void)setIsPresentingNextViewController:(BOOL)arg1;
- (void)setPresentedNavigationController:(id)arg1;
- (BOOL)canShowInvisibleTipsView;
- (void)setCanShowInvisibleTipsView:(BOOL)arg1;
- (BOOL)isInvisible;
- (id)invisibleTipsViewContainer;
- (void)setInvisibleTipsViewContainer:(id)arg1;
- (id)invisibleTipsView;
- (void)setInvisibleTipsView:(id)arg1;
- (id)bottomButtonsContainerView;
- (void)setBottomButtonsContainerView:(id)arg1;
- (BOOL)isShareEmbedExcerptEnabled;
- (void)setIsShareEmbedExcerptEnabled:(BOOL)arg1;
- (id)currentVisibleIndexSet;
- (void)setCurrentVisibleIndexSet:(id)arg1;
- (unsigned long long)needsEditMediaIndex;
- (void)setNeedsEditMediaIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
