@interface WCFinderAccountSettingViewController : MMUIViewController
{
    FinderNewUserPrepareResponse * _prepareResponse; // +0x68
    WCTableViewManager * _tableViewManager; // +0x70
    NSString * _currentFinderUsername; // +0x78
}
- (id)initWithUsername:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)configureTableView;
- (void)reloadTableView;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)showMiniProgramWithAcctConfig:(id)arg1;
- (void)openWebWithURLString:(id)arg1;
- (id)prepareResponse;
- (void)setPrepareResponse:(id)arg1;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (id)currentFinderUsername;
- (void)setCurrentFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

