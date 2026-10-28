@interface WCPaySelectBankSearchResultViewController : WCPayBaseViewController
{
    id <WCPaySelectBankSearchResultViewControllerDelegate> _delegate; // +0x98
    NSArray * _results; // +0xa0
    UISearchController * _searchController; // +0xa8
    double _searchBackgroundY; // +0xb0
    double _searchBackgroundHeight; // +0xb8
}
- (void)viewDidLoad;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
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
- (void).cxx_destruct;
@end
