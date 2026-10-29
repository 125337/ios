@interface WCMomentsUserListHalfScreenViewController : MMUIHalfScreenViewController <UITableViewDataSource, UITableViewDelegate>
{
    NSArray * _userContacts; // +0x68
    MMTableView * _tableView; // +0x70
    UILabel * _titleLabel; // +0x78
    MMUIButton * _closeButon; // +0x80
}
- (id)init;
- (id)initWithUserContacts:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)fitSuitableHeight;
- (void)loadTableView;
- (void)loadTopViews;
- (void)closeButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)userContacts;
- (void)setUserContacts:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButon;
- (void)setCloseButon:(id)arg1;
- (void).cxx_destruct;
@end

