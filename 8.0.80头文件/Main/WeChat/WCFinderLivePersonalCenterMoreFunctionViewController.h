@interface WCFinderLivePersonalCenterMoreFunctionViewController : MMCPUIViewController <UITableViewDelegate, UITableViewDataSource, MMFinderLiveMoreFunctionBaseCellDelegate, WCFinderUserPrepareExt, WCFinderLiveExt, MMLiveRewardQuotaPolicySheetViewDelegate>
{
    BOOL _openRewardLimitNotify; // +0x70
    MMTableView * _mainTableView; // +0x78
    NSMutableArray * _items; // +0x80
    NSMutableArray * _privacyItems; // +0x88
    FinderLivePersonalCenterPrepareInfo * _info; // +0x90
    FinderLiveRewardQuotaSwitchInfo * _rewardSwitchInfo; // +0x98
}
- (id)initWithInfo:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)getCommentSceneStr;
- (void)initData;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)headerFont;
- (double)headerViewHeight;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)moreFunctionIndexPath:(id)arg1 item:(id)arg2 isOn:(BOOL)arg3;
- (BOOL)getCurrentSwitchFlagWithScene:(int)arg1;
- (void)cancelAlertAction;
- (void)clickCloseRecommendLive;
- (void)changeRecommendSceneValue:(int)arg1;
- (void)reportEid:(id)arg1 isExpose:(BOOL)arg2;
- (void)reportEid:(id)arg1 isExpose:(BOOL)arg2 udfKv:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateRecentWatchEnable:(BOOL)arg1;
- (id)mainTableView;
- (void)onMMLiveRewardQuotaPolicySheetViewCancelButtonClicked;
- (void)onMMLiveRewardQuotaPolicySheetViewActionButtonClicked:(unsigned long long)arg1 verifyUrl:(id)arg2 secverifyId:(id)arg3 userInfo:(id)arg4;
- (void)finderUserPrepareUpdate:(id)arg1;
- (void)onLiveRecentWatchEntranceUpdate:(BOOL)arg1;
- (void)reloadData;
- (void)updateRewardAmounSwitch:(BOOL)arg1 rewardQuota:(unsigned long long)arg2;
- (void)innerUpdateRewardAmounSwitch:(BOOL)arg1 rewardQuota:(unsigned long long)arg2;
- (double)getHeightForRowAtIndexPath:(id)arg1;
- (double)calculateDetailWidthForCellWidth:(double)arg1;
- (double)getDetailStringHeightWithItem:(id)arg1;
- (double)getTitleStringHeightWithItem:(id)arg1;
- (BOOL)canDidSelectWithItem:(id)arg1;
- (void)setMainTableView:(id)arg1;
- (BOOL)openRewardLimitNotify;
- (void)setOpenRewardLimitNotify:(BOOL)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)privacyItems;
- (void)setPrivacyItems:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)rewardSwitchInfo;
- (void)setRewardSwitchInfo:(id)arg1;
- (void).cxx_destruct;
@end
