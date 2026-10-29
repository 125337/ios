@interface WCFinderBusinessCustomListDetailViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderTopicListDetailViewModelDelegate, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListViewReportDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderBusinessCustomListDetailViewModelDelegate, WCFinderFeedDetailStatusViewDelegate, LiteAppEmbedViewControllerDelegate>
{
    BOOL _isPresentedScene; // +0x70
    int _commentScene; // +0x74
    int _fromCommentScene; // +0x78
    id <WCFinderBusinessCustomListDetailViewControllerDelegate> _delegate; // +0x80
    WCFinderFeedListView * _feedListView; // +0x88
    unsigned long long _firstViewOffset; // +0x90
    WCFinderBusinessCustomListDetailViewModel * _viewModel; // +0x98
    unsigned long long _enterTime; // +0xa0
    WCFinderShareCustomTransition * _animator; // +0xa8
    WCFinderFeedDetailStatusView * _statusView; // +0xb0
    MMLiteAppViewController * _embedLiteAppVC; // +0xb8
    UIView * _embedLiteAppView; // +0xc0
}
- (double)preferredBottomInsetForStandardOverlay;
- (id)initWithOffset:(unsigned long long)arg1 commentScene:(int)arg2 configTransition:(BOOL)arg3 fromCommentScene:(int)arg4 isPresentedScene:(BOOL)arg5;
- (BOOL)isPresentedScene;
- (id)viewModel;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)updateRightBarButtonItems;
- (void)onLimitedClicked;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (id)feedListView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (BOOL)finderFeedListViewHeaderCanFetchData:(id)arg1;
- (void)finderFeedListViewHeaderFetchMoreData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (id)specialParamsForFeedId:(id)arg1;
- (void)onFinderBusinessListFetchTopContentVM:(id)arg1 isPrefetch:(BOOL)arg2;
- (void)onFinderBusinessListOnStateOfNotExist:(id)arg1;
- (void)onFinderBusinessListOnStateOpenLiteApp:(id)arg1;
- (void)addEmbedLiteAppViewWithVC:(id)arg1;
- (void)relayoutEmbedLiteAppView;
- (void)onFinderBusinessListStopCurrentFeedPlay;
- (void)updateLandSpace:(CGSize)arg1;
- (void)onFinderBusinessListOnStateOpenComplaintUrl:(id)arg1;
- (void)closeCurPageCompletion:(id /* block */)arg1;
- (void)onFinderBusinessListFetchTopError;
- (void)onFinderBusinessListResultNoMore;
- (void)onFinderBusinessListResultTopNoMore;
- (void)onFinderBusinessListResultChanged:(BOOL)arg1;
- (void)onFinderBusinessListNextPageError;
- (void)onFinderBusinessListAppendData:(long long)arg1 toIndex:(long long)arg2;
- (void)onFinderTopicListResultError;
- (void)onFinderTopicListResultEmpty;
- (void)onFinderTopicListBeDeletedWith:(id)arg1 originIndex:(long long)arg2;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (id)minimizePageBizKey;
- (int)fromViewControllerScene;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (void)updateTransitionAnimator:(id)arg1;
- (void)appendBusinessModelArray:(id)arg1;
- (long long)totalFeedNum;
- (BOOL)isLoadingNextFeed;
- (long long)totalBusinessNum;
- (void)registerYReportSdk;
- (void)didClickBack:(id)arg1;
- (void)onClickClose:(BOOL)arg1;
- (void)present:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setFeedListView:(id)arg1;
- (unsigned long long)firstViewOffset;
- (void)setFirstViewOffset:(unsigned long long)arg1;
- (void)setViewModel:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)embedLiteAppVC;
- (void)setEmbedLiteAppVC:(id)arg1;
- (id)embedLiteAppView;
- (void)setEmbedLiteAppView:(id)arg1;
- (void)setIsPresentedScene:(BOOL)arg1;
- (void).cxx_destruct;
@end
