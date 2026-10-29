@interface WCFinderLivePersonalCenterMoreFunctionViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMoreFunctionBaseCellDelegate, WCFinderUserPrepareExt, MMLiveRewardQuotaPolicySheetViewDelegate>
{
    BOOL _openRewardLimitNotify; // +0x68
    MMTableView * _mainTableView; // +0x70
    NSMutableArray * _items; // +0x78
    FinderLiveRewardQuotaSwitchInfo * _rewardSwitchInfo; // +0x80
}
- (id)initWithRewardQuotaSwitchInfo:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)moreFunctionIndexPath:(id)arg1 item:(id)arg2 isOn:(BOOL)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)mainTableView;
- (void)onMMLiveRewardQuotaPolicySheetViewCancelButtonClicked;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)reloadData;
- (void)updateRewardAmounSwitch:(BOOL)arg1 rewardQuota:(unsigned long long)arg2;
- (void)innerUpdateRewardAmounSwitch:(BOOL)arg1 rewardQuota:(unsigned long long)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (double)getDetailStringHeightWithItem:(id)arg1;
- (double)getTitleStringHeightWithItem:(id)arg1;
- (BOOL)canDidSelectWithItem:(id)arg1;
- (void)setMainTableView:(id)arg1;
- (BOOL)openRewardLimitNotify;
- (void)setOpenRewardLimitNotify:(BOOL)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)rewardSwitchInfo;
- (void)setRewardSwitchInfo:(id)arg1;
- (void).cxx_destruct;
@end

