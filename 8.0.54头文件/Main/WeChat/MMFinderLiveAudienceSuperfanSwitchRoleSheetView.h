@interface MMFinderLiveAudienceSuperfanSwitchRoleSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _switchRoleCallback; // +0x8
    MMFinderLiveTaskId * _liveTaskId; // +0x10
    UITableView * _tableView; // +0x18
    NSArray * _roleInfos; // +0x20
    MMFinderJoinLiveContext * _liveContext; // +0x28
}
- (id)initWithLiveTaskId:(id)arg1;
- (void)setupPageSheetConfig;
- (void)initViewsAndData;
- (void)safeAreaInsetsDidChange;
- (id)getSuperfanBadgeForAliasType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id /* block */)switchRoleCallback;
- (void)setSwitchRoleCallback:(id /* block */)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)roleInfos;
- (void)setRoleInfos:(id)arg1;
- (id)liveContext;
- (void)setLiveContext:(id)arg1;
- (void).cxx_destruct;
@end

