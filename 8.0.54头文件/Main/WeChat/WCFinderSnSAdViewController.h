@interface WCFinderSnSAdViewController : MMUIViewController <WCFinderSnSAdListViewModelDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedDetailStatusViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderAdReportInfoProtocol>
{
    WCFinderShareListReportModel * _reportModel; // +0x68
    WCFinderFeedListView * _feedListView; // +0x70
    WCFinderSnSAdListViewModel * _viewModel; // +0x78
    UIView * _moreRelatedView; // +0x80
    WCFinderNearByDescriptionTableViewCell * _descriptionCell; // +0x88
    UIButton * _rightFollowBtn; // +0x90
    UIView * _moreRelatedMaskView; // +0x98
    NSString * _adParamInofStr; // +0xa0
}
- (id)initWithTid:(id)arg1 nonceId:(id)arg2 userName:(id)arg3 reportModel:(id)arg4 encryptedlastTid:(id)arg5 adParamInofStr:(id)arg6;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)updateRightBarItem;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)dealloc;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)onClickCloseLeftItem;
- (void)onClickFollowRightItem;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (id)specialParamsForFeedId:(id)arg1;
- (id)moreRelatedView;
- (void)changeMoreRelatedViewHidden:(BOOL)arg1;
- (void)finderSnSAdListFetchDataSuc;
- (void)finderSnSAdListLoadMoreFinished:(id)arg1;
- (void)finderSnSAdListNoMoreData;
- (void)finderSnSAdListShouldReloadMediaWithTid:(id)arg1;
- (void)finderSnSAdListDeleteDataItemVM:(id)arg1;
- (void)finderSnSAdListEmpty;
- (void)finderSnSAdListOnStateOfNotExist:(id)arg1;
- (void)finderSnSAdListFetchFailWithErrorCode:(int)arg1;
- (void)finderSnSAdListFollowStatusChanged:(BOOL)arg1 followState:(unsigned long long)arg2;
- (void)reportClickCard;
- (void)didClickBack:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)reportAdJSONString;
- (id)enterSourceFeedID;
- (void)registerYReportSdk;
- (id)reportModel;
- (void)setReportModel:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setMoreRelatedView:(id)arg1;
- (id)descriptionCell;
- (void)setDescriptionCell:(id)arg1;
- (id)rightFollowBtn;
- (void)setRightFollowBtn:(id)arg1;
- (id)moreRelatedMaskView;
- (void)setMoreRelatedMaskView:(id)arg1;
- (id)adParamInofStr;
- (void)setAdParamInofStr:(id)arg1;
- (void).cxx_destruct;
@end

