@interface WCFinderTopicListDetailViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderTopicListDetailViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListViewReportDelegate, WCFinderPostViewControllerDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell>
{
    int _topicType; // +0x70
    int _fromScene; // +0x74
    id <WCFinderTopicListDetailViewControllerDelegate> _delegate; // +0x78
    WCFinderFeedListView * _feedListView; // +0x80
    unsigned long long _firstViewOffset; // +0x88
    WCFinderTopicListDetailViewModel * _viewModel; // +0x90
    NSString * _displayTitle; // +0x98
    unsigned long long _enterTime; // +0xa0
    WCFinderShareCustomTransition * _animator; // +0xa8
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithListVM:(id)arg1 offset:(unsigned long long)arg2 displayTitle:(id)arg3 fromScene:(int)arg4;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)udfKVDict;
- (BOOL)useTransparentNavibar;
- (void)configureTableView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (BOOL)canShowAutoScrollItem;
- (BOOL)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (int)postMgrUserPrepareScene;
- (unsigned long long)postMgrCreateScene;
- (id)extInfoInLog21874;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)onPostMusicIds:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)postMgrGetMusicInfo;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)postMgrSourceInfo:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (void)onFinderTopicListResultNoMore;
- (void)onFinderTopicListResultChanged;
- (void)onFinderTopicListNextPageError;
- (void)onFinderTopicListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListBeDeletedWith:(id)arg1 originIndex:(long long)arg2;
- (void)onFinderTopicListFeedWithTid:(id)arg1 pinToTop:(BOOL)arg2 errorCode:(int)arg3;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (int)fromViewControllerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (unsigned long long)firstViewOffset;
- (void)setFirstViewOffset:(unsigned long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)displayTitle;
- (void)setDisplayTitle:(id)arg1;
- (int)fromScene;
- (void)setFromScene:(int)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (void).cxx_destruct;
@end
