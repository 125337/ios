@interface EnterpriseBrandContactSelectViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, contactInfoDelegate, IEnterpriseBrandContactMgrExt>
{
    CContact * _mainBrandContact; // +0x68
    NSArray * _arySubContact; // +0x70
    CContact * _selectedContact; // +0x78
    MMTableView * _tableView; // +0x80
    MMScrollView * _emptyView; // +0x88
    unsigned int _scene; // +0x90
    id <EnterpriseBrandContactSelectViewControllerDelegate> _m_delegate; // +0x98
}
- (id)initWithMainContact:(id)arg1 scene:(unsigned int)arg2;
- (void)initData;
- (void)initView;
- (void)initTableView;
- (void)initEmptyView;
- (void)updateEmptyView;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onEnterpriseBrandContactChanged:(id)arg1;
- (void)onEnterpriseBrandContactDeleted:(id)arg1;
- (void)selectContact:(id)arg1;
- (void)openSubBrandInfo:(id)arg1;
- (void)confirmToSend;
- (void)cancelSelect:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

