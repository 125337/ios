@interface WCFinderFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderStreamLoadingStateDelegate, WCFinderFeedListTransitionVerticalGestureBehavior>
{
    BOOL _allowMinimize; // +0x70
    BOOL _hadLightShock; // +0x71
    int _scene; // +0x74
    id <WCFinderFeedListViewControllerDelegate> _delegate; // +0x78
    WCFinderStreamLoadingState * _loadingState; // +0x80
    NSString * _enterTid; // +0x88
    long long _enterOffset; // +0x90
    id /* block */ _feedListBackBlock; // +0x98
    id /* block */ _fetchMoreData; // +0xa0
    WCFinderAnimationLoadingView * _emptyLoadingView; // +0xa8
    WCFinderFeedListViewCtrlDataSource _feedArray2; // +0xb0
}
- (id)initWithScene:(int)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)feedListView;
- (id)getBarButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 style:(unsigned long long)arg4;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillPopOrDismiss:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_afterViewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setFeedArray:(id)arg1;
- (id)feedArray;
- (void)setFeedArray2:(WCFinderFeedListViewCtrlDataSource)arg1;
- (void)setLoadingState:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)finderFeedListView:(id)arg1 scrollViewDidScroll:(id)arg2;
- (BOOL)currentSceneIsLandSpace;
- (BOOL)beyondBufferArea:(id)arg1 bufferOffset:(double)arg2;
- (void)_requestNextPage;
- (void)onFeedArray:(id)arg1 batchUpdate:(id)arg2;
- (void)onFeedArray:(id)arg1 change:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (long long)numberOfContentVMsInTableView;
- (id)getViewController;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)onLoadingStateChanged:(id)arg1;
- (void)_updateLoadingState;
- (void)_updateFooterView;
- (void)showEmptyLoading:(BOOL)arg1;
- (void)onScrollViewContentOffsetChange;
- (void)layoutEmptyLoading;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (WCFinderFeedListViewCtrlDataSource)feedArray2;
- (id)loadingState;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (long long)enterOffset;
- (void)setEnterOffset:(long long)arg1;
- (BOOL)allowMinimize;
- (void)setAllowMinimize:(BOOL)arg1;
- (id /* block */)feedListBackBlock;
- (void)setFeedListBackBlock:(id /* block */)arg1;
- (id /* block */)fetchMoreData;
- (void)setFetchMoreData:(id /* block */)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)emptyLoadingView;
- (void)setEmptyLoadingView:(id)arg1;
- (BOOL)hadLightShock;
- (void)setHadLightShock:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
