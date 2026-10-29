@interface CircleToSearchViewController : MMUIViewController <TransitioningAnimationDelegate, INetworkStatusMgrExt>
{
    int _halfScreenType; // +0x68
    CircleToSearchEntity * _entity; // +0x70
    MMUIButton * _closeButton; // +0x78
    MMUIButton * _debugButton; // +0x80
    CircleToSearchScrollView * _scrollView; // +0x88
    CircleToSearchLoadingView * _loadingView; // +0x90
    MMUIView * _contentView; // +0x98
    WCWebSearchViewControllerNewH5 * _searchPage; // +0xa0
    ShowFullScreenAnimationController * _transitionController; // +0xa8
}
+ (void)presentFromViewController:(id)arg1 withEntity:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (void)configFullScreenTransitionForNavigationController:(id)arg1;
- (id)scrollView;
- (id)loadingView;
- (id)closeButton;
- (id)debugButton;
- (id)contentView;
- (void)viewDidLoad;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)dealloc;
- (void)showVCAnimation;
- (void)hideVCAnimation;
- (void)handleCloseButtonClick:(id)arg1;
- (void)handleDebugButtonClick:(id)arg1;
- (void)handleScrollViewTapGesture:(id)arg1;
- (void)handleEdgeGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)updateScreenEdgesDeferringSystemGestures;
- (id)getShadowedImage:(id)arg1;
- (id)getHalfScreenTypeNameForType:(int)arg1;
- (double)getHalfScreenHeightForType:(int)arg1 andViewHeight:(double)arg2;
- (double)getHalfScreenHeightForType:(int)arg1;
- (int)getHalfScreenTypeForTypeName:(id)arg1;
- (void)willSwitchHalfScreenType;
- (void)doSwitchHalfScreenType:(int)arg1 withAnimationDuration:(double)arg2 andCompletion:(id /* block */)arg3;
- (void)doSwitchHalfScreenTypeInitAndDismissAnimated:(BOOL)arg1;
- (void)onCircleToSearchEvent:(id)arg1 andData:(id)arg2;
- (void)handleCircleToSearchAction:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionStartLoadingAnimation:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionStopLoadingAnimation:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionGetImageUrlList:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionFocus:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionChangeHeight:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionDismiss:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionShowToast:(id)arg1 andCompletion:(id /* block */)arg2;
- (void)handleCircleToSearchActionDebug:(id)arg1 andCompletion:(id /* block */)arg2;
- (BOOL)hidesStatusBar;
- (BOOL)useTransparentNavibar;
- (BOOL)shouldHideNavigationBar;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (void)onNetworkWeakChanged:(BOOL)arg1 currentRTT:(unsigned int)arg2;
- (id)entity;
- (void)setEntity:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setDebugButton:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)searchPage;
- (void)setSearchPage:(id)arg1;
- (int)halfScreenType;
- (void)setHalfScreenType:(int)arg1;
- (id)transitionController;
- (void)setTransitionController:(id)arg1;
- (void).cxx_destruct;
@end

