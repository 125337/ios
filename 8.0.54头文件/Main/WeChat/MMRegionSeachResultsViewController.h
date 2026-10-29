@interface MMRegionSeachResultsViewController : WCPayBaseViewController
{
    NSArray * _results; // +0x90
    id <MMRegionSeachResultsViewControllerDelegate> _delegate; // +0x98
    UISearchController * _searchController; // +0xa0
    NSMutableArray * _countries; // +0xa8
    NSMutableArray * _provinces; // +0xb0
    NSMutableArray * _cities; // +0xb8
    double _searchBackgroundY; // +0xc0
    double _searchBackgroundHeight; // +0xc8
}
- (void)viewDidLoad;
- (void)setupData;
- (void)reloadData;
- (void)clickInfoCell:(id)arg1;
- (void)fixSearchBarBackgroundWhenActive;
- (void)viewDidLayoutSubviews;
- (id)results;
- (void)setResults:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)countries;
- (void)setCountries:(id)arg1;
- (id)provinces;
- (void)setProvinces:(id)arg1;
- (id)cities;
- (void)setCities:(id)arg1;
- (double)searchBackgroundY;
- (void)setSearchBackgroundY:(double)arg1;
- (double)searchBackgroundHeight;
- (void)setSearchBackgroundHeight:(double)arg1;
- (void).cxx_destruct;
@end

