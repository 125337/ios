@interface FavAddressDataController : NSObject <WALocationGetterDelegate, FavSearchHelperDelegate, IFavoritesExt, UITableViewDelegate, UITableViewDataSource>
{
    BOOL _hasSetCurrentLocation; // +0x8
    BOOL _dataLoadComplete; // +0x9
    NSMutableArray * _arrDataWraps; // +0x10
    id <FavAddressDataControllerDelegate> _delegate; // +0x18
    NSMutableArray * _arrClassDatas; // +0x20
    WALocationGetter * _locationGetter; // +0x28
    NSDictionary * _dicCurrentLocationName; // +0x30
    FavSearchHelper * _favSearchHelper; // +0x38
    CLLocation * _currentLocation; // +0x40
}
- (id)init;
- (void)markDataLoadComplete;
- (void)clearData;
- (void)classifyFilterDataAddress;
- (id)getCountryOfDataItem:(id)arg1;
- (id)getCityOfDataItem:(id)arg1;
- (void)retrieveLocation;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)genAddressCellView:(id)arg1 indexPath:(id)arg2 inTableView:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)onFindArrAddress;
- (void)onFindAddress:(id)arg1;
- (void)onGetLocationSuccess:(id)arg1;
- (void)onGetLocationFailedWithReason:(unsigned long long)arg1;
- (void)OnDelFavoritesItems:(id)arg1;
- (id)arrDataWraps;
- (void)setArrDataWraps:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)arrClassDatas;
- (void)setArrClassDatas:(id)arg1;
- (id)locationGetter;
- (void)setLocationGetter:(id)arg1;
- (id)dicCurrentLocationName;
- (void)setDicCurrentLocationName:(id)arg1;
- (BOOL)hasSetCurrentLocation;
- (void)setHasSetCurrentLocation:(BOOL)arg1;
- (id)favSearchHelper;
- (void)setFavSearchHelper:(id)arg1;
- (id)currentLocation;
- (void)setCurrentLocation:(id)arg1;
- (BOOL)dataLoadComplete;
- (void)setDataLoadComplete:(BOOL)arg1;
- (void).cxx_destruct;
@end
