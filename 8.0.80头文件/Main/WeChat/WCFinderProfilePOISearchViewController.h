@interface WCFinderProfilePOISearchViewController : MMUIHalfScreenViewController <UISearchBarDelegate, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, WCFinderProfilePOISearchViewModelDelegate, WCFinderRefreshTableFooterViewDelegate>
{
    MMUIButton * _arrowButton; // +0x70
    UILabel * _titleLabel; // +0x78
    MMUISearchBar * _searchBar; // +0x80
    UITableView * _tableView; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
    UILabel * _stateTipsLabel; // +0x98
    NSString * _currentText; // +0xa0
    WCFinderProfilePOISearchViewModel * _viewModel; // +0xa8
}
- (id)initWithFinderUsername:(id)arg1 viewScene:(int)arg2;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)initViews;
- (void)updateSearchBar;
- (void)didClickClose;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onPOISearchResultChanged;
- (void)onPOISearchResultError;
- (void)onFetchResultChanged;
- (void)onFetchResultNoMore;
- (void)onFetchResultError;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (BOOL)isEnableTriggerRefreshAtScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateTitle;
- (id)arrowButton;
- (id)titleLabel;
- (id)searchBar;
- (id)tableView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateSearchBarAppearance;
- (void)setArrowButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)stateTipsLabel;
- (void)setStateTipsLabel:(id)arg1;
- (id)currentText;
- (void)setCurrentText:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
