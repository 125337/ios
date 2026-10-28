@interface WCAdConventionalHalfScreenViewController : MMUIViewController <WCAdConventionalHalfScreenDetailViewDelegate, WCAdConventionalHalfScreenMediaViewDelegate, UIViewControllerAnimatedTransitioning>
{
    BOOL _isReadyToDismiss; // +0x70
    unsigned long long _scene; // +0x78
    UIView * _originView; // +0x80
    NSArray * _originGridRectsInScreen; // +0x88
    unsigned long long _clickIndex; // +0x90
    CContact * _contactInfo; // +0x98
    WCDataItem * _dataItem; // +0xa0
    WCAdCardBtnInfo * _actionInfo; // +0xa8
    WCAdConventionalHalfScreenMediaBaseView * _mediaView; // +0xb0
    WCAdConventionalHalfScreenDetailBaseView * _detailView; // +0xb8
    WCAdConventionalFullScreenViewController * _fullScreenViewController; // +0xc0
    UIImageView * _topMaskView; // +0xc8
    MMUIButton * _leftBarBackButton; // +0xd0
    MMUIButton * _leftBarCloseButton; // +0xd8
    UIImage * _originSnapshot; // +0xe0
    double _originMediaHeight; // +0xe8
    UIImageView * _mediaTransitionBGView; // +0xf0
    WCAdConventionalHalfScreenReportManager * _reportManager; // +0xf8
    CGRect _originRectInScreen; // +0x100
}
- (id)initWithDataItem:(id)arg1 clickActionInfo:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (BOOL)needCloseOnOrientationChanged;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)updateTopBarAreaState;
- (void)updateLeftBarButton;
- (void)updateNavigationBarHiddenState;
- (void)forceUpdateNavigationBarHidden:(BOOL)arg1 alpha:(double)arg2;
- (void)updateStatusBarVisible;
- (void)updateTopBarAreaWithPercent:(double)arg1;
- (id)mediaView;
- (id)detailView;
- (id)topMaskView;
- (id)leftBarBackButton;
- (id)leftBarCloseButton;
- (id)mediaTransitionBGView;
- (void)setButtonStyle:(id)arg1 withImageType:(BOOL)arg2;
- (void)onLeftBarButtonClicked;
- (void)onNaviBarCloseButtonClicked;
- (void)onNaviBarMoreButtonClicked;
- (BOOL)shouldResetContentViews;
- (BOOL)isOpenFromGridView;
- (void)calcContentViewsSizeWithContainerSize:(CGSize)arg1 outMediaViewSize:(CGSize *)arg2 outDetailViewSize:(CGSize *)arg3;
- (CGRect)calcMediaRealFrameWithContainerSize:(CGSize)arg1;
- (void)setContactInfo:(id)arg1;
- (void)readyToDismissMyself;
- (void)updateMediaViewVisibleType:(long long)arg1 animated:(BOOL)arg2;
- (void)updateTopAreaContentUserInteraction:(BOOL)arg1;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)simpleSlideDownAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)zoomAnimateTransition:(id)arg1 fromVC:(id)arg2 toVC:(id)arg3 fromView:(id)arg4 toView:(id)arg5;
- (void)onDetailViewWillAddViewController:(id)arg1;
- (void)onDetailViewWillShowViewController:(id)arg1;
- (id)onDetailViewGetCurrentViewController;
- (void)onDetailViewPageSheetWillClose;
- (void)onDetailViewPageSheetDidClose;
- (id)onDetailViewPageSheetHitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onDetailViewPageSheetDidChangeVisibleHeight:(double)arg1;
- (unsigned long long)onDetailViewPageSheetFetchItemScene;
- (double)onDetailViewPageSheetFetchCalculatedHeight;
- (void)onDetailViewPageSheetCeilingTopWithPercent:(double)arg1 animated:(BOOL)arg2;
- (void)onDetailViewPageSheetUpdateTitle:(id)arg1;
- (void)onDetailViewPageSheetDidPinToTop;
- (void)onDetailViewPageSheetWillStickToBottom;
- (void)onDetailViewPageSheetUpdateAnimatingState:(BOOL)arg1;
- (void)onDetailViewPageSheetTryToDismissParent:(BOOL)arg1;
- (void)onMediaViewContentBeClicked;
- (BOOL)onMediaViewShouldVideoBePlaying;
- (id)onMediaViewFetchReportManager;
- (void)turnMediaViewToFullScreenVC;
- (void)onFullScreenVCDidAppear;
- (void)onFullScreenVCWillBePopWithTransition;
- (void)onFullScreenVCWillDisappear;
- (void)onFullScreenVCDidDisappear;
- (void)cleanUpFullScreenVC;
- (id)reportManager;
- (void)doHalfScreenReport;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)originView;
- (void)setOriginView:(id)arg1;
- (CGRect)originRectInScreen;
- (void)setOriginRectInScreen:(CGRect)arg1;
- (id)originGridRectsInScreen;
- (void)setOriginGridRectsInScreen:(id)arg1;
- (unsigned long long)clickIndex;
- (void)setClickIndex:(unsigned long long)arg1;
- (id)contactInfo;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (void)setMediaView:(id)arg1;
- (void)setDetailView:(id)arg1;
- (id)fullScreenViewController;
- (void)setFullScreenViewController:(id)arg1;
- (void)setTopMaskView:(id)arg1;
- (void)setLeftBarBackButton:(id)arg1;
- (void)setLeftBarCloseButton:(id)arg1;
- (id)originSnapshot;
- (void)setOriginSnapshot:(id)arg1;
- (double)originMediaHeight;
- (void)setOriginMediaHeight:(double)arg1;
- (void)setMediaTransitionBGView:(id)arg1;
- (BOOL)isReadyToDismiss;
- (void)setIsReadyToDismiss:(BOOL)arg1;
- (void)setReportManager:(id)arg1;
- (void).cxx_destruct;
@end
