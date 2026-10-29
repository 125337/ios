@interface BraceletRankSourceSettingViewController : MMUIViewController <IWCDeviceBrandMgrExt, UITableViewDelegate, UITableViewDataSource, IWCDevicePedometerSearchViewControllerExt>
{
    NSMutableArray * m_DataSourcList; // +0x68
    map<unsigned long, unsigned int, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned int>>> m_mapSectionType; // +0x70
    NSMutableArray * m_RowDataList; // +0x88
    MMTableView * m_tableView; // +0x90
    NSString * m_nsDataSourceFaqURL; // +0x98
    NSString * m_nsWatchDataSourceFaqURL; // +0xa0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)resetSection;
- (void)updateTableSectionWithStepOnState:(BOOL)arg1;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)makeAddPedometerCell:(id)arg1;
- (void)reloadTableData;
- (void)getTitle:(id *)arg1 detail:(id *)arg2 atIndex:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onGetSportDeviceListEnd:(id)arg1 DataSourceFaqURL:(id)arg2 WatchDataSourceFaqURL:(id)arg3 ErrorCode:(int)arg4;
- (id)makeMockM7Device;
- (id)makeMockAppleWatchDevice;
- (BOOL)isM7Device:(id)arg1;
- (void)onAddSportDevice:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

