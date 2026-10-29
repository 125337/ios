@interface WCFinderFeedSubtitleSettingViewController : WCFinderCustomPanelSheet <UITableViewDataSource, UITableViewDelegate>
{
    id <WCFinderFeedSubtitleSettingViewControllerDelegate> _delegate; // +0x68
    UITableView * _tableView; // +0x70
    UILabel * _headerTipsLabel; // +0x78
    NSMutableArray * _itemArray; // +0x80
    NSIndexPath * _initialSelectedIndexPath; // +0x88
}
- (id)loadContentView;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateWithLanguageArray:(id)arg1 displaySet:(id)arg2;
- (BOOL)isLandScape;
- (double)tableViewHeight;
- (id)indexPathOfSelectRow:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)tableView;
- (id)tableHeaderView;
- (id)tableFooterView;
- (id)headerTipsLabel;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setHeaderTipsLabel:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (id)initialSelectedIndexPath;
- (void)setInitialSelectedIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

