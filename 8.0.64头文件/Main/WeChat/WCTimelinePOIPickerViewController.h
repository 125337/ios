@interface WCTimelinePOIPickerViewController : MMUILandscapeSheetViewController <UITableViewDelegate, MMTableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate, WCSearchDelegate, WCDataSearchDelegate, ILBSLifeMgrExt, LocationRetrieveDelegate, ILocationMgrExt, POICreateDelegate, IPOILocationDisplayExt, MMAutoSearchLogicDelegate>
{
    id <WCTimelinePOIPickerViewControllerDelegate> _delegate; // +0x70
    BOOL _bSightScene; // +0x78
    NSString * _searchKeyword; // +0x80
    MMTableView * _tableView; // +0x88
    WCDataSearcher * _searcher; // +0x90
    UIView * _logoFooterView; // +0x98
    LocationRetriever * _locationRetriever; // +0xa0
    CLLocation * _lastUpdateLocation; // +0xa8
    WCTimeLineFooterView * _getListTableFooterView; // +0xb0
    WCTimeLineFooterView * _searchTableFooterView; // +0xb8
    unsigned int _scene; // +0xc0
    NSMutableArray * _lifeList; // +0xc8
    NSMutableArray * _searchResultList; // +0xd0
    unsigned long long _geoTag; // +0xd8
    UILabel * _searchErrorTips; // +0xe0
    NSString * _address; // +0xe8
    NSString * _addressAdCode; // +0xf0
    LbsLife * _selectedItem; // +0xf8
    int _poiCreateForbiden; // +0x100
    BOOL _showCreatePOI; // +0x104
    long long _startGetListTime; // +0x108
    long long _firstGetListTime; // +0x110
    long long _endGetListTime; // +0x118
    unsigned int _getListPageCount; // +0x120
    long long _startSearchTime; // +0x128
    long long _firstSearchTime; // +0x130
    long long _endSearchTime; // +0x138
    unsigned int _searchPageCount; // +0x140
    unsigned int _entryTime; // +0x144
    NSString * _lastSelectLog; // +0x148
    NSString * _currentSearchID; // +0x150
    unsigned int _statImageCount; // +0x158
    unsigned int _statLocationImageCount; // +0x15c
    BOOL _statHadSearch; // +0x160
    NSString * _requestId; // +0x168
    MMAutoSearchLogic * _autoSearchLogic; // +0x170
    NSIndexPath * _currentIndexPath; // +0x178
    NSIndexPath * _tempSelectedIndexPath; // +0x180
    UIView * _authorizationTipContainerView; // +0x188
    MMLocationAccuracyAuthorizationTipView * _accuracyAuthorizationTipView; // +0x190
    WCUIAlertView * _currAlertView; // +0x198
    BOOL _canAlert; // +0x1a0
    BOOL _enterBackground; // +0x1a1
    BOOL _isSearching; // +0x1a2
    BOOL _ignoreCityInfo; // +0x1a3
    BOOL _ignoreNotCheckInItem; // +0x1a4
    BOOL _isUseDrakMode; // +0x1a5
    BOOL _isShowDistance; // +0x1a6
    BOOL _forceAdjustTableViewInsetInLayout; // +0x1a7
    BOOL _enableFullRangeSearch; // +0x1a8
    BOOL _showAccuracyAuthorizationTip; // +0x1a9
    int _lbsLifeScene; // +0x1ac
    int _currentAuthLogType; // +0x1b0
    UIColor * _selectTintColor; // +0x1b8
    unsigned long long _locationAuthScene; // +0x1c0
}
+ (void)reportOnCommitWithString:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)initNotifications;
- (void)updateLocation:(id)arg1 imageCount:(unsigned int)arg2 locaionImageCount:(unsigned int)arg3;
- (void)reset;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (double)getTableViewMarginTop;
- (void)checkLocationAuthorization;
- (void)initView;
- (BOOL)showNavigationBarSepLine;
- (void)initAccuracyAuthorizationTipView;
- (void)initSearchBar;
- (void)updateSearchBarTips;
- (void)hideSearchBarTips;
- (void)initTableView;
- (void)addNotCheckInItem;
- (void)addSelectedItem;
- (void)setSelectedItemByLocationInfo:(id)arg1;
- (void)adjustSubviewRects;
- (void)showSearchTableLoadMore;
- (void)showDataProviderInfo:(id)arg1;
- (void)onCancel;
- (void)onDone;
- (id)getPOIReportStr4Commit;
- (unsigned int)getTrue11135ReportTypeFor:(unsigned int)arg1;
- (void)startUpdateLocation;
- (void)stopUpdateLocation;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)addCityItem:(id)arg1;
- (void)getAddressByLocation:(CLLocationCoordinate2D)arg1;
- (void)stopGeocoder;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)getLBSLife:(BOOL)arg1;
- (void)searchLBSLife:(id)arg1 StartFromFirst:(BOOL)arg2;
- (void)OnGetLBSLife:(id)arg1 Error:(int)arg2;
- (void)OnAutoSearchLBSLife:(id)arg1 Keyword:(id)arg2 NextQueryInterval:(double)arg3 Error:(int)arg4 IsStartFromFirst:(BOOL)arg5;
- (void)filterSearchResultList;
- (void)OnSearchLBSLife:(id)arg1 Keyword:(id)arg2 Error:(int)arg3 IsStartFromFirst:(BOOL)arg4;
- (void)addLBSLifeListItem:(id)arg1;
- (void)addSearchResultItem:(id)arg1;
- (void)addCreatePOIItem;
- (void)removeCreatePOIItem;
- (id)poiCityFromLbsLife:(id)arg1;
- (id)evolvePoiAddressFromLbsLife:(id)arg1;
- (void)selectLBSLife:(id)arg1 poiSourceType:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)makeCell:(id)arg1 forLBSLifeItem:(id)arg2;
- (id)descLabelTextWithLBSLifeItem:(id)arg1;
- (id)makeCellForCreatePOIItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didScrollViewScroll:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)wcsSearchBarTextDidEndEditing:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsWillDismissSearch:(id)arg1;
- (void)setSearchTableResultText:(id)arg1;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(BOOL)arg2;
- (void)onPOICreated:(id)arg1 poiDistrict:(id)arg2 poiStreet:(id)arg3 PoiID:(id)arg4;
- (void)onGetPOIDisplayName:(id)arg1 ForLocation:(id)arg2 Scene:(int)arg3 SrcDisplayName:(id)arg4 extraInfo:(id)arg5 Error:(int)arg6;
- (void)setShowAccuracyAuthorizationTip:(BOOL)arg1;
- (void)updateAccuracyAuthorizationTipHidden;
- (void)adjustTableViewFrame;
- (void)showAlertForLocationAuthorization;
- (void)goToSettingLocationAuthorization;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (BOOL)wcsSearchBarShouldBeginEditing:(id)arg1;
- (void)setCurrentAuthLogType:(int)arg1;
- (void)setForbidCreatePOI:(int)arg1;
- (int)forbidCreatePOI;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)bSightScene;
- (void)setBSightScene:(BOOL)arg1;
- (int)lbsLifeScene;
- (void)setLbsLifeScene:(int)arg1;
- (BOOL)ignoreCityInfo;
- (void)setIgnoreCityInfo:(BOOL)arg1;
- (BOOL)ignoreNotCheckInItem;
- (void)setIgnoreNotCheckInItem:(BOOL)arg1;
- (id)selectTintColor;
- (void)setSelectTintColor:(id)arg1;
- (unsigned long long)locationAuthScene;
- (void)setLocationAuthScene:(unsigned long long)arg1;
- (BOOL)isUseDrakMode;
- (void)setIsUseDrakMode:(BOOL)arg1;
- (BOOL)isShowDistance;
- (void)setIsShowDistance:(BOOL)arg1;
- (BOOL)forceAdjustTableViewInsetInLayout;
- (void)setForceAdjustTableViewInsetInLayout:(BOOL)arg1;
- (BOOL)enableFullRangeSearch;
- (void)setEnableFullRangeSearch:(BOOL)arg1;
- (BOOL)showAccuracyAuthorizationTip;
- (int)currentAuthLogType;
- (void).cxx_destruct;
@end
