@interface EnterpriseFavContactListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IEnterpriseContactMgrExt>
{
    CContact * _chatBrandContact; // +0x70
    NSArray * _aryFav; // +0x78
    MMTableView * _tableView; // +0x80
    UIView * _emptyView; // +0x88
}
- (id)initWithSubChatContact:(id)arg1;
- (void)initData;
- (void)initView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)reloadAll;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)JumpToChatRoom:(id)arg1;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void).cxx_destruct;
@end
