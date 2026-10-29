@interface WCFinderBrandProfileViewController : MMUIViewController <WCFinderFeedListViewDataSource, WCFinderFeedListViewDelegate, WCFinderBrandProfileViewModelDelegate, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewMinimizeDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>
{
    WCFinderBrandProfileViewModel * _viewModel; // +0x68
    WCFinderFeedListView * _feedListView; // +0x70
    unsigned long long _firstOffset; // +0x78
    WCFinderShareCustomTransition * _animator; // +0x80
}
- (id)initWithViewModel:(id)arg1 offset:(unsigned long long)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)currentFeedMediaCell;
- (long long)numberOfContentVMsInTableView;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (BOOL)finderFeedListViewControllerShuldUseAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(BOOL)arg3;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (BOOL)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (BOOL)finderFeedListViewEnableSwipeGesturePushProfilePage:(id)arg1;
- (void)finderBrandProfileReloadAllData;
- (void)finderBrandProfileAppendDataFrom:(long long)arg1 toIndex:(long long)arg2;
- (void)finderBrandProfileNoMoreData;
- (void)finderBrandProfileRequestFailWithErrorCode:(int)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)feedListView;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)registerYReportSdk;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setFeedListView:(id)arg1;
- (unsigned long long)firstOffset;
- (void)setFirstOffset:(unsigned long long)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end

