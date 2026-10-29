@interface WCEditGroupViewController : MMUIViewController <MMTableViewDelegate, UITableViewDelegate, UITableViewDataSource, MultiSelectContactsViewControllerDelegate, WCFacadeExt>
{
    MMTableView * m_tableView; // +0x68
    NSMutableArray * m_arrMyGroup; // +0x70
}
- (void)loadMyGroups;
- (void)initData;
- (void)initFooterView;
- (void)initTableView;
- (void)initView;
- (void)updateView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)startLoadingWithTitle:(id)arg1;
- (void)stopLoading;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)OnEdit;
- (void)OnEditDone;
- (void)onNewGroup;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onWCGroupUpdated;
- (void)onWCGroupUpdatedReturn:(BOOL)arg1;
- (void).cxx_destruct;
@end

