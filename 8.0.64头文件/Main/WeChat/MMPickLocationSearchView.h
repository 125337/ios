@interface MMPickLocationSearchView : MMUIView <MMLocationSearchBarDelegate, MMLocationSearchResultTableViewDelegate, POITableViewCellDelegate, POICorrectionTextViewDelegate>
{
    BOOL _isFoldAnimating; // +0x8
    BOOL _expandViewForSearchBecomeActive; // +0x9
    BOOL _isExpanded; // +0xa
    BOOL _isSearchTableAutoScrolling; // +0xb
    BOOL _showAccuracyAuthorizationTip; // +0xc
    id <MMPickLocationActionDelegate> _actionDelegate; // +0x10
    MMLocationSearchBar * _searchBarLogic; // +0x18
    long long _currSearchState; // +0x20
    NSString * _searchKeyword; // +0x28
    MMPickLocationTopView * _topView; // +0x30
    MMPickLocationContentView * _contentView; // +0x38
    MMUIViewController * _contentController; // +0x40
    double _lastContentHeight; // +0x48
}
- (id)initWithContentController:(id)arg1 Manager:(id)arg2;
- (void)initSearchBarLogic;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateContentViewFrame;
- (void)setIsFoldAnimating:(BOOL)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)stopTableViewScrolling;
- (void)setTableViewIsScrolling:(BOOL)arg1;
- (void)reloadNearbyTableView;
- (void)finishSearch;
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
- (void)setTopView:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)contentController;
- (void)setContentController:(id)arg1;
- (double)lastContentHeight;
- (void)setLastContentHeight:(double)arg1;
- (void).cxx_destruct;
@end
