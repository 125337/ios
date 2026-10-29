@interface WCFinderFollowTabDetailViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowTabDetailVMDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>
{
    int _commentScene; // +0x68
    id <WCFinderFollowTabDetailVCDelegate> _delegate; // +0x70
    id /* block */ _exitBlock; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    WCFinderFollowTabDetailBaseViewModel * _viewModel; // +0x88
    WCFinderShareCustomTransition * _animator; // +0x90
    WCFinderFollowTabDetailVCReporter * _reporter; // +0x98
    NSIndexPath * _currentMaxIndexPath; // +0xa0
}
- (id)initWithFeedFollowVM:(id)arg1 preVCData:(id)arg2 postFeedInsertMachineTab:(BOOL)arg3;
- (id)initWithFeedFollowVM:(id)arg1 preVCData:(id)arg2 reporter:(id)arg3 postFeedInsertMachineTab:(BOOL)arg4;
- (id)initWithFinderUsername:(id)arg1 lastTid:(id)arg2 nonceID:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (BOOL)useTransparentNavibar;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (void)configureFeedListView;
- (void)deleteContentVM:(id)arg1;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListViewShowsMoreButton:(id)arg1;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (void)onFollowTabDetailVMDataChange;
- (void)onFollowTabDetailVMDataEmpty;
- (void)onFollowTabDetailVMDataAppendFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)onFollowTabDetailVMDataDeleteDataAtIndex:(long long)arg1;
- (int)followDetailVMGetCommentScene;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)exitBlock;
- (void)setExitBlock:(id /* block */)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)currentMaxIndexPath;
- (void)setCurrentMaxIndexPath:(id)arg1;
- (void).cxx_destruct;
@end

