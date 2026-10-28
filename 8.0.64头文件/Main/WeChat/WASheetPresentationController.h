@interface WASheetPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    BOOL _expanded; // +0x8
    BOOL _expandedToFullScreen; // +0x9
    BOOL _isPushOrPresenting; // +0xa
    BOOL _expandAnimating; // +0xb
    BOOL _isDraggingDown; // +0xc
    BOOL _isShowingActionSheetMenu; // +0xd
    id <WASheetPresentationControllerDelegete> _sheetDelegate; // +0x10
    UIView * _widgetContainerView; // +0x18
    UIView * _contentView; // +0x20
    CAShapeLayer * _shapeLayer; // +0x28
    UIView * _fakeStatusBarView; // +0x30
    UIView * _fakeStatusBarTransitionView; // +0x38
    UIView * _blurView; // +0x40
    UITapGestureRecognizer * _tapBackgroundGesture; // +0x48
    UITapGestureRecognizer * _tapGesture; // +0x50
    UIPanGestureRecognizer * _panGesture; // +0x58
    double _panBeginY; // +0x60
    double _dragBeginY; // +0x68
    double _currentContentY; // +0x70
    double _dragContentHeight; // +0x78
    double _currentWidth; // +0x80
    UIView * _sheetHeaderView; // +0x88
    WASheetHeaderTipsView * _tipsView; // +0x90
    NSString * _tipsText; // +0x98
    id /* block */ _tipsDidShowBlock; // +0xa0
    id /* block */ _tipsDidClickCloseBlock; // +0xa8
    CGPoint _currentContentOffset; // +0xb0
}
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)initContentView;
- (void)initBlurView;
- (void)initFakeStatusBarView;
- (void)initShapeLayer;
- (void)initTipsView;
- (void)presentationTransitionWillBegin;
- (void)sheetFrameDidChange:(CGRect)arg1;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (void)dismissalTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)arg1;
- (void)layoutContentView;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)containerViewDidLayoutSubviews;
- (void)updateRectCorner;
- (void)setUpContainerView;
- (void)updateBackgroundUserInteractionEnableState;
- (CGRect)frameOfPresentedViewInContainerView;
- (CGRect)currentSheetFrameIncludeHeader:(BOOL)arg1;
- (double)getSafeBottomInset;
- (CGSize)getSheetSize;
- (CGSize)getLandscapeSheetSize;
- (double)getSheetExpandedHeight;
- (BOOL)canExpandToFullScreen;
- (BOOL)canExpandToStatusBarTop;
- (BOOL)canRecoverAfterExpand;
- (BOOL)sheetShouldForbidDragDownGesture:(id)arg1;
- (unsigned long long)rectCorner;
- (double)cornerRadius;
- (id)backgroundColor;
- (BOOL)backgroundShouldBlur;
- (BOOL)backgroundUserInteractionEnabled;
- (id)widgetContainerView;
- (id)genSheetHeaderView;
- (void)onTapBackground:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onDragToDismiss;
- (void)onReturnToNormal;
- (void)expandToFullScreenWithReason:(unsigned long long)arg1;
- (void)recoverHalfScreen;
- (void)setFakeStatusBarColor:(id)arg1;
- (void)onEmbedWeAppExpandToFullScreen;
- (void)onDragToExpandWithReason:(unsigned long long)arg1;
- (void)reportExpandActionWithReason:(unsigned long long)arg1;
- (void)reportExpandButtonExpose;
- (void)reportRecoverHalfScreen;
- (id)baseActionReportItem;
- (double)expandedContentY;
- (void)onPan:(id)arg1;
- (void)onDidPresentViewController:(id)arg1;
- (void)onDidPushViewController:(id)arg1;
- (void)onDidAppear;
- (void)onMenuMore;
- (void)onMenuDisappear;
- (void)onEmbedMenuMore;
- (void)onEmbedMenuDisappear;
- (BOOL)shouldNotDragByGesture:(id)arg1;
- (BOOL)shouldForbidDragUpGesture:(id)arg1;
- (void)onFirstWebViewDidScroll:(id)arg1;
- (void)onFirstWebViewWillBeginDragging:(id)arg1;
- (void)onFirstWebViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)onFirstWebViewDidEndDragging:(id)arg1;
- (void)onFirstWebViewDidNavigateOut;
- (BOOL)shouldExpand;
- (BOOL)shouldReturnToNormal;
- (BOOL)shouldDismiss;
- (void)setCurrentContentY:(double)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)getDefaultStatusBarColorForVC:(id)arg1;
- (BOOL)isLaunchModeEmbed;
- (id)sheetModeParameter;
- (id)draggingBarHeader;
- (id)sheetDelegate;
- (void)setSheetDelegate:(id)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (BOOL)expandedToFullScreen;
- (void)setExpandedToFullScreen:(BOOL)arg1;
- (void)setWidgetContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (id)fakeStatusBarView;
- (void)setFakeStatusBarView:(id)arg1;
- (id)fakeStatusBarTransitionView;
- (void)setFakeStatusBarTransitionView:(id)arg1;
- (id)blurView;
- (void)setBlurView:(id)arg1;
- (id)tapBackgroundGesture;
- (void)setTapBackgroundGesture:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (double)panBeginY;
- (void)setPanBeginY:(double)arg1;
- (double)dragBeginY;
- (void)setDragBeginY:(double)arg1;
- (double)currentContentY;
- (double)dragContentHeight;
- (void)setDragContentHeight:(double)arg1;
- (CGPoint)currentContentOffset;
- (void)setCurrentContentOffset:(CGPoint)arg1;
- (BOOL)isPushOrPresenting;
- (void)setIsPushOrPresenting:(BOOL)arg1;
- (BOOL)expandAnimating;
- (void)setExpandAnimating:(BOOL)arg1;
- (BOOL)isDraggingDown;
- (void)setIsDraggingDown:(BOOL)arg1;
- (BOOL)isShowingActionSheetMenu;
- (void)setIsShowingActionSheetMenu:(BOOL)arg1;
- (double)currentWidth;
- (void)setCurrentWidth:(double)arg1;
- (id)sheetHeaderView;
- (void)setSheetHeaderView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)tipsText;
- (void)setTipsText:(id)arg1;
- (id /* block */)tipsDidShowBlock;
- (void)setTipsDidShowBlock:(id /* block */)arg1;
- (id /* block */)tipsDidClickCloseBlock;
- (void)setTipsDidClickCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
