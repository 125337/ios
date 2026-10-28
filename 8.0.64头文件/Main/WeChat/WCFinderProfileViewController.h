@interface WCFinderProfileViewController : MMUIViewController <WCFinderProfileViewModelProtocol, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedListViewDelegate, WCFinderFeedListViewDataSource, WCFinderFeedListViewMinimizeDelegate, WCFinderFeedListViewReportDelegate, WCFinderShareCustomTransitionProtocol, WCFinderCustomTransitionProtocol, WCFinderShareAbstractCell, WCFinderCollectionHalfScreenViewControllerDelegate, WCFinderStreamLoadingStateDelegate>
{
    BOOL _forcePushProfileAtHeaderClick; // +0x70
    BOOL _hasOperateStickyTop; // +0x71
    BOOL _hasBePop; // +0x72
    WCFinderProfileViewModel * _viewModel; // +0x78
    unsigned long long _firstViewOffset; // +0x80
    WCFinderRefreshTableFooterView * _footerView; // +0x88
    WCFinderFullShareListTemplatePlugin * _jsapiPlugin; // +0x90
    WCFinderFeedListView * _feedListView; // +0x98
    WCFinderCreateCoordinator * _createCoordinator; // +0xa0
    NSString * _bizInfoId; // +0xa8
    WCFinderShareCustomTransition * _animator; // +0xb0
    NSString * _traceId; // +0xb8
    NSString * _sourceFeedId; // +0xc0
}
- (id)initWithProfileVM:(id)arg1 offset:(unsigned long long)arg2;
- (id)initWithProfileVM:(id)arg1 selectedFeedId:(id)arg2;
- (void)handleConflictWithLive;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)configureTableView;
- (id)username;
- (id)currentFeedMediaCell;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (void)viewDidTransitionToNewSize;
- (BOOL)shouldInteruptHeaderClickWithFeedListView:(id)arg1 processingHeaderClick:(id)arg2 contentVM:(id)arg3;
- (void)onFeedArrayChanged:(id)arg1;
- (void)onClickToolbarCollectionAction:(id)arg1 sourceType:(int)arg2;
- (id)finderFeedListView:(id)arg1 contentVMAtSection:(long long)arg2;
- (id)finderFeedListView:(id)arg1 contentVMOfTid:(id)arg2;
- (long long)numberOfContentVMsInTableView;
- (long long)finderFeedListView:(id)arg1 sectionOfTid:(id)arg2;
- (BOOL)finderFeedListViewCanPollFetchTopData:(id)arg1;
- (void)finderFeedListViewOnPollFetchTopData:(id)arg1;
- (void)updateTopPullingState;
- (void)finderFeedListViewFetchMoreData:(id)arg1;
- (void)finderFeedListViewRetryFetch:(id)arg1;
- (unsigned long long)finderFeedListDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedListViewCanPreFetchData:(id)arg1;
- (id)finderFeedListViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedListViewIsNoMoreData:(id)arg1;
- (void)finderFeedListView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)canShowAutoScrollItem;
- (id)finderFeedList:(id)arg1 actionConfigureWithContentVM:(id)arg2;
- (void)finderFeedListView:(id)arg1 dislikeContentVM:(id)arg2;
- (BOOL)finderFeedList:(id)arg1 scrollActionSheet:(id)arg2 customResponseSelecteItem:(id)arg3;
- (id)finderFeedListViewCustomTableViewParam:(id)arg1 contentVM:(id)arg2;
- (BOOL)isInSubScene;
- (BOOL)finderFeedListView:(id)arg1 processingHeaderClick:(id)arg2 avatarType:(unsigned long long)arg3 contentVM:(id)arg4;
- (void)finderFeedListViewDidClickScreenRotateBtn:(id)arg1;
- (BOOL)finderFeedListViewControllerShuldUseAnimationFromVC:(id)arg1 toVC:(id)arg2 isClosure:(BOOL)arg3;
- (BOOL)finderFeedListViewControllerSupportMinimize:(id)arg1;
- (BOOL)finderFeedListViewShouldDragDownCloseInvoke;
- (id)minimizePageBizKey;
- (void)finderFeedListMediaDidEndPlay:(unsigned long long)arg1 contentVM:(id)arg2 finderPlayerReport:(id)arg3;
- (void)finderFeedListView:(id)arg1 changeCurrentFocusIndexPath:(id)arg2 currentFocusTid:(id)arg3;
- (id)specialParamsForFeedId:(id)arg1;
- (void)didClickToolbarDeleteAction:(id)arg1;
- (void)deleteFeedWithContentVM:(id)arg1;
- (void)changeStickyTopStatus:(BOOL)arg1 contentVM:(id)arg2;
- (void)profileViewModel:(id)arg1 changeData:(id)arg2;
- (void)finderFeedListView:(id)arg1 deleteContentVM:(id)arg2;
- (void)profileViewModelShowPrivateAccountTips:(id)arg1;
- (void)finderFeedListViewDeleteDataItem:(id)arg1 deleteTid:(id)arg2;
- (void)showPrivateAccountAlert;
- (void)updateFooterStatus;
- (void)onLoadingStateChanged:(id)arg1;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)extInfoInLog21874;
- (id)clientInfoInLog18054;
- (void)registerYReportSdk;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)doShareAnimation;
- (void)updateTransitionAnimator:(id)arg1;
- (id)getCustomTransitionAnimator:(BOOL)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (unsigned long long)firstViewOffset;
- (void)setFirstViewOffset:(unsigned long long)arg1;
- (BOOL)forcePushProfileAtHeaderClick;
- (void)setForcePushProfileAtHeaderClick:(BOOL)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)jsapiPlugin;
- (void)setJsapiPlugin:(id)arg1;
- (id)feedListView;
- (void)setFeedListView:(id)arg1;
- (id)createCoordinator;
- (void)setCreateCoordinator:(id)arg1;
- (BOOL)hasOperateStickyTop;
- (void)setHasOperateStickyTop:(BOOL)arg1;
- (id)bizInfoId;
- (void)setBizInfoId:(id)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (BOOL)hasBePop;
- (void)setHasBePop:(BOOL)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (void).cxx_destruct;
@end
