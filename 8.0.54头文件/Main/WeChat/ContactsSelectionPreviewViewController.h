@interface ContactsSelectionPreviewViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <ContactsSelectionPreviewViewControllerDelegate> _delegate; // +0x68
    WCColorProxy * _colorProxy; // +0x70
    NSArray * _selectedContacts; // +0x78
    MMTableView * _tableView; // +0x80
    UIButton * _completeButton; // +0x88
    UIButton * _selectAllButton; // +0x90
    UIView * _bottomBar; // +0x98
}
- (void)viewDidLoad;
- (void)initView;
- (void)initBottomBar;
- (void)viewDidLayoutSubviews;
- (id)colorProxy;
- (void)updateWithCompleteBarButtonItem:(id)arg1;
- (void)updateSelectAllButtonIcon;
- (void)onDone:(id)arg1;
- (void)onTapSelectAllButton;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setColorProxy:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (void).cxx_destruct;
@end

