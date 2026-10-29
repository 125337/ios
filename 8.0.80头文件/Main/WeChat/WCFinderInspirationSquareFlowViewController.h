@interface WCFinderInspirationSquareFlowViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCFinderRefreshTableFooterViewDelegate, WCFinderDataLoadTipsDelegate, WCFinderInspirationSquareFlowViewModelDelegate, WCFinderInspirationSquareFlowCellDelegate, WCFinderZoomAnimatorBehavior, WCFinderFeedBaseViewControllerProtocol>
{
    int _fromCommentScene; // +0x70
    UITableView * _tableView; // +0x78
    WCFinderInspirationSquareFlowViewModel * _viewModel; // +0x80
    WCFinderDataLoadTips * _dataLoadTips; // +0x88
    WCFinderRefreshTableFooterView * _footerView; // +0x90
}
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setupUI;
- (void)fetchData;
- (id)navigationBarBackgroundColor;
- (int)feedViewControllerScene;
- (void)inspirationSquareFlowViewModelDidStartLoading:(id)arg1;
- (void)inspirationSquareFlowViewModel:(id)arg1 didLoadDataSuccess:(id)arg2;
- (void)inspirationSquareFlowViewModel:(id)arg1 didLoadDataFailWithError:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onDataLoadTipsClickRetry;
- (void)didClickFooterRefreshRetry:(id)arg1;
- (void)finderFooterDidTriggerRefresh:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)inspirationSquareFlowCellDidSelected:(id)arg1 cellViewModel:(id)arg2 selectedDataItem:(id)arg3 selectedView:(id)arg4;
- (void)inspirationSquareFlowCellClickFavAction:(id)arg1 cellViewModel:(id)arg2;
- (id)inspirationSquareFlowCellReportCommonDictionary:(id)arg1 cellViewModel:(id)arg2;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)viewModel;
- (id)dataLoadTips;
- (void)setDataLoadTips:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end
