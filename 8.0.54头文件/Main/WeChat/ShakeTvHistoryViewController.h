@interface ShakeTvHistoryViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate>
{
    MMTableView * _tableView; // +0x68
    NSMutableArray * _arrTvItem; // +0x70
}
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)initData;
- (void)initView;
- (void)onClearList;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
@end

