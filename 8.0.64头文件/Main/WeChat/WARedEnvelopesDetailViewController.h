@interface WARedEnvelopesDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    MMTableView * m_tableView; // +0x70
    UIView * m_oHeaderView; // +0x78
    WARedEnvelopesDetailViewModel * m_viewModel; // +0x80
    UIView * oTopHeaderView; // +0x88
    ContactUpdateHelper * _m_helperForSenderNickName; // +0x90
    UIView * _m_pinImageView; // +0x98
}
- (id)initWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)setColorTitle:(id)arg1 TextColor:(id)arg2;
- (void)initNavigationBar;
- (id)navigationBarBackgroundColor;
- (void)initTableView;
- (id)GetViewHeader:(id)arg1;
- (id)GetHeaderView:(id)arg1;
- (void)gotoBalanceDetail;
- (void)onLeftBarButtonDone;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)addBorderViewBottomAtView:(id)arg1;
- (id)m_helperForSenderNickName;
- (void)setM_helperForSenderNickName:(id)arg1;
- (id)m_pinImageView;
- (void)setM_pinImageView:(id)arg1;
- (void).cxx_destruct;
@end
