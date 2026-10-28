@interface WCFinderMsgChangeRoleView : WCFinderCustomPanelSheet <UITableViewDelegate, UITableViewDataSource>
{
    id /* block */ _changeSuccessfulBlock; // +0x70
    UITableView * _tableView; // +0x78
    NSArray * _cellViewModel; // +0x80
    UIView * _roleContainerView; // +0x88
    WCFinderMsgChangeRoleViewItem * _selectedItem; // +0x90
    UIButton * _changeButton; // +0x98
    long long _currentSelectRoleType; // +0xa0
}
- (id)initWithMsgRoleType:(int)arg1;
- (id)loadContentView;
- (UIEdgeInsets)contentInset;
- (void)reloadData;
- (void)setSelectedItem:(id)arg1;
- (void)changeRoleAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id /* block */)changeSuccessfulBlock;
- (void)setChangeSuccessfulBlock:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)cellViewModel;
- (void)setCellViewModel:(id)arg1;
- (id)roleContainerView;
- (void)setRoleContainerView:(id)arg1;
- (id)selectedItem;
- (id)changeButton;
- (void)setChangeButton:(id)arg1;
- (long long)currentSelectRoleType;
- (void)setCurrentSelectRoleType:(long long)arg1;
- (void).cxx_destruct;
@end
