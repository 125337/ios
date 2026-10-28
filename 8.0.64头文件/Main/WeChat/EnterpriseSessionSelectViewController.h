@interface EnterpriseSessionSelectViewController : MMUIViewController <MMWebViewDelegate, UITableViewDataSource, UITableViewDelegate, IEnterpriseGroupMgrExt, IEnterpriseSessionMgrExt>
{
    unsigned int _scene; // +0x70
    CContact * _brandContact; // +0x78
    CEnterpriseContact * _selectedContact; // +0x80
    MMTableView * _tableView; // +0x88
    MMScrollView * _emptyView; // +0x90
    id <EnterpriseSessionSelectViewControllerDelegate> _delegate; // +0x98
}
- (id)initWithChatSubBrandContact:(id)arg1 scene:(unsigned int)arg2;
- (void)initView;
- (void)initTableView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onWebViewWillClose:(id)arg1;
- (void)onEnterpriseChatSessionChanged:(id)arg1;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)makeNewSessionCell:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)selectContact:(id)arg1;
- (void)openCreateChat;
- (void)createSingleChat:(id)arg1;
- (void)createChatroom:(id)arg1;
- (void)cancelSelect:(id)arg1;
- (void)confirmSelect;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
