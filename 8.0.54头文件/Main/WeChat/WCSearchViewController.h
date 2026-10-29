@interface WCSearchViewController : MMUIViewController <_TtP4Hero26HeroViewControllerDelegate_, HeroInteractiveTransitionPage, WCSearchTransitionViewSource>
{
    BOOL _isPresentFromHeroAnimation; // +0x68
    BOOL _forceFullScreenPresent; // +0x69
    BOOL _focusTexfieldWhenFirstShow; // +0x6a
    BOOL _useNoSnapshotTransition; // +0x6b
    BOOL _focusTextfieldWhenViewAppear; // +0x6c
    BOOL _shouldRestoreNavigationBar; // +0x6d
    WCSearchBar * _searchBar; // +0x70
    UIView * _contentView; // +0x78
    UIView * _navBarContainerView; // +0x80
    UIScreenEdgePanGestureRecognizer * _leftEdgePanGestureRecognizer; // +0x88
    _TtC6WeChat25WCSearchTransitionManager * _transitionMgr; // +0x90
    MMPageSheetAdapter * _sheetAdapter; // +0x98
    WCSearchBar * _fromSearchBar; // +0xa0
    UIViewController * _fromVC; // +0xa8
    UINavigationController * _originalNav; // +0xb0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initWCSearchViewControllerView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)shouldHideNavigationBar;
- (BOOL)useCustomNavibar;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)configLeftBackButton;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2 forceFullScreen:(BOOL)arg3;
- (void)startSearchFrom:(id)arg1;
- (void)startSearchFrom:(id)arg1 searchBarOffset:(double)arg2;
- (void)realStartSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2;
- (void)__startSearchFrom:(id)arg1;
- (void)__startSearchFrom:(id)arg1 forceFullScreen:(BOOL)arg2;
- (void)addLeftEdgeGestureState;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)onNavigationBackItemClick;
- (void)onNavigationCancelItemClick;
- (BOOL)enableShowKeyboardWhenViewWillAppear;
- (id)customSearchBar;
- (id)searchBar;
- (id)transitionMgr;
- (double)searchBarHeight;
- (BOOL)isHalfPage;
- (void)heroDidEndTransition;
- (void)heroDidCancelTransition;
- (void)heroWillStartAnimatingFromViewController:(id)arg1;
- (void)heroDidEndAnimatingFromViewController:(id)arg1;
- (id)animatableViews;
- (unsigned long long)interactiveTransitionType;
- (void)onStartInteractivePop;
- (void)onEndInteractivePop:(BOOL)arg1;
- (id)getSearchBar;
- (id)getNavBackgroundView;
- (id)getContentView;
- (void)setSearchBar:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)navBarContainerView;
- (void)setNavBarContainerView:(id)arg1;
- (id)leftEdgePanGestureRecognizer;
- (void)setLeftEdgePanGestureRecognizer:(id)arg1;
- (void)setTransitionMgr:(id)arg1;
- (BOOL)isPresentFromHeroAnimation;
- (void)setIsPresentFromHeroAnimation:(BOOL)arg1;
- (BOOL)forceFullScreenPresent;
- (void)setForceFullScreenPresent:(BOOL)arg1;
- (BOOL)focusTexfieldWhenFirstShow;
- (void)setFocusTexfieldWhenFirstShow:(BOOL)arg1;
- (BOOL)useNoSnapshotTransition;
- (void)setUseNoSnapshotTransition:(BOOL)arg1;
- (id)sheetAdapter;
- (void)setSheetAdapter:(id)arg1;
- (BOOL)focusTextfieldWhenViewAppear;
- (void)setFocusTextfieldWhenViewAppear:(BOOL)arg1;
- (id)fromSearchBar;
- (void)setFromSearchBar:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (BOOL)shouldRestoreNavigationBar;
- (void)setShouldRestoreNavigationBar:(BOOL)arg1;
- (id)originalNav;
- (void)setOriginalNav:(id)arg1;
- (void).cxx_destruct;
@end

