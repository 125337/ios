@interface WCFinderPOIRelatedListHalfTableViewSearchHeader : UITableViewHeaderFooterView <UISearchBarDelegate>
{
    MMUISearchBar * _searchBar; // +0x8
    id <WCFinderPOIRelatedListHalfTableViewSearchHeaderDelegate> _delegate; // +0x10
}
- (id)initWithReuseIdentifier:(id)arg1;
- (void)initSearchBar;
- (void)layoutSubviews;
- (void)clickSearchBar:(id)arg1;
- (void)updateSearchBarAppearance;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)mmsearchBarBecomeActive;
- (void)mmsearchBarResignActive;
- (id)searchBar;
- (void)setSearchBar:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

