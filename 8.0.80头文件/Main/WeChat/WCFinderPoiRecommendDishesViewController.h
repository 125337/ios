@interface WCFinderPoiRecommendDishesViewController : MMUIViewController <WCFinderPoiRecommendDishesViewModelDelegte, UITableViewDataSource, UITableViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    WCFinderPoiRecommendDishesViewModel * _viewModel; // +0x70
    NSMutableDictionary * _reportDict; // +0x78
    UITableView * _tableView; // +0x80
    MMUIButton * _footerView; // +0x88
}
- (id)initWithRecommendDishesComponent:(id)arg1 reportDict:(id)arg2;
- (void)viewDidLoad;
- (id)tableView;
- (id)footerView;
- (void)onClickFooterView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onPoiRecommendDishesUpdate;
- (void)onPoiRecommendDishesRequestFail;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)reportDict;
- (void)setReportDict:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
