@interface WSFlowListViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewReportDelegate>
{
    BOOL _hasLoadFirstLiteAppCell; // +0x70
    _TtC6WeChat15WSFlowListLogic * _flowListLogic; // +0x78
    _TtC6WeChat24WSFlowListLiteAppAdapter * _liteAppAdapter; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    unsigned long long _currentShowIndex; // +0x90
    NSArray * _listData; // +0x98
    NSString * _extInfo; // +0xa0
    NSString * _reportExtraInfo; // +0xa8
    UIView * _retryButton; // +0xb0
    NSString * _enterItemId; // +0xb8
    _TtC6WeChat21WSFlowListLiteAppCell * _currentActiveLiteAppCell; // +0xc0
    unsigned long long _currentActiveLiteAppCellIndex; // +0xc8
}
- (id)initWithExtInfo:(id)arg1 enterItemId:(id)arg2 reportExtraInfo:(id)arg3 enterExportId:(id)arg4;
- (void)initView;
- (void)initRetryButton;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPopOrDismiss:(BOOL)arg1;
- (void)dealloc;
- (void)configNavigationBar;
- (void)onNavBarLeftBackButtonClicked:(id)arg1;
- (id)navigationBarBackgroundColor;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)forbidCreateNavHeader;
- (void)updateFinderReportInfo;
- (void)initFeedListView;
- (void)fetchEnterFinderItemIfNeeded;
- (void)fetchFirstPageData;
- (void)fetchMoreData:(unsigned int)arg1;
- (id)listData;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (BOOL)finderFeedListView:(id)arg1 customViewAtSection:(long long)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)finderFeedListView:(id)arg1 customCellForRowAtIndexPath:(id)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (void)onScrollFromLiteAppCell:(id)arg1 toLiteAppCell:(id)arg2;
- (void)finderFeedListViewDidEndDecelerating:(id)arg1;
- (void)finderFeedListViewDidEndScrollingAnimation:(id)arg1;
- (void)onScrollEnd:(id)arg1;
- (void)onChangeToNewIndex:(unsigned int)arg1;
- (BOOL)isLiteAppPageAtIndex:(long long)arg1;
- (id)getLiteAppCellAtIndex:(long long)arg1;
- (void)reloadData;
- (void)updateTableDataWithInsertionFromIndex:(long long)arg1 length:(long long)arg2;
- (void)scrollToIndex:(unsigned long long)arg1 animate:(BOOL)arg2;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)currentCellModel;
- (void)setCellActive:(id)arg1 index:(unsigned long long)arg2;
- (void)clearActiveCell;
- (id)flowListLogic;
- (void)setFlowListLogic:(id)arg1;
- (id)liteAppAdapter;
- (void)setLiteAppAdapter:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (unsigned long long)currentShowIndex;
- (void)setCurrentShowIndex:(unsigned long long)arg1;
- (void)setListData:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (id)retryButton;
- (void)setRetryButton:(id)arg1;
- (id)enterItemId;
- (void)setEnterItemId:(id)arg1;
- (BOOL)hasLoadFirstLiteAppCell;
- (void)setHasLoadFirstLiteAppCell:(BOOL)arg1;
- (id)currentActiveLiteAppCell;
- (void)setCurrentActiveLiteAppCell:(id)arg1;
- (unsigned long long)currentActiveLiteAppCellIndex;
- (void)setCurrentActiveLiteAppCellIndex:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
