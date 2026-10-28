@interface MMPageSheetProviderView : UIView <MMPageSheetNavigationBarDelegate, MMPageSheetConfigDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, MMPageSheetContentProtocol>
{
    BOOL _isShowing; // +0x8
    BOOL _isDismissed; // +0x9
    BOOL _isShowingKeyboard; // +0xa
    BOOL _startPanAtScreenEdge; // +0xb
    BOOL _isBeingInteractivePop; // +0xc
    id <MMPageSheetProviderViewDelegate> _delegate; // +0x10
    UIView * _containerBgView; // +0x18
    NSMutableArray * _pageStacks; // +0x20
    double _containerDragStartY; // +0x28
    long long _interactiveDirection; // +0x30
    double _adjustContainerYOffset; // +0x38
    UIButton * _backgroundBtn; // +0x40
    UIView * _customBackgroundMaskView; // +0x48
    MMUILabel * _topTitleLabel; // +0x50
    UIView * _containerMaskView; // +0x58
    UIView * _customBackgroundView; // +0x60
    UIView * _containerView; // +0x68
    UIView * _detailContentView; // +0x70
    UIView * _navSepLine; // +0x78
    UIScrollView * _scrollableContentView; // +0x80
    double _keyboardHeight; // +0x88
    UIPanGestureRecognizer * _panGesture; // +0x90
    UIView * _interactivePopToView; // +0x98
    UIView * _transitonTargetContainerView; // +0xa0
    CGPoint _previousPanPos; // +0xa8
    CGPoint _scrollViewInitialContentOffset; // +0xb8
    CGPoint _scrollViewLastDragDownOffset; // +0xc8
}
+ (id)viewWithProvider:(id)arg1;
- (id)init;
- (void)onPageSheetInit;
- (void)dealloc;
- (void)showPageSheetIn:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (void)dismissWithAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1 closeType:(long long)arg2 completion:(id /* block */)arg3;
- (void)dismissWithAnimated:(BOOL)arg1 closeType:(long long)arg2;
- (void)updateContentHeightWithAnimated:(BOOL)arg1;
- (void)pushPageSheet:(id)arg1 animated:(BOOL)arg2;
- (void)adjustContainerYOffset:(double)arg1 animated:(BOOL)arg2;
- (void)popPageSheetWithAnimated:(BOOL)arg1;
- (void)popPageSheetTo:(id)arg1 animated:(BOOL)arg2;
- (void)popPageSheetWithType:(long long)arg1 animated:(BOOL)arg2;
- (id)pageSheetContainerView;
- (id)pageSheetHeightRatioValue;
- (BOOL)isContainerBackgroundView:(id)arg1;
- (void)setupUI;
- (void)updateBackgroundView:(id)arg1 animated:(BOOL)arg2;
- (void)updateBgViewMask;
- (id)containerViewForPageProvider:(id)arg1 isFirstPage:(BOOL)arg2;
- (void)doShowWithAnimated:(BOOL)arg1 complete:(id /* block */)arg2;
- (void)resetContainerFrameToBeforeAnimateState;
- (void)updateContainerFrameToFinalState;
- (void)onContainerBgViewAdjustY;
- (void)onUpdateContentSize;
- (long long)overrideUserInterfaceStyle;
- (void)updateTopTitle:(id)arg1;
- (id)navigationBar;
- (id)footerView;
- (void)layoutSubviews;
- (void)onBackgroundClick;
- (id)topPageProvider;
- (id)firstPageProvider;
- (void)clearPageStack;
- (void)pushPageStack:(id)arg1;
- (void)popPageStack;
- (void)animatePushToPage:(id)arg1 newHeight:(double)arg2 animated:(BOOL)arg3 complete:(id /* block */)arg4;
- (void)animatePopToPage:(id)arg1 animated:(BOOL)arg2 complete:(id /* block */)arg3;
- (CGSize)topContainerSize;
- (double)containerHeightForProvider:(id)arg1 isFirstPage:(BOOL)arg2;
- (double)headerHeightForProvider:(id)arg1 isFirstPage:(BOOL)arg2;
- (double)bottomHeightForProvider:(id)arg1;
- (double)detailViewHeightFor:(id)arg1;
- (double)detailViewWidthFor:(id)arg1;
- (double)pageSheetWidthFor:(id)arg1;
- (id)hostViewController;
- (id)configForProvider:(id)arg1;
- (id)currPageConfig;
- (void)setContainerView:(id)arg1;
- (BOOL)shouldShowFromRightToLeftAtLandscape;
- (BOOL)shouldShowFromRightToLeftAtPortrait;
- (BOOL)shouldShowCenterMode;
- (BOOL)isSubPageInPageStack:(id)arg1;
- (id)getPreviousPageFor:(id)arg1;
- (id)currentContainerView;
- (void)pageWillAppear:(id)arg1;
- (void)pageDidAppear:(id)arg1;
- (void)pageWillDisappear:(id)arg1;
- (void)pageDidDisappear:(id)arg1;
- (void)pageWillClose:(id)arg1 closeType:(long long)arg2;
- (void)pageDidClose:(id)arg1 closeType:(long long)arg2;
- (void)pagePresentAnimateWillBegin:(id)arg1;
- (void)pageSheetPresentAnimateDidEnd:(id)arg1;
- (void)didClickAtCloseButton;
- (BOOL)isAtFirstPage:(id)arg1;
- (BOOL)isPageSheetVisible:(id)arg1;
- (BOOL)isPageSheetPushIn:(id)arg1;
- (double)getCurrentSceneWidth;
- (id)getNavigationBarView;
- (void)onConfigChanged:(id)arg1;
- (void)onConfig:(id)arg1 changedFromDragToCloseInstallScrollView:(id)arg2;
- (void)onConfig:(id)arg1 changedFromEnableDragToClose:(BOOL)arg2;
- (void)onConfig:(id)arg1 changedFromEnableEdgeSlideToClose:(BOOL)arg2;
- (void)handleDragOrSlideToCloseChanged;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)onKeyboradWillShow:(id)arg1;
- (void)onKeyboardWillHide:(id)arg1;
- (void)installInteractiveCloseGesture;
- (void)uninstallInteractiveCloseGesture;
- (void)handleInteractiveClosePanGesture:(id)arg1;
- (void)handleInteractiveDismissWithMove:(double)arg1;
- (void)handleInteractiveDismissEnd:(double)arg1;
- (void)shareDragNotCloseHalfScreen:(double)arg1;
- (void)handleInteractivePopWithMove:(double)arg1;
- (void)handleInteractivePopEnd:(double)arg1;
- (BOOL)accessibilityPerformEscape;
- (id)pageSheetContentView;
- (id)pageSheetBackgroundMaskView;
- (id)pageSheetContentColor;
- (double)pageSheetAnimationDuration;
- (BOOL)enablePageSheetChangeAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerBgView;
- (void)setContainerBgView:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (BOOL)isDismissed;
- (void)setIsDismissed:(BOOL)arg1;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:(BOOL)arg1;
- (id)pageStacks;
- (void)setPageStacks:(id)arg1;
- (BOOL)startPanAtScreenEdge;
- (void)setStartPanAtScreenEdge:(BOOL)arg1;
- (CGPoint)previousPanPos;
- (void)setPreviousPanPos:(CGPoint)arg1;
- (double)containerDragStartY;
- (void)setContainerDragStartY:(double)arg1;
- (long long)interactiveDirection;
- (void)setInteractiveDirection:(long long)arg1;
- (double)adjustContainerYOffset;
- (void)setAdjustContainerYOffset:(double)arg1;
- (CGPoint)scrollViewInitialContentOffset;
- (void)setScrollViewInitialContentOffset:(CGPoint)arg1;
- (CGPoint)scrollViewLastDragDownOffset;
- (void)setScrollViewLastDragDownOffset:(CGPoint)arg1;
- (id)backgroundBtn;
- (void)setBackgroundBtn:(id)arg1;
- (id)customBackgroundMaskView;
- (void)setCustomBackgroundMaskView:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (id)containerMaskView;
- (void)setContainerMaskView:(id)arg1;
- (id)customBackgroundView;
- (void)setCustomBackgroundView:(id)arg1;
- (id)containerView;
- (id)detailContentView;
- (void)setDetailContentView:(id)arg1;
- (id)navSepLine;
- (void)setNavSepLine:(id)arg1;
- (id)scrollableContentView;
- (void)setScrollableContentView:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (BOOL)isBeingInteractivePop;
- (void)setIsBeingInteractivePop:(BOOL)arg1;
- (id)interactivePopToView;
- (void)setInteractivePopToView:(id)arg1;
- (id)transitonTargetContainerView;
- (void)setTransitonTargetContainerView:(id)arg1;
- (void).cxx_destruct;
@end
