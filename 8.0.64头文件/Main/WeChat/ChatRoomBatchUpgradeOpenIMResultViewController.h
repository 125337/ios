@interface ChatRoomBatchUpgradeOpenIMResultViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>
{
    MMTableView * m_tableView; // +0x70
    NSMutableArray * m_upgradeOpenIMChatRoomAr; // +0x78
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x80
    UIImage * m_logoSVGImage; // +0x88
    UIButton * m_iAcceptBtn; // +0x90
    NSMutableDictionary * _dicBatchUpgradeOpenIMResult; // +0x98
}
- (void)viewDidLoad;
- (void)initData;
- (void)layoutView;
- (void)layoutCommonHeadView;
- (void)layoutIAcceptBtn;
- (void)reloadData;
- (void)initTableView;
- (id)genHeaderView;
- (void)reloadTableData;
- (id)genFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)doIAccept;
- (id)navigationBarBackgroundColor;
- (id)dicBatchUpgradeOpenIMResult;
- (void)setDicBatchUpgradeOpenIMResult:(id)arg1;
- (void).cxx_destruct;
@end
