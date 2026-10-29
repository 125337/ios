@interface WCWebSearchHalfScreenViewController : MMUIHalfScreenViewController <WCFinderHalfScreenProtocol>
{
    BOOL _isFullScreen; // +0x68
    WCFinderSteramProfileBarView * _headerView; // +0x70
    WCWebSearchViewControllerNewH5 * _searchPage; // +0x78
    UIViewController * _actualPresentingViewController; // +0x80
}
- (id)initWithParams:(id)arg1 uiConfig:(id)arg2;
- (void)setIsFullScreen:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)handleTopViewPanGesture:(id)arg1;
- (void)handleScrollViewPanGesture:(id)arg1;
- (void)handleViewPanGesture:(id)arg1 fromScrollView:(BOOL)arg2;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldHideNavigationBar;
- (BOOL)needCloseOnOrientationChanged;
- (id)getHalfContainerView;
- (id)getHalfTransformView;
- (id)getHalfDismissTransition;
- (void)updateHalfScreenHeightRatio:(double)arg1;
- (BOOL)isFullScreen;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)searchPage;
- (void)setSearchPage:(id)arg1;
- (id)actualPresentingViewController;
- (void)setActualPresentingViewController:(id)arg1;
- (void).cxx_destruct;
@end

