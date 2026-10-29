@interface MMRegionSeachResultsViewController : WCPayBaseViewController
{
    NSArray * _results; // +0x98
    id <MMRegionSeachResultsViewControllerDelegate> _delegate; // +0xa0
    UISearchController * _searchController; // +0xa8
    NSMutableArray * _countries; // +0xb0
    NSMutableArray * _provinces; // +0xb8
    NSMutableArray * _cities; // +0xc0
    double _searchBackgroundY; // +0xc8
    double _searchBackgroundHeight; // +0xd0
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
