@interface WCSettingWatchViewController : MMUIViewController
{
    MMTableViewInfo * _mainTableViewInfo; // +0x70
}
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)initUI;
- (void)reloadData;
- (id)makeTableHeaderView;
- (void)showTipsViewAction;
- (void)showQuickRepliesViewAction;
- (void)showCodePayManageViewAction;
- (void).cxx_destruct;
@end
