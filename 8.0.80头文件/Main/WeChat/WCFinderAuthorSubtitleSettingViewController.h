@interface WCFinderAuthorSubtitleSettingViewController : WCFinderCustomPanelSheet <UITableViewDataSource, UITableViewDelegate>
{
    UITableView * _tableView; // +0x70
    UILabel * _headerTipsLabel; // +0x78
    NSMutableArray * _itemArray; // +0x80
    NSIndexPath * _selectedIndexPath; // +0x88
    WCFinderFeedContentVM * _contentVM; // +0x90
}
- (id)loadContentView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithContentVM:(id)arg1;
- (BOOL)isLandScape;
- (double)tableViewHeight;
- (id)tableView;
- (id)tableHeaderView;
- (id)tableFooterView;
- (id)headerTipsLabel;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setTableView:(id)arg1;
- (void)setHeaderTipsLabel:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)selectedIndexPath;
- (void)setSelectedIndexPath:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
