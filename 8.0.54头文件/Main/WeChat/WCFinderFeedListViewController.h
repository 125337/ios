@interface WCFinderFeedListViewController : MMUIViewController <WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderStreamLoadingStateDelegate>
{
    BOOL _allowMinimize; // +0x68
    int _scene; // +0x6c
    WCFinderFeedArray * _feedArray; // +0x70
    WCFinderStreamLoadingState * _loadingState; // +0x78
    long long _enterOffset; // +0x80
    id /* block */ _feedListBackBlock; // +0x88
    id /* block */ _fetchMoreData; // +0x90
    WCFinderAnimationLoadingView * _emptyLoadingView; // +0x98
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
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_afterViewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)setFeedArray:(id)arg1;
- (void)setLoadingState:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (void)_requestNextPage;
- (void)onFeedArrayChanged;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
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
- (id)feedArray;
- (id)loadingState;
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
- (void).cxx_destruct;
@end

