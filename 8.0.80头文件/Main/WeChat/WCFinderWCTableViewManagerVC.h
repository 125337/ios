@interface WCFinderWCTableViewManagerVC : MMUIViewController
{
    WCTableViewManager * _tableViewManager; // +0x70
}
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)reloadData;
- (void)onBuildTables;
- (id)tableViewManager;
- (void)setTableViewManager:(id)arg1;
- (void).cxx_destruct;
@end
