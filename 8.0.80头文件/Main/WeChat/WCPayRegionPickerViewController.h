@interface WCPayRegionPickerViewController : WCPayBaseViewController <UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, MMRegionSeachResultsViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    MMTableView * m_tableView; // +0x98
    NSMutableDictionary * m_dataDict; // +0xa0
    NSMutableArray * m_dataAry; // +0xa8
    BOOL m_isInitRegionCode; // +0xb0
    NSString * m_selectedRegionCode; // +0xb8
    MMRegionCodeMgr * m_regionCodeMgr; // +0xc0
    NSArray * arrCurRegionCodes; // +0xc8
    LocationRetriever * _locationRetriever; // +0xd0
    int m_iLocationRetrieveResult; // +0xd8
    NSMutableArray * m_arrServerReturnCode; // +0xe0
    BOOL m_bInCurrent; // +0xe8
    BOOL _isTopLevel; // +0xe9
    BOOL _openSearch; // +0xea
    BOOL _chinaFirst; // +0xeb
    UIViewController * topController; // +0xf0
    id <WCPayRegionPickerViewControllerDelegate> _delegate; // +0xf8
    NSArray * _allRegions; // +0x100
    UISearchController * _searchController; // +0x108
    MMRegionSeachResultsViewController * _resultsController; // +0x110
    NSArray * _foreignCountries; // +0x118
    double _searchBackgroundY; // +0x120
    double _searchBackgroundHeight; // +0x128
}
- (id)initWithArray:(id)arg1;
- (void)addToChina:(id)arg1 With:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)fixSearchBarBackgroundWhenActive;
- (void)initRegion;
- (void)initTableView;
- (void)setupView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnDataChange;
- (void)OnReturn;
- (void)scrollToRegion:(id)arg1;
- (BOOL)isLocationRetrieving;
- (BOOL)isLocationSection:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)setupSearch;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)resultVC:(id)arg1 didSelectedRegion:(id)arg2;
- (void)didPresentSearchController:(id)arg1;
- (void)didDismissSearchController:(id)arg1;
- (BOOL)isForeignCountriesEntranceCell:(id)arg1;
- (id)makeForeginEntrance:(id)arg1;
- (void)selectForeignCountriesEntranceCell;
- (void)didSelectRegion:(id)arg1;
- (id)getResultsWithRegion:(id)arg1;
- (id)topController;
- (void)setTopController:(id)arg1;
- (BOOL)isTopLevel;
- (void)setIsTopLevel:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)selectedRegionCode;
- (void)setSelectedRegionCode:(id)arg1;
- (id)arrCurRegionCodes;
- (void)setArrCurRegionCodes:(id)arg1;
- (BOOL)openSearch;
- (void)setOpenSearch:(BOOL)arg1;
- (BOOL)chinaFirst;
- (void)setChinaFirst:(BOOL)arg1;
- (id)allRegions;
- (void)setAllRegions:(id)arg1;
- (id)searchController;
- (void)setSearchController:(id)arg1;
- (id)resultsController;
- (void)setResultsController:(id)arg1;
- (id)foreignCountries;
- (void)setForeignCountries:(id)arg1;
- (double)searchBackgroundY;
- (void)setSearchBackgroundY:(double)arg1;
- (double)searchBackgroundHeight;
- (void)setSearchBackgroundHeight:(double)arg1;
- (void).cxx_destruct;
@end
