@interface WCWebSearchHalfScreenViewController : MMUIHalfScreenViewController <WCFinderHalfScreenProtocol, MMUIHalfScreenViewDismissInteractiveTransitionDelegate>
{
    BOOL _isFullScreen; // +0x70
    BOOL _isAnimating; // +0x71
    BOOL _isPanning; // +0x72
    BOOL _shouldManualInvokeParentAppearEventWhenPresented; // +0x73
    BOOL _isVCPopedOrDismissed; // +0x74
    UIViewController * _fromViewController; // +0x78
    WCFinderSteramProfileBarView * _headerView; // +0x80
    WCWebSearchViewControllerNewH5 * _searchPage; // +0x88
    UIViewController * _actualPresentingViewController; // +0x90
    double _heightRatio; // +0x98
}
- (id)initWithSearchPage:(id)arg1;
- (void)setIsFullScreen:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollViewPanGesture:(id)arg1;
- (void)handleViewPanGesture:(id)arg1 fromScrollView:(BOOL)arg2;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldHideNavigationBar;
- (void)doClickCloseWithNeedAnimated:(BOOL)arg1 action:(long long)arg2;
- (void)onDismissInteractiveTransitionFinish:(id)arg1;
- (BOOL)needCloseOnOrientationChanged;
- (double)getMaxHalfScreenHeight;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (BOOL)isTopViewControllerWebSearch;
- (void)notifyHeightWillChange:(double)arg1;
- (void)notifyHeightDidChange:(double)arg1;
- (void)notifyHeightIsChanging:(double)arg1;
- (void)toggleFullScreen:(double)arg1;
- (void)toggleHalfScreenUpdateHeightRatio:(double)arg1 withDuration:(double)arg2;
- (void)toggleHalfScreenUpdateDraggableUpward:(BOOL)arg1;
- (id)fromViewController;
- (void)setFromViewController:(id)arg1;
- (BOOL)isFullScreen;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)searchPage;
- (void)setSearchPage:(id)arg1;
- (id)actualPresentingViewController;
- (void)setActualPresentingViewController:(id)arg1;
- (double)heightRatio;
- (void)setHeightRatio:(double)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isPanning;
- (void)setIsPanning:(BOOL)arg1;
- (BOOL)shouldManualInvokeParentAppearEventWhenPresented;
- (void)setShouldManualInvokeParentAppearEventWhenPresented:(BOOL)arg1;
- (BOOL)isVCPopedOrDismissed;
- (void)setIsVCPopedOrDismissed:(BOOL)arg1;
- (void).cxx_destruct;
@end
