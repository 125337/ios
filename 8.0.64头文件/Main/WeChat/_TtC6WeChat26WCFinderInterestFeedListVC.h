@interface _TtC6WeChat26WCFinderInterestFeedListVC : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewMinimizeDelegate>
{
     vm; // +0x8
     commentVC; // +0x10
     $__lazy_storage_$_finderFeedListView; // +0x18
}
- (id)getCurMediaListObject;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 rowOfCustomViewAtSection:(long long)arg2;
- (double)finderFeedListView:(id)arg1 heightForCustomRowAtIndexPath:(id)arg2;
- (id)minimizePageBizKey;
- (BOOL)finderFeedListViewControllerForbidenDragDownClose;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (BOOL)useTransparentNavibar;
- (id)initWithCoder:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)popSelf;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end
