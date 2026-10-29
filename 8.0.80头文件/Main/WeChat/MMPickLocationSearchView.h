@interface MMPickLocationSearchView : MMUIView <MMLocationSearchBarDelegate, MMLocationSearchResultTableViewDelegate, POITableViewCellDelegate, POICorrectionTextViewDelegate>
{
    BOOL _isFoldAnimating; // +0x8
    BOOL _expandViewForSearchBecomeActive; // +0x9
    BOOL _isExpanded; // +0xa
    BOOL _isSearchTableAutoScrolling; // +0xb
    BOOL _showAccuracyAuthorizationTip; // +0xc
    BOOL _isSearchFooterClearState; // +0xd
    BOOL _hasPendingSearchWithoutMoreEvent; // +0xe
    BOOL _hasReportedSearchWithoutMoreEvent; // +0xf
    id <MMPickLocationActionDelegate> _actionDelegate; // +0x10
    MMLocationSearchBar * _searchBarLogic; // +0x18
    long long _currSearchState; // +0x20
    NSString * _searchKeyword; // +0x28
    NSString * _sessionId; // +0x30
    MMPickLocationTopView * _topView; // +0x38
    MMPickLocationContentView * _contentView; // +0x40
    MMUIViewController * _contentController; // +0x48
    double _lastContentHeight; // +0x50
    NSString * _pendingSearchWithoutMoreKeyword; // +0x58
    unsigned long long _pendingSearchWithoutMoreCount; // +0x60
}
- (id)initWithContentController:(id)arg1 Manager:(id)arg2;
- (void)dealloc;
- (void)initSearchBarLogic;
- (void)bindRecentSentKeywordButtons;
- (void)bindRecentSentKeywordViewPanGesture;
- (void)onRecentSentKeywordViewPanGesture:(id)arg1;
- (void)onClickRecentSentKeywordButton:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)updateContentViewFrame;
- (void)resetSearchWithoutMoreEventReportState;
- (void)prepareSearchWithoutMoreEventReportWithCount:(unsigned long long)arg1;
- (BOOL)isSearchFooterViewExposed;
- (void)tryReportSearchWithoutMoreEventIfNeeded;
- (void)setIsFoldAnimating:(BOOL)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)updateRecentSentKeywordViewVisible;
- (void)stopTableViewScrolling;
- (void)setTableViewIsScrolling:(BOOL)arg1;
- (void)reloadNearbyTableView;
- (void)finishSearch;
- (double)contentOffsetYForRow:(unsigned long long)arg1 inTableView:(id)arg2;
- (void)scrollNearbyTableViewToVisible:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (void)scrollNearbyTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (BOOL)isNearbyCellIndexVisible:(unsigned long long)arg1;
- (void)scrollSearchTableViewToVisibleCompletely:(unsigned long long)arg1 Animated:(BOOL)arg2;
- (BOOL)isSearchCellIndexVisible:(unsigned long long)arg1;
- (void)reloadSearchResultTableView;
- (void)updateNearbyFooterView:(long long)arg1;
- (void)updateSearchFooterView:(long long)arg1;
- (void)updateFooterView:(id)arg1 WithState:(long long)arg2;
- (void)setSearchErrorTipsHidden:(BOOL)arg1;
- (void)refreshNearTableViewDataDidFinishLoading;
- (void)refreshSearchTableViewDataDidFinishLoading;
- (id)searchTableFooterView;
- (id)nearTableFooterView;
- (id)topView;
- (id)contentView;
- (void)mmSearchBarTextDidBeginEditing:(id)arg1;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchBarSearchButtonClicked:(id)arg1;
- (void)mmSearchBarCancelButtonClicked:(id)arg1;
- (void)mmsearchBarBecomeActive;
- (void)mmsearchBarWillBeginSearch;
- (void)mmsearchBarResignActive;
- (void)mmSearchBarSearchingStateChanged;
- (double)searchCellWidth;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 AtIndexPath:(id)arg2;
- (void)searchTableViewCellWillDisplay:(id)arg1 index:(id)arg2;
- (void)didSearchViewTableScroll:(id)arg1;
- (void)didSearchViewTableBeginDragging:(id)arg1;
- (void)didSearchViewTableEndScrollingAnimation:(id)arg1;
- (void)didSearchViewTableEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didSearchViewTableEndDecelerating:(id)arg1;
- (void)tableView:(id)arg1 didSelectAt:(id)arg2;
- (id)searchResultItemAt:(unsigned long long)arg1;
- (BOOL)isSearching;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (double)expandTableViewVisbleHeight;
- (void)setPoiSessionId:(id)arg1;
- (void)setShowAccuracyAuthorizationTip:(BOOL)arg1;
- (void)updateAccuracyAuthorizationTipHidden;
- (id)poiCorrectionKeyWord;
- (BOOL)isFoldAnimating;
- (BOOL)expandViewForSearchBecomeActive;
- (void)setExpandViewForSearchBecomeActive:(BOOL)arg1;
- (id)actionDelegate;
- (id)searchBarLogic;
- (void)setSearchBarLogic:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isSearchTableAutoScrolling;
- (long long)currSearchState;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (BOOL)showAccuracyAuthorizationTip;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)setTopView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)contentController;
- (void)setContentController:(id)arg1;
- (double)lastContentHeight;
- (void)setLastContentHeight:(double)arg1;
- (BOOL)isSearchFooterClearState;
- (void)setIsSearchFooterClearState:(BOOL)arg1;
- (BOOL)hasPendingSearchWithoutMoreEvent;
- (void)setHasPendingSearchWithoutMoreEvent:(BOOL)arg1;
- (BOOL)hasReportedSearchWithoutMoreEvent;
- (void)setHasReportedSearchWithoutMoreEvent:(BOOL)arg1;
- (id)pendingSearchWithoutMoreKeyword;
- (void)setPendingSearchWithoutMoreKeyword:(id)arg1;
- (unsigned long long)pendingSearchWithoutMoreCount;
- (void)setPendingSearchWithoutMoreCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
