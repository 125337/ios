@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController
{
    BOOL _hasSavedSearchBackground; // +0x98
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate; // +0xa0
    NSArray * _results; // +0xa8
    UISearchController * _searchController; // +0xb0
    double _searchBackgroundY; // +0xb8
    double _searchBackgroundHeight; // +0xc0
}
- (void)viewDidLoad;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (double)tableViewTopInsetWhenActive;
- (void)didReceiveMemoryWarning;
- (void)reloadData;
- (void)makeSearchBankCell:(id)arg1 CellInfo:(id)arg2;
- (void)clickInfoCell:(id)arg1;
- (id)tableViewForHeader;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (double)searchBackgroundY;
- (void)setSearchBackgroundY:(double)arg1;
- (double)searchBackgroundHeight;
- (void)setSearchBackgroundHeight:(double)arg1;
- (BOOL)hasSavedSearchBackground;
- (void)setHasSavedSearchBackground:(BOOL)arg1;
- (void).cxx_destruct;
@end
