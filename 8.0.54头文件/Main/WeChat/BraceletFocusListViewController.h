@interface BraceletFocusListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, BraceletSportRecordDelegate, IDeviceRankProfileMgrExt>
{
    DeviceRankDetailResonse * _detailResp; // +0x68
    NSMutableArray * _arrFollowItems; // +0x70
    MMTableView * _tableView; // +0x78
    UILabel * _noFocusTipsLabel; // +0x80
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)reloadData;
- (void)initView;
- (void)onAddFocus:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (id)detailResp;
- (void)setDetailResp:(id)arg1;
- (id)arrFollowItems;
- (void)setArrFollowItems:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)noFocusTipsLabel;
- (void)setNoFocusTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

