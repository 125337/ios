@interface WCSearcher : NSObject <UISearchControllerDelegate, UISearchBarDelegate, WCSearchControllDelegate, MMSearchPanGestureControlDelegate>
{
    WCTimeLineFooterView * _tableFooterView; // +0x8
    BOOL _nonAnimatedStart; // +0x10
    BOOL _bForbidAutoLayoutDuringSearchAnimation; // +0x11
    BOOL _isUseGuideView; // +0x12
    BOOL _isCustomDisplayView; // +0x13
    BOOL _becomeFRWithoutSetActive; // +0x14
    BOOL _bUsePanGesture; // +0x15
    BOOL _bUseSearchBarNotInSearcher; // +0x16
    BOOL _shouldRestoreNavBarWhenDismiss; // +0x17
    BOOL _isSetInactiveByPopGesture; // +0x18
    BOOL _shouldSearchWhenDoneBtnClick; // +0x19
    BOOL _originDefinesPresentationContext; // +0x1a
    BOOL _noAnimatedPresentOrDismissing; // +0x1b
    WCSearchController * _searchController; // +0x20
    id <WCSearchDelegate> _delegate; // +0x28
    MMUIViewController * _viewController; // +0x30
    UIView * _searchContainerView; // +0x38
    MMTableView * _resultTableView; // +0x40
    UIView * _guideContentView; // +0x48
    long long _returnKeyType; // +0x50
    Class _searchControllerClass; // +0x58
    MMSearchPanGestureController * _panCancelGesture; // +0x60
    id /* block */ _completeHandler; // +0x68
    MMUISearchBar * _searchBarNotInSearcher; // +0x70
    NSArray * _originalAccessibilityElements; // +0x78
    UINavigationController * _navigationController; // +0x80
}
- (id)initWithContentViewController:(id)arg1;
- (id)initWithContentViewController:(id)arg1 searchControllerClass:(Class)arg2;
- (void)dealloc;
- (void)commonInit;
- (void)setIsUseGuideView:(BOOL)arg1;
- (id)guideContentView;
- (id)searchBar;
- (id)searchBarNotInSearcher;
- (id)wcsPanGesture;
- (void)internalAddResultTableView;
- (void)internalAddGuideView;
- (void)enableCancelButton;
- (void)internalAddViews;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)pushSearchControllerWithCompletion:(id /* block */)arg1;
- (void)prepareSearchBarInNavMode;
- (void)setChangeText:(id)arg1;
- (void)setBecomeFRWithoutSetActive:(BOOL)arg1;
- (id)searchContainerView;
- (void)hookFixTextFieldHeight;
- (void)setLoadingFooterView:(id)arg1;
- (void)setNoResultFooterView:(id)arg1;
- (void)setEmptyFooterView;
- (void)onSearchBarMoveToContainerView:(id)arg1;
- (void)willPresentSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (void)presentSearchController:(id)arg1;
- (void)onWCSearchControllerDidLoad;
- (void)onWCSearchControllerWillAppear:(BOOL)arg1;
- (void)onWCSearchControllerDidAppear:(BOOL)arg1;
- (void)onWCSearchControllerWillDisappear:(BOOL)arg1;
- (void)onWCSearchControllerDidDisappear:(BOOL)arg1;
- (void)onWCSearchControllerAccessibilityPerformEscape;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarBookmarkButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarResultsListButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;
- (void)implVCIsSearchActiveMethodIfNeeded;
- (BOOL)isSeachActive;
- (void)wcsKeyboardWillHide:(id)arg1;
- (void)preparePanGesture;
- (void)resetPanGesture;
- (void)onTriggerToMoveRight;
- (id)gesturingBottomView;
- (void)onBeginDrag;
- (void)onTriggerToCancelMove;
- (void)didCancelMove;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (BOOL)nonAnimatedStart;
- (void)setNonAnimatedStart:(BOOL)arg1;
- (BOOL)bForbidAutoLayoutDuringSearchAnimation;
- (void)setBForbidAutoLayoutDuringSearchAnimation:(BOOL)arg1;
- (BOOL)isUseGuideView;
- (BOOL)isCustomDisplayView;
- (void)setIsCustomDisplayView:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void)setSearchContainerView:(id)arg1;
- (id)resultTableView;
- (void)setResultTableView:(id)arg1;
- (void)setGuideContentView:(id)arg1;
- (BOOL)becomeFRWithoutSetActive;
- (long long)returnKeyType;
- (void)setReturnKeyType:(long long)arg1;
- (BOOL)bUsePanGesture;
- (void)setBUsePanGesture:(BOOL)arg1;
- (BOOL)bUseSearchBarNotInSearcher;
- (void)setBUseSearchBarNotInSearcher:(BOOL)arg1;
- (BOOL)shouldRestoreNavBarWhenDismiss;
- (void)setShouldRestoreNavBarWhenDismiss:(BOOL)arg1;
- (BOOL)isSetInactiveByPopGesture;
- (void)setIsSetInactiveByPopGesture:(BOOL)arg1;
- (BOOL)shouldSearchWhenDoneBtnClick;
- (void)setShouldSearchWhenDoneBtnClick:(BOOL)arg1;
- (Class)searchControllerClass;
- (void)setSearchControllerClass:(Class)arg1;
- (BOOL)originDefinesPresentationContext;
- (void)setOriginDefinesPresentationContext:(BOOL)arg1;
- (BOOL)noAnimatedPresentOrDismissing;
- (void)setNoAnimatedPresentOrDismissing:(BOOL)arg1;
- (id)panCancelGesture;
- (void)setPanCancelGesture:(id)arg1;
- (id /* block */)completeHandler;
- (void)setCompleteHandler:(id /* block */)arg1;
- (void)setSearchBarNotInSearcher:(id)arg1;
- (id)originalAccessibilityElements;
- (void)setOriginalAccessibilityElements:(id)arg1;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (void).cxx_destruct;
@end

